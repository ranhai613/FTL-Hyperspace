#include "CustomOptions.h"
#define ModOptions (ModOptionsScreen::GetInstance())

CustomOptionsManager CustomOptionsManager::instance = CustomOptionsManager();

void Selector::OnInit() {}
void Selector::OnRender() {}
void Selector::MouseMove(int mX, int mY) {}
void Selector::MouseClick(int mX, int mY) {}
int Selector::MeasureHeight() {}

const int SimpleTextButton::line_length = 180;

SimpleTextButton::SimpleTextButton(const std::string &_text, bool _bRightAlign) :
text(_text), bRightAlign(_bRightAlign)
{
    on_click = [&](SimpleTextButton* const _this) {};
    data = 0;
}

void SimpleTextButton::OnInit()
{
    textColor = COLOR_WHITE;
    SetText(text);
}

void SimpleTextButton::OnRender()
{
    CSurface::GL_SetColor(textColor);
    freetype::easy_printAutoNewlines(13, hitbox.x, hitbox.y, line_length, text);
}

void SimpleTextButton::MouseMove(int mX, int mY)
{
    if (hitbox.x <= mX && mX <= hitbox.x + hitbox.w && hitbox.y <= mY && mY <= hitbox.y + hitbox.h)
    {
        textColor = COLOR_YELLOW;
    }
    else
    {
        textColor = COLOR_WHITE;
    }
}

void SimpleTextButton::MouseClick(int mX, int mY)
{
    if (hitbox.x <= mX && mX <= hitbox.x + hitbox.w && hitbox.y <= mY && mY <= hitbox.y + hitbox.h)
    {
        on_click(this);
    }
}

int SimpleTextButton::MeasureHeight()
{
    return static_cast<int>(freetype::easy_measurePrintLines(13, 0.f, 0.f, line_length, text).y);
}

void SimpleTextButton::SetText(const std::string &_text)
{
    hitbox.x = position.x;
    hitbox.y = position.y;

    text = _text;
    Pointf textSize = freetype::easy_measurePrintLines(13, 0, 0, line_length, text);
    hitbox.w = textSize.x;
    hitbox.h = textSize.y;
    if (bRightAlign)
    {
        hitbox.x += 180 - textSize.x;
    }
}

SettingEntry::SettingEntry(const std::string &_text, Selector* _selector) : text(_text), selector(_selector)
{
    position = Point();
    height = 0;
}

void SettingEntry::OnInit(int x, int y)
{
    position.x = x;
    position.y = y;
    selector->position.x = x;
    selector->position.y = y;
    selector->position.x += 220;
    selector->OnInit();
    int textHeight = static_cast<int>(freetype::easy_measurePrintLines(13, 0.f, 0.f, 300, text).y);
    int selectorHeight = selector->MeasureHeight();
    if (textHeight > selectorHeight)
    {
        selector->position.y += (textHeight - selectorHeight) / 2;
    }
    else if (textHeight < selectorHeight)
    {
        position.y += (selectorHeight - textHeight) / 2;
    }
    height = std::max(textHeight, selectorHeight);
}

void SettingEntry::OnRender()
{
    CSurface::GL_SetColor(COLOR_WHITE);
    freetype::easy_printAutoNewlines(13, position.x, position.y, 300, text);
    selector->OnRender();
}

void SettingEntry::MouseMove(int mX, int mY)
{
    selector->MouseMove(mX, mY);
}

void SettingEntry::MouseClick(int mX, int mY)
{
    selector->MouseClick(mX, mY);
}


ModOptionsScreen ModOptionsScreen::instance = ModOptionsScreen();

ModOptionsScreen::ModOptionsScreen()
{
    customBox = nullptr;
    bOpen = false;
    SimpleTextButton *dismissSoundButton = new SimpleTextButton("airLoss", true);
    dismissSoundButton->data = 1;
    dismissSoundButton->on_click = [&](SimpleTextButton* const _this)
    {
        switch (_this->data)
        {
            case 0:
                _this->SetText("airLoss");
                _this->data = 1;
                CustomOptionsManager::GetInstance()->dismissSound.currentValue = "airLoss";
                break;
            case 1:
                _this->SetText("None");
                _this->data = 2;
                CustomOptionsManager::GetInstance()->dismissSound.currentValue = "";
                break;
            case 2:
                _this->SetText("DOOM");
                _this->data = 0;
                CustomOptionsManager::GetInstance()->dismissSound.currentValue = "flak";
                break;
        }
    };
    entries.emplace_back("Dismiss Sound:", dismissSoundButton);
}

