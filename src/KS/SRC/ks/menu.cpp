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
#include "KS/SRC/ks/menu_shared.h"
// 0x0023ED30 Show__9MenuEntry
void MenuEntry::Show()
{
    if (!IsVisible())
    {
        SetFlag(MENTRY_VISIBLE, true);
        OnShow();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EE00)
#include "KS/SRC/ks/menu_shared.h"
// 0x0023EE00 Enable__9MenuEntry
void MenuEntry::Enable()
{
    if (IsVisible() && !IsEnabled())
    {
        SetFlag(MENTRY_ENABLED, true);
        OnEnable();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EFD8)
// 0x0023EFD8 OnMenuClose__9MenuEntry
struct EntryVTable { char padding[0x40]; short adjustment; short padding2; void (*deactivate)(void *self); };
class MenuEntry { int field0; EntryVTable *vtable; public: void OnMenuClose(); };
void MenuEntry::OnMenuClose() { EntryVTable *table = vtable; table->deactivate((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00240298)
#include "KS/SRC/ks/menu_shared.h"
// 0x00240298 SetValue__17MenuEntryEnumEditi
void MenuEntryEnumEdit::SetValue(int value)
{
    if (value >= 0 && value <= hi)
        MenuEntryIntEdit::SetValue(vals[value]);
}
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

#if defined(KELLY_DECOMP_FUNCTION_0023E4E0)
// 0x0023E4E0 CloseAll__4Menu
struct menu_vtable {
    char padding[0x10];
    short close_all_adjust;
    short reserved;
    void (*close_all)(void *self);
};

class Menu {
    char padding[0x10];
    int isopen;
    Menu *closeto;
    char vtable_padding[4];
    menu_vtable *vtable;

public:
    void Close(bool toparent = true);
    void CloseAll();
};

__asm__(".equ Close__4Menub, 0x0023E470");

void Menu::CloseAll()
{
    if (isopen)
    {
        Menu *other = closeto;
        Close();
        if (other)
            other->vtable->close_all(
                (char *)other + other->vtable->close_all_adjust
            );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EF38)
// 0x0023EF38 Deactivate__9MenuEntry
#include "KS/SRC/ks/menu_shared.h"

void MenuEntry::Deactivate()
{
    if (IsActive())
    {
        OnDeactivate();
        SetFlag(MENTRY_ACTIVE, false);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023EED8)
// 0x0023EED8 Activate__9MenuEntry
struct entry_vtable {
    char padding[0x90]; short adjustment; short reserved;
    void (*on_activate)(void *);
};
class MenuEntry {
    unsigned int flags;
    entry_vtable *vtable;
public:
    bool GetFlag(unsigned int flag) { return (flags&flag)!=0; }
    void SetFlag(unsigned int flag,bool enabled) {
        if (enabled) flags|=flag; else flags&=~flag;
    }
    bool IsVisible() { return GetFlag(1); }
    bool IsEnabled() { return IsVisible() && GetFlag(2); }
    bool IsActive() { return GetFlag(4); }
    void Activate();
};
void MenuEntry::Activate() {
    if (IsEnabled() && !IsActive()) {
        SetFlag(4,true);
        vtable->on_activate(
            (char *)this+vtable->adjustment
        );
    }
}
#endif
