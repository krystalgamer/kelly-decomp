#ifndef KELLY_DECOMP_MENU_SHARED_H
#define KELLY_DECOMP_MENU_SHARED_H

#pragma interface

class Menu;
class MenuSystem;

struct MenuColor {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

enum MenuEntryFlags {
    MENTRY_VISIBLE = 1 << 0,
    MENTRY_ENABLED = 1 << 1,
    MENTRY_ACTIVE = 1 << 2,
};

class MenuEntry {
    friend class Menu;

    unsigned int flags;

public:
    MenuEntry() { flags = MENTRY_VISIBLE | MENTRY_ENABLED; }
    virtual ~MenuEntry() {}

protected:
    bool GetFlag(unsigned int flag) { return (flags & flag) != 0; }
    void SetFlag(unsigned int flag, bool onOff)
    {
        if (onOff)
            flags |= flag;
        else
            flags &= ~flag;
    }

public:
    bool IsVisible() { return GetFlag(MENTRY_VISIBLE); }
    bool IsEnabled() { return IsVisible() && GetFlag(MENTRY_ENABLED); }
    bool IsActive() { return GetFlag(MENTRY_ACTIVE); }
    unsigned int GetState() { return flags; }
    virtual MenuColor GetColor();
    virtual void Show();
    virtual void Hide();
    virtual void Enable();
    virtual void Disable();
    virtual void Activate();
    virtual void Deactivate();
    virtual void OnTick(float dtime) {}
    virtual void OnMenuOpen(Menu* menu, MenuSystem* system);
    virtual void OnMenuClose();
    virtual void OnButtonPress(int buttonid) {}
    virtual void OnButtonRelease(int buttonid) {}

protected:
    virtual void OnHide() {}
    virtual void OnShow() {}
    virtual void OnEnable() {}
    virtual void OnDisable() {}
    virtual void OnActivate() {}
    virtual void OnDeactivate() {}

public:
    virtual int MenuText(char* text, int len)
    {
        if (len > 0)
            *text = 0;
        return 0;
    }
};

class MenuSystem {
    char menu_system_context[0x458];

public:
    virtual ~MenuSystem();
    virtual void OpenMenu(Menu *menu);
    virtual void CloseMenu();
    void CloseAllMenus();
    virtual void ButtonPress(int button);
    virtual void ButtonRelease(int button);
};

#endif