void ModOptionsScreen::OnInit()
{
    if (customBox == nullptr)
    {
        customBox = new WindowFrame(130, 112, 1089, 500);
    }

    const int gap = 10;
    Point pos = Point(160, 140);
    for (auto &entry : entries)
    {
        entry.OnInit(pos.x, pos.y);
        pos.y += entry.height + gap;
    }
}

void ModOptionsScreen::OnRender()
{
    customBox->Draw(0, 0);
    GL_Texture *tabTexture = G_->GetResources()->GetImageId("box_options_configure_tab.png");

    std::string tabText = "Hyperspace Settings";
    
    Pointf tabSize = freetype::easy_measurePrintLines(63, 0.f, 0.f, 999, tabText);
    CSurface::GL_BlitImagePartial(tabTexture, 123.f, 70.f, 39.f, tabTexture->height_, 0.0, 39.f / tabTexture->width_, 0.f, 1.f, 1.f, COLOR_WHITE, false);
    CSurface::GL_BlitImagePartial(tabTexture, 162.f, 70.f, std::roundf(tabSize.x) - 16.f, tabTexture->height_, 39.f / tabTexture->width_, 40.f / tabTexture->width_, 0.f, 1.f, 1.f, COLOR_WHITE, false);
    CSurface::GL_BlitImagePartial(tabTexture, std::roundf(tabSize.x) + 146.f, 70.f, 51.f, tabTexture->height_, 40.f / tabTexture->width_, 91.f / tabTexture->width_, 0.f, 1.f, 1.f, COLOR_WHITE, false);
    CSurface::GL_SetColor(COLOR_BUTTON_TEXT);
    freetype::easy_print(63, 154.f, 81.f, tabText);
    CSurface::GL_SetColor(COLOR_WHITE);

    for (auto &entry : entries)
    {
        entry.OnRender();
    }

}

void ModOptionsScreen::MouseMove(int mX, int mY)
{
    for (auto entry : entries)
    {
        entry.MouseMove(mX, mY);
    }
}

void ModOptionsScreen::MouseClick(int mX, int mY)
{
    for (auto entry : entries)
    {
        entry.MouseClick(mX, mY);
    }
}

HOOK_METHOD(OptionsScreen, OnInit, () -> void)
{
    super();
    ModOptions->OnInit();
}

