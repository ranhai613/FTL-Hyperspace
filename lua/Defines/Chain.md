---
layout: lua
title: Chain
lang: en
category: Enum
---

# Enum "Chain"

<!-- Head content to be pulled from "lua-source-parts-inject/Defines/Chain/_head.md" -->


<!-- Table descriptions pulled from "lua-source-parts-inject/Defines/Chain/_table_descriptions.json" -->

| Name | Value | Description |
| --- | --- | --- |
| CONTINUE | 0 | Call the next callback in the sequence if there is one |
| HALT | 1 | Halt the callback loop, but still run subsequent C++ code |
| PREEMPT | 2 | Halt the callback loop and skip subsequent C++ code |
