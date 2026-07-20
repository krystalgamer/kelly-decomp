// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D5740)
// 0x001D5740 OnActivate__13PAL60FrontEnd
struct menu_entry;

struct menu_vtable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*set_high)(void *self, menu_entry *entry, bool animate);
};

class PAL60FrontEnd {
    char padding0[0x74];
    menu_vtable *vtable;
    char padding1[0xf0];
    menu_entry *yes;

public:
    void OnActivate();
};

void PAL60FrontEnd::OnActivate() {
    menu_vtable *table = vtable;
    table->set_high(
        (char *)this + table->adjustment,
        yes,
        true
    );
}
#endif
