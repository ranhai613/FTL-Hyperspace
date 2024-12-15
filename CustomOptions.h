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

struct Selector
{
    virtual void OnInit() = 0;
    virtual void OnRender() = 0;
    virtual void MouseMove(int mX, int mY) = 0;
    virtual void MouseClick(int mX, int mY) = 0;
    virtual int MeasureHeight() = 0;
    Point position;
};

struct SimpleTextButton : Selector
{
    SimpleTextButton() {}
    SimpleTextButton(const std::string &_text, bool _bRightAlign);
    void OnInit();
    void OnRender();
    void MouseMove(int mX, int mY);
    void MouseClick(int mX, int mY);
    int MeasureHeight();
    void SetText(const std::string &_text);

    Globals::Rect hitbox;
    std::string text;
    GL_Color textColor;
    static const int line_length;
    bool bRightAlign;
    std::function<void(SimpleTextButton* const)> on_click;
    int data;
};


struct SettingEntry
{
    SettingEntry(const std::string &_text, Selector* _selector);
    void OnInit(int x, int y);
    void OnRender();
    void MouseMove(int mX, int mY);
    void MouseClick(int mX, int mY);
    int MeasureHeight();

    Point position;
    int height;
    std::string text;
    Selector *selector;
};

class ModOptionsScreen
{
public:
    ModOptionsScreen();
    void OnInit();
    void OnRender();
    void MouseMove(int mX, int mY);
    void MouseClick(int mX, int mY);

    static ModOptionsScreen *GetInstance() {return &instance;}

    bool bOpen;
    std::vector<SettingEntry> entries;

private:
    WindowFrame *customBox;

    static ModOptionsScreen instance;
};
