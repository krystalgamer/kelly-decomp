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

class Menu;

typedef unsigned int MENU_UINT32;
typedef unsigned short MENU_UINT16;
typedef unsigned char MENU_UINT8;

struct MenuColor {
    MENU_UINT8 r;
    MENU_UINT8 g;
    MENU_UINT8 b;
    MENU_UINT8 a;
};

struct MenuRect {
    MENU_UINT16 x0;
    MENU_UINT16 y0;
    MENU_UINT16 x1;
    MENU_UINT16 y1;
};

typedef char MenuLine[64];

class MenuRender {
    MenuRect limit;
    MenuRect inuse;
    MenuLine text[16];
    MENU_UINT32 state[16];
    int active;
    int topentry;

public:
    MenuRender(MenuRect &limit);
    virtual ~MenuRender();
    void Draw();

protected:
    void DrawFrame(int x0, int y0, int x1, int y1);
    void Clear();

public:
    virtual void OpenMenu(Menu *menu);
    virtual void CloseMenu();
    void Refresh();
    int Width() { return limit.x1 - limit.x0; }

protected:
    virtual int TotalEntries() = 0;
    virtual MENU_UINT32 GetElementState(int entry) = 0;
    virtual void GetElementText(int entry, char *text, int length) = 0;
    virtual MenuColor GetElementColor(int entry) = 0;
};

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