HOOK_METHOD_PRIORITY(OptionsScreen, OnRender, 1000, () -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::OnRender -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino
    
    // Satic link to text library
    TextLibrary *textLibrary = G_->GetTextLibrary();

    // Internal Vars
    Point newLocation;
    std::string localizedText;
    int16_t closeButtonX, closeButtonY;
    int16_t baseX = position.x;
    int16_t baseY = position.y;

    // set colortint when some stuff is open
    if (langChooser.bOpen || wipeProfileDialog.bOpen || restartRequiredDialog.bOpen) 
    {
        CSurface::GL_SetColorTint(COLOR_TINT);
    }

    //========== Mod Options Screen Addition Start ==========
    if (ModOptions->bOpen)
    {
        newLocation.x = 1190 - closeButton.GetSize().x; // 1190 = 0x4a6 in decimal
        newLocation.y = 619; // 619 = 0x26b in decimal
        closeButton.SetLocation(newLocation);
        ModOptions->OnRender();
    }
    //========== Mod Options Screen Addition End ==========
    // no custom controlls - idk what they mean, maybe has to do with ipad code
    //========== Mod Options Screen Changes Start ==========
    // original: `if (!bCustomizeControls) `
    else if (!bCustomizeControls) 
    //========== Mod Options Screen Changes End ==========
    {
        // close button pos stuff
        Point buttonSize = closeButton.GetSize();
        closeButtonX = baseX + 692 - buttonSize.x;
        closeButtonY = baseY + 301;
        newLocation.x = closeButtonX;
        newLocation.y = closeButtonY;
        closeButton.SetLocation(newLocation);

        ChoiceBox::OnRender(); // render window
        
        // Render restart required window after enabling native fullscreen
        if ((G_->GetSettings()->currentFullscreen == 3) != (G_->GetSettings()->fullscreen == 3))
        {
            CSurface::GL_SetColor(COLOR_YELLOW);
            localizedText = textLibrary->GetText("restart_required", textLibrary->currentLanguage);
            freetype::easy_print(13, baseX + 145, baseY + 20, localizedText);
        }

        CSurface::GL_SetColor(COLOR_WHITE);
        
        // render volume texts
        localizedText = textLibrary->GetText("sound_volume", textLibrary->currentLanguage);
        freetype::easy_printCenter(13, baseX + 156, baseY + 344, localizedText);

        localizedText = textLibrary->GetText("music_volume", textLibrary->currentLanguage);
        freetype::easy_printCenter(13, baseX + 156, baseY + 394, localizedText);

        // render volume sliders
        soundVolume.OnRender();
        musicVolume.OnRender();

        // wipe profile
        if (showWipeButton)
        {
            wipeProfileButton.OnRender();
        }

        // Steam achievement sync
        /*
        #ifdef STEAM_1_6_13_BUILD
        Steam1613OptionsScreenStructAdditions steam;
        if (steam.showSyncAchievements) 
        {
            steam.syncAchievementsButton.OnRender();
        }
        #endif
        */
    } 
    else 
    {
        newLocation.x = 1190 - closeButton.GetSize().x; // 1190 = 0x4a6 in decimal
        newLocation.y = 619; // 619 = 0x26b in decimal
        closeButton.SetLocation(newLocation);

        controls.OnRender(); // render keybind window
    }

    closeButton.OnRender(); // render close button

    // Render dialogs and adjust tints
    if (!langChooser.bOpen && !wipeProfileDialog.bOpen) 
    {
        if (!restartRequiredDialog.bOpen) 
        {
            return;
        }
        CSurface::GL_RemoveColorTint();
    }
    else
    {
        CSurface::GL_RemoveColorTint();
        if (wipeProfileDialog.bOpen)
        {
            wipeProfileDialog.OnRender();
        }
        if (langChooser.bOpen)
        {
            langChooser.OnRender();
        }
    }

    if (restartRequiredDialog.bOpen) 
    {
        restartRequiredDialog.OnRender();
    }
    // End of orig-code
}

HOOK_METHOD_PRIORITY(OptionsScreen, CheckSelection, 1000, () -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::CheckSelection -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino

    SettingValues *settings = G_->GetSettings();

    int8_t choice = GetPotentialChoice();

    if (-1 < choice) // Validate choice to prevent segfault
    {
        // Handle choice
        if (choice == choiceFullscreen) 
        {
            Settings::ToggleFullScreen();
        } 
        else if (choice == choiceVSync) 
        {
            Settings::ToggleVSync();
        } 
        else if (choice == choiceFrameLimit) 
        {
            settings->frameLimit ^= 1;
        } 
        else if (choice == choiceLowend) 
        {
            settings->lowend ^= 1;
        } 
        else if (choice == choiceColorblind) 
        {
            settings->colorblind ^= 1;
        } 
        else if (choice == choiceLanguage) 
        {
            langChooser.bOpen = true;
            langChooser.iChoice = -1;
        } 
        else if (choice == choiceDialogKeys) 
        {
            settings->dialogKeys = (settings->dialogKeys + 1) % 3;
        } 
        else if (choice == choiceShowPaths) 
        {
            settings->showPaths ^= 1;
        } 
        else if (choice == choiceAchievementPopups) 
        {
            settings->achPopups ^= 1;
        } 
        else if (choice == choiceAutoPause) 
        {
            settings->altPause ^= 1;
        } 
        else if (choice == choiceTouchAutoPause) 
        {
            settings->touchAutoPause ^= 1;
        } 
        else if (choice == choiceControls) 
        {
            bCustomizeControls = true;
        }
        //========== Mod Options Screen Addition Start ==========
        else if (choice == choiceControls + 1)
        {
            ModOptions->bOpen = true;
        }
        //========== Mod Options Screen Addition End ==========
        
        // Updates the states visually in the menu 
        //========== Mod Options Screen Changes Start ==========
        // original: `if (choice != choiceControls) `
        if (choice != choiceControls && choice != choiceControls + 1) // choiceControls + 1: configure mod options choice
        //========== Mod Options Screen Changes End ==========
        {
            Open(showWipeButton);
        }
    }
    // End of orig-code
}

