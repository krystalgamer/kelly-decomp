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

#if defined(KELLY_DECOMP_FUNCTION_0023E6C8)
// 0x0023E6C8 GetElementText__4MenuiPci
extern const char empty_text[]; __asm__(".equ empty_text,0x004DFC30");
struct entry_vtable { char padding[160]; short adjustment; short reserved; void(*menu_text)(void*,char*,int); }; struct menu_entry { unsigned flags; entry_vtable*vtable; }; struct menu_layout { void*vtable; int entries; menu_entry**entry; };
extern "C" void get_text(menu_layout*self,int i,char*text,int len) __asm__("GetElementText__4MenuiPci");
void get_text(menu_layout*self,int i,char*text,int len)
{if(i>=0&&i<self->entries&&self->entry[i]){menu_entry*e=self->entry[i];register entry_vtable*t __asm__("$3")=e->vtable;register void(*fn)(void*,char*,int) __asm__("$2")=t->menu_text;fn((char*)e+t->adjustment,text,len);}else text[0]=empty_text[0];}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023ECC8)
// 0x0023ECC8 OnButtonRelease__4Menui
struct entry_vtable { char padding[104]; short adjustment; short reserved; void(*release)(void*,int); }; struct menu_entry { unsigned flags; entry_vtable*vtable; }; struct menu_layout { void*vtable; int entries; menu_entry**entry; int activeentry; };
extern "C" void release_button(menu_layout*self,int button) __asm__("OnButtonRelease__4Menui");
void release_button(menu_layout*self,int button)
{switch(button){case 2:case 3:case 4:case 8:break;default:if(self->activeentry>=0&&self->entry[self->activeentry]){menu_entry*e=self->entry[self->activeentry];entry_vtable*t=e->vtable;t->release((char*)e+t->adjustment,button);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023F108)
// 0x0023F108 MenuText__14MenuEntryLabelPci
extern "C" char* strncpy(char*,const char*,unsigned); extern "C" unsigned strlen(const char*); __asm__(".equ strncpy,0x003D4508"); __asm__(".equ strlen,0x003D40E0");
struct label_layout { unsigned flags; void*vtable; const char*label; };
extern "C" int label_text(label_layout*self,char*text,int len) __asm__("MenuText__14MenuEntryLabelPci");
int label_text(label_layout*self,char*text,int len)
{if(len&&self->label){strncpy(text,self->label,len);text[len-1]=0;return strlen(text);}else {if(len>0)*text=0;return 0;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023E470)
// 0x0023E470 Close__4Menub
struct menu_vtable{char p0[56];short adjustment;short x0;void(*on_close)(void*,bool);};struct menu_system;struct menu{char p0[16];int isopen;char p1[4];menu_system*control;menu_vtable*vtable;};extern "C" void closing(menu_system*,menu*) __asm__("Closing__10MenuSystemP4Menu");extern "C" void activate(menu*,int) __asm__("ActivateEntry__4Menui");__asm__(".equ Closing__10MenuSystemP4Menu,0x00241108");__asm__(".equ ActivateEntry__4Menui,0x0023E880");extern "C" void close_menu(menu*self,bool toparent) __asm__("Close__4Menub");void close_menu(menu*self,bool toparent){if(self->isopen){menu_system*c=self->control;self->isopen=false;closing(c,self);menu_vtable*t=self->vtable;t->on_close((char*)self+t->adjustment,toparent);if(toparent)activate(self,-1);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023F1F8)
// 0x0023F1F8 OnButtonPress__7Submenui
struct Menu;struct MenuSystem;extern "C" void close_menu(Menu*,bool) __asm__("Close__4Menub");extern "C" void open_menu(Menu*,Menu*,MenuSystem*) __asm__("Open__4MenuP4MenuP10MenuSystem");__asm__(".equ Close__4Menub,0x0023E470");__asm__(".equ Open__4MenuP4MenuP10MenuSystem,0x0023E3D0");struct submenu_layout{char p0[12];Menu*menuopen;Menu*parent;MenuSystem*system;};extern "C" void press(submenu_layout*self,int button) __asm__("OnButtonPress__7Submenui");void press(submenu_layout*self,int button){if(button==7&&self->parent&&self->menuopen){Menu*p=self->parent;MenuSystem*s=self->system;close_menu(p,false);open_menu(self->menuopen,p,s);int dead;__asm__("" : "=r"(dead));}}
#endif
