// UserMenuItem.h

#ifndef _USERMENUITEM_h
#define _USERMENUITEM_h

#include <arduino.h>
#include <TFT_ILI93XX.h>

class UserMenuItemClass
{
protected:
    TFT_ILI93XX* tft;

public:
    UserMenuItemClass(TFT_ILI93XX* _tft,
        String itemName,
        int row);

    String ItemName;
    bool IsSelected;
    bool IsEditing;
    int Row;

    void PrintMenuItem();

    virtual void PrintValue();
    virtual void ChangeValue(float increment);
};


class UserMenuItemClass_Boolean : public UserMenuItemClass
{
public:
    UserMenuItemClass_Boolean(TFT_ILI93XX* _tft,
        String itemName,
        bool* value,
        int row);

    bool* Value;

    void PrintValue();

    void ChangeValue(float increment);
};


class UserMenuItemClass_Float : public UserMenuItemClass
{
public:
    UserMenuItemClass_Float(TFT_ILI93XX* _tft,
        String itemName,
        float* value,
        int row,
        float incrementMultiplier);

    float* Value;
    float IncrementMultiplier;

    void PrintValue();

    void ChangeValue(float increment);
};

#endif