HOOK_METHOD_PRIORITY(OptionsScreen, Open, 1000, (bool mainMenu) -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::Open -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino

    /*
    Notes:
    - Heavily changed the way strings are constructed for the option
      screen window by creating lambdas and writing a new function for
      the text library class to optimize the code and shorten it't length.
    - Original code sets the OptionsScreen::CheckSelection identifier
      vars several times which I did not do here either (optimisation).
    - I <3 optimisation!
    */

    // Static links
    SettingValues *settings = G_->GetSettings();
    TextLibrary *textLibrary = G_->GetTextLibrary();
    std::string currentLanguage = textLibrary->currentLanguage;
    /*
    #ifdef STEAM_1_6_13_BUILD
        Steam1613OptionsScreenStructAdditions steam;
    #endif
    */

    // Set some very relevant class values
    showWipeButton = mainMenu;
    bCustomizeControls = false;
    lastFullScreen = settings->fullscreen;
    //========== Mod Options Screen Addition Start ==========
    ModOptions->bOpen = false;
    //========== Mod Options Screen Addition End ==========
    /*
    #ifdef STEAM_1_6_13_BUILD
        steam.showSyncAchievements = G_->GetAchievementTracker()->IsReadyToSync();
    #endif
    */

    // Set identifier for OptionsScreen::CheckSelection
    choiceTouchAutoPause = -1;

    // Holder Variables:
    std::string optionText;
    std::string optionStatus;
    std::string formattedText;
    std::vector<ChoiceText> firstColumn;
    std::vector<ChoiceText> secondColumn;

    // String constructor Lambdas
    std::function<std::string(bool)> getOnOffText = [&](bool condition) -> std::string
    {
        return textLibrary->GetText(condition ? "on" : "off");
    };

    std::function<std::string(bool)> getDisabledEnabledText = [&](bool condition) -> std::string
    {
        return textLibrary->GetText(condition ? "disabled" : "enabled");
    };

    std::function<std::string(const std::string&, const std::string&)> insertFormattedText = [&](const std::string& key, const std::string& status) -> std::string
    {
        return textLibrary->InsertText(textLibrary->GetText(key), status);
    };

    // Construct fullscreen option
    choiceFullscreen = 0;
    optionStatus = textLibrary->GetText("fullscreen_" + std::to_string(settings->fullscreen));
    formattedText = insertFormattedText("fullscreen", optionStatus);
    firstColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct VSync option
    choiceVSync = 1;
    formattedText = insertFormattedText("v_sync", getOnOffText(settings->vsync));
    firstColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct frame-limit option
    choiceFrameLimit = 2;
    formattedText = insertFormattedText("frame_limit", getOnOffText(settings->frameLimit));
    firstColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct dynamic-background option
    choiceLowend = 3;
    formattedText = insertFormattedText("dynamic_back", getOnOffText(!settings->lowend));
    firstColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct colorblind option
    choiceColorblind = 4;
    formattedText = insertFormattedText("colorblind", getDisabledEnabledText(!settings->colorblind));
    firstColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct language option
    choiceLanguage = 5;
    optionText = textLibrary->GetText("change_language");
    firstColumn.emplace_back(0, optionText, ResourceEvent());

    //               //
    // SECOND COLUMN //
    //               //

    // Construct event-choice-input-delay option
    choiceDialogKeys = 6;
    switch (settings->dialogKeys)
    {
        case 0:
            optionStatus = textLibrary->GetText("event_choice_disable_hotkeys");
            break;
        case 1:
            optionStatus = textLibrary->GetText("event_choice_brief_delay");
            break;
        case 2:
            optionStatus = textLibrary->GetText("event_choice_no_delay");
            break;
    }
    formattedText = insertFormattedText("event_choice", optionStatus);
    secondColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct show-map-paths option
    choiceShowPaths = 7;
    formattedText = insertFormattedText("show_paths", getDisabledEnabledText(!settings->showPaths));
    secondColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct achievement-popup option
    choiceAchievementPopups = 8;
    formattedText = insertFormattedText("achievement_popup", getDisabledEnabledText(!settings->achPopups));
    secondColumn.emplace_back(0, formattedText, ResourceEvent());

    // Construct window-focus-auto-pause option
    if (settings->fullscreen == 0)
    {
        choiceAutoPause = 9;
        choiceControls = 10;
        formattedText = insertFormattedText("window_focus", getOnOffText(settings->altPause));
        secondColumn.emplace_back(0, formattedText, ResourceEvent());
    }
    else
    {
        choiceControls = 9;
    }

    // Construct keybind-menu option
    optionText = textLibrary->GetText("configure_controls");
    secondColumn.emplace_back(0, optionText, ResourceEvent());


    //========== Mod Options Screen Addition Start ==========
    secondColumn.emplace_back(0, "Configure Mod Options", ResourceEvent());
    //========== Mod Options Screen Addition End ==========


    // Initialize option screen
    std::string empty = "";
    ChoiceBox::SetChoices(&empty, &firstColumn, &secondColumn);

    // Vector clea-up
    firstColumn.clear();
    secondColumn.clear();

    // Update sound volume based on current settings
    if (!bOpen)
    {
        float soundVolume = G_->GetSoundControl()->GetSoundVolume();
        float musicVolume = G_->GetSoundControl()->GetMusicVolume();
        this->soundVolume.marker.x = static_cast<int>(this->soundVolume.minMax.first + soundVolume * (this->soundVolume.minMax.second - this->soundVolume.minMax.first));
        this->musicVolume.marker.x = static_cast<int>(this->musicVolume.minMax.first + musicVolume * (this->musicVolume.minMax.second - this->musicVolume.minMax.first));
    }

    bOpen = true; // This basically opens the options window
    // End of orig-code
}

