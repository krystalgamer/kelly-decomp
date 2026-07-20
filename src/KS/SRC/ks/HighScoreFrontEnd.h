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
