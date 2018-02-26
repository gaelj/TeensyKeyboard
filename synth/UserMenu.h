// UserMenu.h

#ifndef _USERMENU_h
#define _USERMENU_h

#include <arduino.h>
#include <TFT_ILI93XX.h>

#include "SynthParameters.h"
#include "UserMenuItem.h"

#include "Images\keyboard.c"

#define RELEASE_VERSION 1.0f

#define PAGE_COUNT          2
#define MAX_ITEMS_BY_PAGE   8

enum MenuPages {
    Startup,
    MainConfig,
};

class UserMenuClass
{
protected:
    TFT_ILI93XX * tft;
    SynthParametersClass* params;
    UserMenuItemClass_Boolean*  MenuItem_PlayDemo;
    UserMenuItemClass_Boolean*  MenuItem_Sustain;
    UserMenuItemClass_Float*    MenuItem_EnvelopeAttack;
    UserMenuItemClass_Float*    MenuItem_EnvelopeHold;
    UserMenuItemClass_Float*    MenuItem_EnvelopeDecay;
    UserMenuItemClass_Float*    MenuItem_EnvelopeSustain;
    UserMenuItemClass_Float*    MenuItem_EnvelopeRelease;
    MenuPages CurrentPage;
    int CurrentRow;
    bool IsEditing;
    const String PageTitles[PAGE_COUNT] = { "", "Synth Settings" };
    UserMenuItemClass* MenuItems[PAGE_COUNT][MAX_ITEMS_BY_PAGE] = {
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
    };
    const int NbItemsByPage[PAGE_COUNT] = { 0, 7 };

public:
    UserMenuClass(TFT_ILI93XX* _tft, SynthParametersClass* _params);
    void ShowPage(MenuPages menuPage);
    void RotateEncoder(int increment);
    void PressEncoder();
};

#endif