HOOK_METHOD_PRIORITY(OptionsScreen, MouseMove, 1000, (int x, int y) -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::MouseMove -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino
    if (!langChooser.bOpen)
    {
        if (wipeProfileDialog.bOpen)
        {
            // Handles wipe profile confirm window hover stuff
            wipeProfileDialog.MouseMove(x, y);
            return;
        }

        if (!restartRequiredDialog.bOpen)
        {
            closeButton.MouseMove(x, y, false);

            //========== Mod Options Screen Addition Start ==========
            if (ModOptions->bOpen) return ModOptions->MouseMove(x, y);
            //========== Mod Options Screen Addition End ==========

            if (!bCustomizeControls)
            {
                
                if (showWipeButton)
                {
                    // Handles the hovering of the wipe profile button
                    wipeProfileButton.MouseMove(x, y, false);
                }

                /*
                #ifdef STEAM_1_6_13_BUILD
                Steam1613OptionsScreenStructAdditions steam;
                if (steam.showSyncAchievements) 
                {
                    steam.syncAchievementsButton.MouseMove(x, y, false);
                }
                #endif
                */

                // Tells the game where the cursor is so it knows which texts to highlight
                ChoiceBox::MouseMove(x, y);

                /*
                Unused Vanilla code - Reports back if a resolution mode is supported when hovering it (kinda broken)
                if (choiceBoxes.size() > 0 && choiceBoxes[0].x <= x && x <= choiceBoxes[0].x + choiceBoxes[0].w && choiceBoxes[0].y <= y && y <= choiceBoxes[0].y + choiceBoxes[0].h) 
                {
                    if (!G_->GetSettings()->manualResolution)
                    {
                        std::string tooltipID = (G_->GetSettings()->fullscreen == 1 || !CSurface::IsFrameBufferSupported()) ? "stretch_not_supported" : "manual_override";
                        std::string tooltip = G_->GetTextLibrary()->GetText(tooltipID, G_->GetTextLibrary()->currentLanguage);
                        G_->GetMouseControl()->SetTooltip(tooltip);
                        G_->GetMouseControl()->InstantTooltip();
                    }
                }
                */

                // Handles the sound volume slider stuff
                if (!soundVolume.holding)
                {
                    // Checks if the slider is hovered
                    bool isHovering =  x > soundVolume.marker.x && x < soundVolume.marker.x + soundVolume.marker.w && y > soundVolume.marker.y && y < soundVolume.marker.y + soundVolume.marker.h;
                    soundVolume.hovering = isHovering;
                }
                else
                {
                    // Handles the movement of the slider
                    int16_t newMarkerX = (x - soundVolume.mouseStart.x) + soundVolume.rectStart.x;

                    if (newMarkerX < soundVolume.minMax.first)
                    {
                        newMarkerX = soundVolume.minMax.first;
                    }
                    else if (newMarkerX > soundVolume.minMax.second)
                    {
                        newMarkerX = soundVolume.minMax.second;
                    }

                    soundVolume.marker.x = newMarkerX;
                }

                // Handles the music volume slider stuff
                if (!musicVolume.holding)
                {
                    // Checks if the slider is hovered
                    bool isHovering = x > musicVolume.marker.x && x < musicVolume.marker.x + musicVolume.marker.w && y > musicVolume.marker.y && y < musicVolume.marker.y + musicVolume.marker.h;
                    musicVolume.hovering = isHovering;
                }
                else
                {
                    // Handles the movement of the slider
                    int16_t newMarkerX = (x - musicVolume.mouseStart.x) + musicVolume.rectStart.x;

                    if (newMarkerX < musicVolume.minMax.first)
                    {
                        newMarkerX = musicVolume.minMax.first;
                    }
                    else if (newMarkerX > musicVolume.minMax.second)
                    {
                        newMarkerX = musicVolume.minMax.second;
                    }

                    musicVolume.marker.x = newMarkerX;
                }

            }
            else
            {
                // Tells the game what is hovered in the controls menu
                controls.MouseMove(x, y);
            }
        }
        else
        {
            // Tells the game what is hovered in the restart required box
            restartRequiredDialog.MouseMove(x, y);
        }
    }
    else
    {
        // Handles the hovering of the language buttons in the lang menu
        std::vector<TextButton*> locButtons = langChooser.buttons;
        for (uint8_t buttonIndex = 0; buttonIndex < locButtons.size(); ++buttonIndex) 
        {
            locButtons[buttonIndex]->MouseMove(x, y, false);
        }
    }
    // End of orig-code
}

