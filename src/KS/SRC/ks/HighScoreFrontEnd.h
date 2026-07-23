// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCAF0)
// 0x001DCAF0 OnTriangle__13NameEntryMenui
class NameEntryMenu {
public:
    void OnTriangle(int arg0);
};

void NameEntryMenu::OnTriangle(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCAF8)
// 0x001DCAF8 OnCross__13NameEntryMenui
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
    __asm__("OnCross__13NameEntryMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCA40)
// 0x001DCA40 __tf17HighScoreFrontEnd
extern "C" void __rtti_class(
    void **type,
    const char *name,
    void **base,
    int public_base
);
extern "C" void **HighScoreFrontEndBaseRtti()
    __asm__("__tf11FEMultiMenu");
extern "C" void *high_score_front_end_type[]
    __asm__("__ti17HighScoreFrontEnd");
extern const char high_score_front_end_name[];
extern void *fe_multi_menu_type[];

__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti17HighScoreFrontEnd, 0x005A2C58");
__asm__(".equ high_score_front_end_name, 0x004DDCC0");
__asm__(".equ fe_multi_menu_type, 0x004DDC48");

extern "C" void **HighScoreFrontEndRtti()
    __asm__("__tf17HighScoreFrontEnd");

void **HighScoreFrontEndRtti()
{
    if (!high_score_front_end_type[0])
    {
        HighScoreFrontEndBaseRtti();
        __rtti_class(
            high_score_front_end_type,
            high_score_front_end_name,
            fe_multi_menu_type,
            1
        );
    }
    return high_score_front_end_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCA98)
// 0x001DCA98 __tf13NameEntryMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCA98() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCA98[] __asm__("__ti13NameEntryMenu");
extern const char name_001DCA98[];
extern void *base_type_001DCA98[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13NameEntryMenu, 0x005A2C68");
__asm__(".equ name_001DCA98, 0x004DDCD8");
__asm__(".equ base_type_001DCA98, 0x004DDC48");
extern "C" void **Rtti_001DCA98() __asm__("__tf13NameEntryMenu");
void **Rtti_001DCA98()
{
    if (!type_001DCA98[0]) {
        BaseRtti_001DCA98();
        __rtti_class(type_001DCA98, name_001DCA98, base_type_001DCA98, 1);
    }
    return type_001DCA98;
}
#endif
