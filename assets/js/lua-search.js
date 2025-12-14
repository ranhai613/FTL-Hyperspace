(function(window, document) {
    'use strict';

    var body = document.body;
    var searchInput = document.getElementById('lua-search-input');
    if (!searchInput) {
        return;
    }

    var resultsContainer = document.getElementById('lua-search-results');
    var resultsSummary = document.getElementById('lua-search-summary');
    var clearButton = document.getElementById('lua-search-clear');
    var highlightToggle = document.getElementById('lua-highlight-toggle');
    var highlightStorageKey = 'luaHighlightResults';
    var pageHighlightTerm = '';
    var highlightEnabled = true;
    var $contentNode = null;
    var index = null;
    var documents = [];
    var documentMap = {};
    var config = window.luaSearchConfig || {};
    var minChars = config.minChars || 2;
    var resultsBatchSize = config.batchSize || 20;
    var currentResults = [];
    var currentQuery = '';
    var renderedCount = 0;

    function escapeHtml(str) {
        return (str || '').replace(/[&<>"']/g, function(match) {
            switch (match) {
                case '&': return '&amp;';
                case '<': return '&lt;';
                case '>': return '&gt;';
                case '"': return '&quot;';
                default: return '&#39;';
            }
        });
    }

    function escapeRegExp(str) {
        return str.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
    }

    function appendHighlightParam(url, query) {
        if (!query) {
            return url;
        }
        var parts = url.split('#');
        var base = parts.shift();
        var hash = parts.length ? '#' + parts.join('#') : '';
        var joiner = base.indexOf('?') === -1 ? '?' : '&';
        return base + joiner + 'h=' + encodeURIComponent(query) + hash;
    }

    function updateResultsSummary(count, query) {
        if (!resultsSummary) {
            return;
        }
        if (typeof count === 'number') {
            var label = count === 1 ? '1 match' : count + ' matches';
            if (query) {
                label += ' for "' + query + '"';
            }
            resultsSummary.textContent = label;
        } else {
            resultsSummary.textContent = '';
        }
    }

    function buildSnippet(text, query) {
        if (!text) {
            return '';
        }
        var normalized = text.replace(/\s+/g, ' ').trim();
        if (!normalized) {
            return '';
        }
        var tokens = (query || '').trim().split(/\s+/).filter(Boolean);
        var lower = normalized.toLowerCase();
        var matchIndex = -1;
        var matchLength = 0;
        var i;
        if (tokens.length) {
            for (i = 0; i < tokens.length; i++) {
                var token = tokens[i].toLowerCase();
                var idx = lower.indexOf(token);
                if (idx !== -1) {
                    matchIndex = idx;
                    matchLength = token.length;
                    break;
                }
            }
        }
        if (matchIndex === -1) {
            matchIndex = 0;
            matchLength = Math.min(30, normalized.length);
        }
        var start = Math.max(0, matchIndex - 60);
        var end = Math.min(normalized.length, matchIndex + matchLength + 60);
        var snippet = normalized.slice(start, end);
        var escaped = escapeHtml(snippet);
        if (tokens.length) {
            var regex = new RegExp(tokens.map(function(token) {
                return escapeRegExp(token);
            }).join('|'), 'gi');
            escaped = escaped.replace(regex, function(match) {
                return '<mark>' + match + '</mark>';
            });
        }
        var prefix = start > 0 ? '... ' : '';
        var suffix = end < normalized.length ? ' ...' : '';
        return prefix + escaped + suffix;
    }

    function buildResultMarkup(doc, query) {
        var title = escapeHtml(doc.title || doc.url);
        var snippet = buildSnippet(doc.content || '', query);
        var href = appendHighlightParam(doc.url, query);
        return '<article class="lua-search-result">' +
            '<a class="lua-search-result-title" href="' + href + '">' + title + '</a>' +
            '<p class="lua-search-result-snippet">' + snippet + '</p>' +
            '</article>';
    }

    function renderMessage(message, className, summaryCount, summaryQuery) {
        if (!resultsContainer) {
            return;
        }
        var cssClass = className || 'lua-search-hint';
        resultsContainer.innerHTML = '<p class="' + cssClass + '">' + message + '</p>';
        resultsContainer.scrollTop = 0;
        currentResults = [];
        currentQuery = '';
        renderedCount = 0;
        if (typeof summaryCount === 'number') {
            updateResultsSummary(summaryCount, summaryQuery);
        } else {
            updateResultsSummary(null);
        }
    }

    function renderIdle() {
        renderMessage('Type at least ' + minChars + ' characters to search.', 'lua-search-hint');
    }

    function renderMatches(query, matches) {
        if (!resultsContainer) {
            return;
        }
        if (!matches || !matches.length) {
            renderMessage('No matches for "' + escapeHtml(query) + '".', 'lua-search-empty', 0, query);
            return;
        }
        currentQuery = query;
        currentResults = matches.slice();
        renderedCount = 0;
        resultsContainer.innerHTML = '';
        resultsContainer.scrollTop = 0;
        updateResultsSummary(currentResults.length, query);
        appendMoreResults();
    }

    function appendMoreResults() {
        if (!resultsContainer || !currentResults.length) {
            return;
        }
        if (renderedCount >= currentResults.length) {
            return;
        }
        var nextLimit = Math.min(renderedCount + resultsBatchSize, currentResults.length);
        var html = '';
        for (var i = renderedCount; i < nextLimit; i++) {
            var match = currentResults[i];
            if (!match) {
                continue;
            }
            var doc = documentMap[match.ref];
            if (!doc) {
                continue;
            }
            html += buildResultMarkup(doc, currentQuery);
        }
        renderedCount = nextLimit;
        if (html) {
            resultsContainer.insertAdjacentHTML('beforeend', html);
        }
        if (renderedCount < currentResults.length && resultsContainer.scrollHeight <= resultsContainer.clientHeight + 24) {
            appendMoreResults();
        }
    }

    function handleResultsScroll() {
        if (!resultsContainer || !currentResults.length) {
            return;
        }
        var threshold = 32;
        var position = resultsContainer.scrollTop + resultsContainer.clientHeight;
        if (position >= resultsContainer.scrollHeight - threshold) {
            appendMoreResults();
        }
    }

    function buildLunrQuery(value) {
        return value.trim().split(/\s+/).map(function(part) {
            var token = part.replace(/[:\-~^!*+]/g, '');
            return token ? token + '*' : '';
        }).filter(Boolean).join(' ');
    }

    function handleSearchInput() {
        var raw = searchInput.value || '';
        var query = raw.trim();
        if (clearButton) {
            clearButton.classList.toggle('is-visible', query.length > 0);
        }
        if (!query) {
            renderIdle();
            return;
        }
        if (query.length < minChars) {
            renderMessage('Keep typing to refine your search.', 'lua-search-hint');
            return;
        }
        if (!index) {
            renderMessage('Building search index...', 'lua-search-hint');
            return;
        }
        var lunrQuery = buildLunrQuery(query);
        if (!lunrQuery) {
            renderIdle();
            return;
        }
        var results = [];
        try {
            results = index.search(lunrQuery);
        } catch (err) {
            console.warn('Lua search failed', err);
            renderMessage('Unable to run search right now.', 'lua-search-error');
            return;
        }
        renderMatches(query, results);
    }

    function fetchSearchData() {
        if (!window.fetch || !window.lunr) {
            renderMessage('Search is unavailable in this browser.', 'lua-search-error');
            return;
        }
        var dataUrl = config.searchDataUrl;
        if (!dataUrl) {
            renderMessage('Search index path not found.', 'lua-search-error');
            return;
        }
        fetch(dataUrl)
            .then(function(response) {
                if (!response.ok) {
                    throw new Error('Network response was not ok');
                }
                return response.json();
            })
            .then(function(data) {
                documents = Array.isArray(data) ? data : [];
                documents.forEach(function(entry) {
                    documentMap[entry.url] = entry;
                });
                index = lunr(function() {
                    this.ref('url');
                    this.field('title', { boost: 10 });
                    this.field('content');
                    this.pipeline.remove(lunr.stemmer);
                    this.searchPipeline.remove(lunr.stemmer);
                    for (var i = 0; i < documents.length; i++) {
                        this.add(documents[i]);
                    }
                });
                handleSearchInput();
            })
            .catch(function(error) {
                console.error('Unable to build Lua search index', error);
                renderMessage('Unable to load search index.', 'lua-search-error');
            });
    }

    function getContentNode() {
        if (!$contentNode && window.jQuery) {
            $contentNode = window.jQuery('.lua-content');
        }
        return $contentNode;
    }

    function clearHighlights() {
        var $node = getContentNode();
        if ($node && $node.length && $node.unmark) {
            $node.unmark();
        }
    }

    function scrollToFirstMark() {
        var $node = getContentNode();
        if (!$node || !$node.length) {
            return;
        }
        var $target = $node.find('mark').first();
        if (!$target.length) {
            return;
        }
        var offset = $target.offset().top - 80;
        window.scrollTo({ top: offset >= 0 ? offset : 0, behavior: 'smooth' });
    }

    function ensureHashVisibility() {
        if (!window.location.hash) {
            return;
        }
        var element = document.getElementById(window.location.hash.substring(1));
        if (!element) {
            return;
        }
        var top = element.getBoundingClientRect().top + window.scrollY - 80;
        window.scrollTo({ top: top >= 0 ? top : 0, behavior: 'smooth' });
    }

    function applyHighlight(term) {
        if (!term || !highlightEnabled) {
            return;
        }
        var $node = getContentNode();
        if (!$node || !$node.length || !$node.mark) {
            return;
        }
        window.requestAnimationFrame(function() {
            $node.unmark({
                done: function() {
                    $node.mark(term, {
                        separateWordSearch: true,
                        done: function() {
                            scrollToFirstMark();
                            ensureHashVisibility();
                        }
                    });
                }
            });
        });
    }

    function readHighlightPreference() {
        var stored = null;
        try {
            stored = window.localStorage ? localStorage.getItem(highlightStorageKey) : null;
        } catch (err) {
            stored = null;
        }
        highlightEnabled = stored !== 'off';
        if (highlightToggle) {
            highlightToggle.checked = highlightEnabled;
        }
        body.classList.toggle('lua-hide-marks', !highlightEnabled);
    }

    function persistHighlightPreference(enabled) {
        try {
            if (window.localStorage) {
                localStorage.setItem(highlightStorageKey, enabled ? 'on' : 'off');
            }
        } catch (err) {
            /* ignore */
        }
    }

    function parseHighlightFromUrl() {
        if (!window.URLSearchParams) {
            return;
        }
        var params = new URLSearchParams(window.location.search);
        var value = params.get('h');
        if (!value) {
            return;
        }
        pageHighlightTerm = value;
        if (highlightEnabled) {
            applyHighlight(pageHighlightTerm);
        }
    }

    function clearSearch() {
        searchInput.value = '';
        if (clearButton) {
            clearButton.classList.remove('is-visible');
        }
        renderIdle();
        searchInput.focus();
    }

    searchInput.addEventListener('input', handleSearchInput);
    searchInput.addEventListener('keydown', function(event) {
        if (event.key === 'Escape') {
            clearSearch();
            event.preventDefault();
        }
    });

    if (clearButton) {
        clearButton.addEventListener('click', function() {
            clearSearch();
        });
    }

    if (highlightToggle) {
        highlightToggle.addEventListener('change', function() {
            highlightEnabled = !!highlightToggle.checked;
            body.classList.toggle('lua-hide-marks', !highlightEnabled);
            persistHighlightPreference(highlightEnabled);
            if (!highlightEnabled) {
                clearHighlights();
            } else if (pageHighlightTerm) {
                applyHighlight(pageHighlightTerm);
            }
        });
    }

    if (resultsContainer) {
        resultsContainer.addEventListener('scroll', handleResultsScroll);
    }

    renderIdle();
    readHighlightPreference();
    fetchSearchData();
    parseHighlightFromUrl();
})(window, document);