HOOK_METHOD_PRIORITY(OptionsScreen, MouseClick, 1000, (int x, int y) -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::MouseClick -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino
    if (!langChooser.bOpen) 
    {
        if (!wipeProfileDialog.bOpen) 
        {
            // Restart required window logic
            if (restartRequiredDialog.bOpen) 
            {
                restartRequiredDialog.MouseClick(x, y);
                return;
            }

            // Close button handling 
            if (!closeButton.bActive || !closeButton.bHover) 
            {
                //========== Mod Options Screen Addition Start ==========
                if (ModOptions->bOpen)
                {
                    ModOptions->MouseClick(x, y);
                }
                //========== Mod Options Screen Addition End ==========
                //========== Mod Options Screen Changes Start ==========
                // original: `if (!bCustomizeControls) `
                else if (!bCustomizeControls) 
                //========== Mod Options Screen Changes End ==========
                {
                    // Handle various buttons and the sound sliders
                    if (wipeProfileButton.bActive && wipeProfileButton.bHover && showWipeButton) 
                    {
                        wipeProfileDialog.Open();
                    }
                    
                    // Handle Steam achievement sync button
                    /*
                    #ifdef STEAM_1_6_13_BUILD
                    Steam1613OptionsScreenStructAdditions steam;
                    if (steam.syncAchievementsButton.bActive && steam.syncAchievementsButton.bHover && steam.showSyncAchievements) 
                    {
                        G_->GetAchievementTracker()->SyncAchievements();
                    }
                    #endif
                    */

                    // Volume slider handling
                    soundVolume.MouseClick(x, y);
                    musicVolume.MouseClick(x, y);
                    CheckSelection();
                    return;
                }
                else
                {
                    controls.MouseClick(x, y); // Handle customize controls logic
                }
            }
            //========== Mod Options Screen Addition Start ==========
            else if (ModOptions->bOpen)
            {
                ModOptions->bOpen = false;
            }
            //========== Mod Options Screen Addition End ==========
            else if (!bCustomizeControls) 
            {
                // Restart required dialog window and close click handled here
                if (G_->GetSettings()->currentFullscreen != 3 && G_->GetSettings()->fullscreen == 3)
                {
                    std::vector<ChoiceText> choices1;
                    std::vector<ChoiceText> choices2;
                    std::string restartDialogText = G_->GetTextLibrary()->GetText("restart_required_dialog", G_->GetTextLibrary()->currentLanguage);
                    restartRequiredDialog.SetChoices(&restartDialogText, &choices1, &choices2);
                    restartRequiredDialog.bOpen = true;
                }
                else
                {
                    Close();
                }
            }
            else 
            {
                // Handle option button clicks
                int8_t selectedButton = controls.selectedButton;
                if (selectedButton != -1) 
                {
                    controls.buttons[controls.currentPage][selectedButton].state = 0;
                    controls.selectedButton = -1;
                }
                bCustomizeControls = false;
            }
        }
        else 
        {
            // Handle wipe profile confirm window click
            wipeProfileDialog.MouseClick(x, y);
            if (!wipeProfileDialog.bOpen && wipeProfileDialog.result)
            {
                G_->GetScoreKeeper()->WipeProfile(true);
            }
        }
    }
    else 
    {
        // Handle language chooser button clicks
        std::vector<TextButton*> locButtons = langChooser.buttons;
        for (uint8_t buttonIndex = 0; buttonIndex < locButtons.size(); ++buttonIndex) 
        {
            if (locButtons[buttonIndex]->bActive && locButtons[buttonIndex]->bHover)
            {
                langChooser.iChoice = buttonIndex;
                break;
            }
        }
    }
    // End of orig-code
}

