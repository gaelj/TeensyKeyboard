// 
// 
// 

#include "UserMenu.h"


UserMenuClass::UserMenuClass(TFT_ILI93XX* _tft, SynthParametersClass* _params)
{
    params = _params;
    tft = _tft;

    CurrentPage = Startup;
    IsEditing = false;

    int r = 0;
    MenuItem_PlayDemo = new UserMenuItemClass_Boolean(_tft, "Play demo", &params->PlayDemo, r++);
    MenuItem_PlayDemo->IsSelected = true;
    MenuItem_PlayDemo->IsEditing = false;

    MenuItem_Sustain = new UserMenuItemClass_Boolean(_tft, "Sustain", &params->SustainActive, r++);
    MenuItem_Sustain->IsSelected = false;
    MenuItem_Sustain->IsEditing = false;

    MenuItem_EnvelopeAttack = new UserMenuItemClass_Float(_tft, "Envelope Attack", &params->EnvelopeAttack, r++, 1.0f);
    MenuItem_EnvelopeAttack->IsSelected = false;
    MenuItem_EnvelopeAttack->IsEditing = false;

    MenuItem_EnvelopeHold = new UserMenuItemClass_Float(_tft, "Envelope Hold", &params->EnvelopeHold, r++, 1.0f);
    MenuItem_EnvelopeHold->IsSelected = false;
    MenuItem_EnvelopeHold->IsEditing = false;

    MenuItem_EnvelopeDecay = new UserMenuItemClass_Float(_tft, "Envelope Decay", &params->EnvelopeDecay, r++, 1.0f);
    MenuItem_EnvelopeDecay->IsSelected = false;
    MenuItem_EnvelopeDecay->IsEditing = false;

    MenuItem_EnvelopeSustain = new UserMenuItemClass_Float(_tft, "Envelope Sustain", &params->EnvelopeSustain, r++, 1.0f);
    MenuItem_EnvelopeSustain->IsSelected = false;
    MenuItem_EnvelopeSustain->IsEditing = false;

    MenuItem_EnvelopeRelease = new UserMenuItemClass_Float(_tft, "Envelope Release", &params->EnvelopeRelease, r++, 1.0f);
    MenuItem_EnvelopeRelease->IsSelected = false;
    MenuItem_EnvelopeRelease->IsEditing = false;

    MenuItems[MainConfig][0] = (UserMenuItemClass*)MenuItem_PlayDemo;
    MenuItems[MainConfig][1] = (UserMenuItemClass*)MenuItem_Sustain;
    MenuItems[MainConfig][2] = (UserMenuItemClass*)MenuItem_EnvelopeAttack;
    MenuItems[MainConfig][3] = (UserMenuItemClass*)MenuItem_EnvelopeHold;
    MenuItems[MainConfig][4] = (UserMenuItemClass*)MenuItem_EnvelopeDecay;
    MenuItems[MainConfig][5] = (UserMenuItemClass*)MenuItem_EnvelopeSustain;
    MenuItems[MainConfig][6] = (UserMenuItemClass*)MenuItem_EnvelopeRelease;
}

void UserMenuClass::ShowPage(MenuPages menuPage)
{
    CurrentPage = menuPage;

    //tft->clearScreen();
    tft->drawImage(0, 0, &backgroundHalf1);
    tft->drawImage(160, 0, &backgroundHalf2);
    tft->setTextColor(YELLOW);
    tft->setCursor(0, 0);
    tft->setTextScale(3);
    tft->println(PageTitles[CurrentPage]);
    tft->setTextScale(2);

    switch (CurrentPage) {
        case Startup:
            tft->drawImage((320 - 64) / 2, (240 - 64) / 2, &keyboard);
            tft->setTextScale(3);
            tft->println();
            tft->println();
            tft->println();
            tft->println();
            tft->println();
            tft->println();
            tft->println("         ELECTRIC PIANO");
            tft->setTextScale(1);
            tft->println();
            tft->println();
            tft->print("Gael James - 2018 - ");
            tft->print("version ");
            tft->println(RELEASE_VERSION);
            break;

        case MainConfig:
            break;
    }

    for (int i = 0; i < NbItemsByPage[CurrentPage]; i++) {
        if (MenuItems[CurrentPage][i] == 0)
            break;
        MenuItems[CurrentPage][i]->IsSelected = (i == 0);
        MenuItems[CurrentPage][i]->IsEditing = false;

        /*
        Serial.print("Printing menu item ");
        Serial.print(i);
        Serial.print(" of page ");
        Serial.println(CurrentPage);
        */
        MenuItems[CurrentPage][i]->PrintMenuItem();
        //Serial.println(">OK");
    }
}

void UserMenuClass::RotateEncoder(int increment)
{
    if (IsEditing) {
        MenuItems[CurrentPage][CurrentRow]->ChangeValue(increment);
        MenuItems[CurrentPage][CurrentRow]->PrintMenuItem();
    }
    else {
        if (increment != 0) {
            CurrentRow += increment;
            CurrentRow = CurrentRow < 0
                ? 0
                : CurrentRow >= NbItemsByPage[CurrentPage]
                    ? NbItemsByPage[CurrentPage] - 1
                    : CurrentRow;

            for (int i = 0; i < NbItemsByPage[CurrentPage]; i++) {
                if (MenuItems[CurrentPage][i] == 0) break;
                MenuItems[CurrentPage][i]->IsSelected = (CurrentRow == i);
                MenuItems[CurrentPage][i]->PrintMenuItem();
            }
        }
    }
}

void UserMenuClass::PressEncoder()
{
    IsEditing = !IsEditing;
    MenuItems[CurrentPage][CurrentRow]->IsEditing = !MenuItems[CurrentPage][CurrentRow]->IsEditing;
    MenuItems[CurrentPage][CurrentRow]->PrintMenuItem();
}
