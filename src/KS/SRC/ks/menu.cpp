// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0023E538)
// 0x0023E538 ClearMenu__4Menu
class Menu { public: void Resize(int size); void ClearMenu(); };
__asm__(".equ Resize__4Menui, 0x0023E2B0");
void Menu::ClearMenu() { Resize(0); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EA30)
// 0x0023EA30 ButtonRelease__4Menui
struct MenuVTable { char padding[0x28]; short adjustment; short padding2; void (*release)(void *self, int button); };
class Menu { char padding[0x1c]; MenuVTable *vtable; public: void ButtonRelease(int button); };
void Menu::ButtonRelease(int button) { MenuVTable *table = vtable; table->release((char *)this + table->adjustment, button); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023ED30)
// 0x0023ED30 Show__9MenuEntry
class Menu;
class MenuSystem;
typedef int MenuColor;

enum MenuEntryFlags
{
    MENTRY_VISIBLE = 1 << 0,
    MENTRY_ENABLED = 1 << 1,
    MENTRY_ACTIVE = 1 << 2,
};

class MenuEntry
{
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
    virtual void OnMenuOpen(Menu *menu, MenuSystem *system);
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
    virtual int MenuText(char *text, int len)
    {
        if (len > 0)
            *text = 0;
        return 0;
    }
};

void MenuEntry::Show()
{
    if (!IsVisible())
    {
        SetFlag(MENTRY_VISIBLE, true);
        OnShow();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EFD8)
// 0x0023EFD8 OnMenuClose__9MenuEntry
struct EntryVTable { char padding[0x40]; short adjustment; short padding2; void (*deactivate)(void *self); };
class MenuEntry { int field0; EntryVTable *vtable; public: void OnMenuClose(); };
void MenuEntry::OnMenuClose() { EntryVTable *table = vtable; table->deactivate((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023E218)
// 0x0023E218 __4MenuP4Menu
class MenuEntry;
class MenuSystem;

extern const char menu_vtable[];
__asm__(".equ menu_vtable, 0x004D5D48");

class Menu {
    Menu *parent;
    int entries;
    MenuEntry **entry;
    int activeentry;
    bool isopen;
    Menu *closeto;
    MenuSystem *control;
    const void *vtable;

public:
    Menu(Menu *parent_menu);
};

Menu::Menu(Menu *parent_menu)
    : vtable(menu_vtable)
{
    parent = parent_menu;
    activeentry = -1;
    entries = 0;
    entry = 0;
    isopen = false;
    closeto = 0;
    control = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023E688)
// 0x0023E688 GetElementFlags__4Menui
class MenuEntry { public: unsigned int state; unsigned int GetState() { return state; } };
class Menu {
    void *vtable;
    int entries;
    MenuEntry **entry;
public:
    unsigned int GetElementFlags(int i);
};
unsigned int Menu::GetElementFlags(int i)
{
    if (i >= 0 && i < entries && entry[i])
        return entry[i]->GetState();
    return 0;
}
#endif