HOOK_METHOD_PRIORITY(OptionsScreen, KeyDown, 1000, (SDLKey sym) -> bool)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> OptionsScreen::KeyDown -> Begin (ControllerFunctionRewrites.cpp)\n")

    // code reverse engineered by Dino

    /*
    Notes:
    0x1b corresponds to the escape key on your keyboard
    I improvised some code here because ghidra showed a mess
    Inlined some function calls that were literally just changing window visibility bools
    */

    if (!langChooser.bOpen && !wipeProfileDialog.bOpen) // Check if neither the language chooser nor the wipe profile dialog is open
    {
        // Check if the hotkey menu is open
        if (bCustomizeControls)
        {
            if (sym == 0x1b)
            {
                int16_t selectedButton = controls.selectedButton;

                // Deselect the hotkey and set it to its previous key
                if (selectedButton != -1)
                {
                    controls.buttons[controls.currentPage][selectedButton].state = 0;
                    controls.selectedButton = -1;
                    return true;
                }

                // Close the reset dialog if open
                if (controls.resetDialog.bOpen)
                {
                    controls.resetDialog.Close();
                    return true;
                }
            }
            else if (sym != 0x1b) // Bind the the pressed key to the selected hotkey if wasn't the escape key
            {
                std::vector<ControlButton> &hotkeyButtons = controls.buttons[controls.currentPage];
                for (ControlButton &button : hotkeyButtons)
                {
                    if (button.state == 2)
                    {
                        Settings::SetHotkey(button.value, sym);
                        button.state = 0;
                    }
                }
            }

            // Exit if the Escape key is pressed
            if (sym == 0x1b)
            {
                bCustomizeControls = false;
                return false;
            }

            return false;
        }
        //========== Mod Options Screen Addition Start ==========
        else if (ModOptions->bOpen)
        {
            if (sym == 0x1b)
            {
                ModOptions->bOpen = false;
            }
            return false;
        }
        //========== Mod Options Screen Addition End ==========
        else
        {
            // Close the current window if the Escape key is pressed
            if (sym == 0x1b)
            {
                bOpen = false;
            }
            else
            {
                // Handling they key further
                ChoiceBox::KeyDown(sym);
            }
            return false;
        }
    }
    else if (langChooser.bOpen && sym == 0x1b) // Close language chooser on Escape key input
    {
        langChooser.bOpen = false;
    }
    else if (wipeProfileDialog.bOpen) // Close profile dialog if open
    {
        wipeProfileDialog.bOpen = false;
    }

    return false;
    // End of orig-code
}


/*
HOOK_STATIC(Settings, LoadSettings, () -> void)
{
    LOG_HOOK("HOOK_STATIC -> Settings::SaveSettings -> Begin (CustomOptions.cpp)\n")
    super();

    std::ofstream file;
    file.open("settings_hs.ini");

    if (file.is_open())
    {
        SettingValues *settings = G_->GetSettings();

        file << "#List of all hotkeys (including Hyperspace and custom hotkeys)\n";

        for (std::vector<HotkeyDesc> &hotkeyPage : settings->hotkeys)
        {
            for (HotkeyDesc &hotkey : hotkeyPage)
            {
                file << hotkey.name << "=" << hotkey.key << "\n";
            }
        }

        file.close();
    }
    else
    {
        hs_log_file("Failed to open settings_hs.ini for writing\n");
    }
}

HOOK_STATIC(Settings, LoadSettings, () -> void)
{
    LOG_HOOK("HOOK_STATIC -> Settings::LoadSettings -> Begin (CustomOptions.cpp)\n")
    super();

    std::ifstream file;
    file.open("settings_hs.ini");

    if (file.is_open())
    {
        SettingValues *settings = G_->GetSettings();

        // do stuff here

        file.close();
    }
    else
    {
        hs_log_file("Failed to open settings_hs.ini for reading\n");
    }
}
*/
