// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DC668)
// 0x001DC668 Select__11OptionsMenu
class OptionsMenu {
public:
    void Select();
};

void OptionsMenu::Select() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC670)
// 0x001DC670 GetPointer__11OptionsMenuPCc
class PanelQuad;
class PanelFile { public: PanelQuad *GetPointer(const char *name); };
__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");
class OptionsMenu { char padding[0x100]; PanelFile panel; public: PanelQuad *GetPointer(const char *name); };
PanelQuad *OptionsMenu::GetPointer(const char *name) { PanelQuad *result = panel.GetPointer(name); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC690)
// 0x001DC690 _$_15MultiplayerMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void MultiplayerMenuDtor(void *self) __asm__("_$_15MultiplayerMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void MultiplayerMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC978)
// 0x001DC978 _$_12FreesurfMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void FreesurfMenuDtor(void *self) __asm__("_$_12FreesurfMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void FreesurfMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC520)
// 0x001DC520 Select__12MainFrontEnd
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("Select__12MainFrontEnd");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC630)
// 0x001DC630 OnCross__10CareerMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__10CareerMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC728)
// 0x001DC728 OnCross__15MultiplayerMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__15MultiplayerMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC838)
// 0x001DC838 OnCross__12MultiSubMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__12MultiSubMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC948)
// 0x001DC948 OnCross__19MultiControllerMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__19MultiControllerMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCA10)
// 0x001DCA10 OnCross__12FreesurfMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__12FreesurfMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC4C8)
// 0x001DC4C8 __tf12MainFrontEnd
extern "C" void __rtti_class(
    void **type,
    const char *name,
    void **base,
    int public_base
);
extern "C" void **MainFrontEndBaseRtti()
    __asm__("__tf11FEMultiMenu");
extern "C" void *main_front_end_type[]
    __asm__("__ti12MainFrontEnd");
extern const char main_front_end_name[];
extern void *fe_multi_menu_type[];

__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti12MainFrontEnd, 0x005A2BE8");
__asm__(".equ main_front_end_name, 0x004DDC38");
__asm__(".equ fe_multi_menu_type, 0x004DDC48");

extern "C" void **MainFrontEndRtti()
    __asm__("__tf12MainFrontEnd");

void **MainFrontEndRtti()
{
    if (!main_front_end_type[0])
    {
        MainFrontEndBaseRtti();
        __rtti_class(
            main_front_end_type,
            main_front_end_name,
            fe_multi_menu_type,
            1
        );
    }
    return main_front_end_type;
}
#endif
