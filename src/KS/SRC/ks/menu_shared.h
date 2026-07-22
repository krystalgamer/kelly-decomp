#ifndef KELLY_DECOMP_MENU_SHARED_H
#define KELLY_DECOMP_MENU_SHARED_H

#pragma interface

class Menu;
class MenuEntry;
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

class Menu {
    Menu *parent;
    int entries;
    MenuEntry **entry;
    int activeentry;
    bool isopen;
    Menu *closeto;
    MenuSystem *control;

    bool Resize(int size);

public:
    Menu(Menu *parent);
    Menu(Menu *parent, int entries, MenuEntry **entry);
    virtual ~Menu();
    void ClearMenu();
    void AddEntry(MenuEntry *entry);
    void AddEntries(int entries, MenuEntry **entry);
    void DelEntry(MenuEntry *entry);
    bool IsOpen() { return isopen; }
    void Open(Menu *close_to, MenuSystem *control);
    void Close(bool to_parent = true);
    virtual void CloseAll();

protected:
    void ActivateEntry(int entry);
    void FindActivateEntry(int direction);
    MenuEntry *GetEntry(int entry)
    {
        return entry >= 0 && entry < entries ? this->entry[entry] : 0;
    }

public:
    void ButtonPress(int button_info);
    void ButtonRelease(int button_info);
    int NumEntries() { return entries; }
    int GetActiveEntry() { return activeentry; }
    unsigned int GetElementFlags(int entry);
    void GetElementText(int entry, char *text, int length);
    MenuColor GetElementColor(int entry);
    virtual void OnTick(float delta_time);
    virtual void OnButtonPress(int button_id);
    virtual void OnButtonRelease(int button_id);

protected:
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnClose(bool to_parent);
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
