#include "Global.h"

class CustomOptionsManager
{
public:
    CustomOptionsManager()
    {
        rightClickDoorOpening.defaultValue = true;
        rightClickDoorOpening.currentValue = true;

        dismissSound.defaultValue = "airLoss";
        dismissSound.currentValue ="airLoss";
    }

    static CustomOptionsManager *GetInstance()
    {
        return &instance;
    }

    template<typename T> struct Setting
    {
        T defaultValue = T();
        T currentValue = T();
    };

    struct Defaults
    {
        bool beaconType_hideVanillaLabel = true;
        bool checkCargo = false;
        bool choiceRequiresCrew = false;
    };

    bool altMode = true;
    bool altModeChanged = true;

//    Setting holdButton;

//    Setting hullNumbers;
    Setting<bool> redesignedWeaponTooltips;
    Setting<bool> redesignedCrewTooltips;
    Setting<bool> redesignedDroneTooltips;
    Setting<bool> redesignedAugmentTooltips;

    Setting<bool> advancedCrewTooltips;
    Setting<bool> showAllyPowers;
    Setting<bool> showEnemyPowers;
    Setting<int> advancedCrewTooltipRounding;

    Setting<bool> eventTooltips;

    Setting<bool> alternateCrewMovement;
    Setting<bool> rightClickDoorOpening;

    Setting<bool> showWeaponCooldown;

    Setting<bool> showReactor;

    Setting<bool> showMissileCount;
    Setting<bool> showDroneCount;
    Setting<bool> showCrewLimit;

    Setting<bool> showAllConnections;

    Setting<bool> alternateOxygenRendering;

    Setting<bool> showScrapCollectorScrap;

    Setting<bool> preIgniteChargers;

    Setting<bool> altLockedMiniships;

    Setting<bool> altCreditSystem;

    Setting<bool> enableCustomChoiceColors;

    Setting<bool> allowRenameInputSpecialCharacters;

    Setting<std::string> dismissSound;

    Defaults defaults;

//    Setting hackingDroneFix;

//    Setting infiniteMode;

//    Setting discordIntegration;

private:
    static CustomOptionsManager instance;
};

struct SimpleTextButton
{
    SimpleTextButton() {}
    SimpleTextButton(const std::string &_text, int x, int y, bool _bRightAlign);
    void OnInit();
    void OnRender();

    Globals::Rect hitbox;
    std::string text;
    GL_Color textColor;
    bool bRightAlign;
    int data;
};

class ModOptionsScreen
{
public:
    ModOptionsScreen();
    void OnInit();
    void OnRender();

    static ModOptionsScreen *GetInstance() {return &instance;}

    bool bOpen;
    SimpleTextButton dismissSoundButton;

private:
    WindowFrame *customBox;

    static ModOptionsScreen instance;
};
