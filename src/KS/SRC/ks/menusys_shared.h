#ifndef KELLY_DECOMP_MENUSYS_SHARED_H
#define KELLY_DECOMP_MENUSYS_SHARED_H

#pragma interface

enum MenuCommand {
    MENUCMD_NONE,
    MENUCMD_SELECT,
    MENUCMD_START,
    MENUCMD_UP,
    MENUCMD_DOWN,
    MENUCMD_LEFT,
    MENUCMD_RIGHT,
    MENUCMD_CROSS,
    MENUCMD_TRIANGLE,
    MENUCMD_SQUARE,
    MENUCMD_CIRCLE,
    MENUCMD_L1,
    MENUCMD_R1,
    MENUCMD_L2,
    MENUCMD_R2,
    MAXMENUCMD,
};

int MENU_GetButtonState(int buttoninfo);

class MenuInput {
    unsigned char bstate[MAXMENUCMD];

public:
    virtual ~MenuInput() {}
    void CheckButtonStates();
    void InitButtonStates();

protected:
    virtual void ButtonPress(int buttoninfo) = 0;
    virtual void ButtonRelease(int buttoninfo) = 0;
};

__asm__(".equ MENU_GetButtonState__Fi, 0x002405D0");

#endif
