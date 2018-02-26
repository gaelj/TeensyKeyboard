// 
// 
// 

#include "UserMenuItem.h"

UserMenuItemClass::UserMenuItemClass(TFT_ILI93XX* _tft, String itemName, int row)
{
    tft = _tft;
    ItemName = itemName;
    IsSelected = false;
    IsEditing = false;
    Row = row;
}

void UserMenuItemClass::PrintMenuItem()
{
    /*
    for (int i = 26 + 11 * Row; i < 26 + 11 * (Row + 1); i++)
        tft->drawFastHLine(0, i, 320, WHITE);
    */
    tft->setCursor(0, 0);
    for (int r = 0; r < Row + 2; r++)
        tft->println();

    if (IsSelected && !IsEditing)
        tft->setTextColor(BLACK, YELLOW);
    else
        tft->setTextColor(YELLOW, BLACK);
    tft->print(ItemName);
    tft->setTextColor(YELLOW, BLACK);
    tft->print(": ");

    if (IsEditing)
        tft->setTextColor(BLACK, YELLOW);
    else
        tft->setTextColor(YELLOW, BLACK);

    
    PrintValue();

    tft->println();
}

void UserMenuItemClass::PrintValue() {}
void UserMenuItemClass::ChangeValue(float increment) {}





UserMenuItemClass_Boolean::UserMenuItemClass_Boolean(TFT_ILI93XX* _tft, String itemName, bool* value,
    int row) : UserMenuItemClass(_tft, itemName, row)
{
    Value = value;
}

void UserMenuItemClass_Boolean::PrintValue()
{
    if (Value != 0)
        tft->print(*Value);
}

void UserMenuItemClass_Boolean::ChangeValue(float increment)
{
    *Value = !*Value;
    PrintMenuItem();
}



UserMenuItemClass_Float::UserMenuItemClass_Float(TFT_ILI93XX * _tft, String itemName,
    float * value, int row, float incrementMultiplier) : UserMenuItemClass(_tft, itemName, row)
{
    Value = value;
    IncrementMultiplier = incrementMultiplier;
}

void UserMenuItemClass_Float::PrintValue()
{
    if (Value != 0)
        tft->print(*Value);
}

void UserMenuItemClass_Float::ChangeValue(float increment)
{
    *Value += increment * IncrementMultiplier;
    PrintMenuItem();
}
