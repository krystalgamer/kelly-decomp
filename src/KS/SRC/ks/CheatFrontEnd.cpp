// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D3510)
// 0x001D3510 Select__14EnterCheatMenu
struct cheat_vtable { char padding[0x128]; short adjustment; short padding2; void (*select)(void *self, void *entry); };
class EnterCheatMenu { char padding0[0x74]; cheat_vtable *vtable; char padding1[0xfc]; void *selected; public: void Select(); };
void EnterCheatMenu::Select() { cheat_vtable *table = vtable; table->select((char *)this + table->adjustment, selected); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D16C0)
// 0x001D16C0 Select__13CheatFrontEnd
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

class CheatFrontEnd {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;

public:
    void Select();
};

void CheatFrontEnd::Select() {
    menu_vtable *table = vtable;
    table->select(
        (char *)this + table->adjustment,
        highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D22C8)
// 0x001D22C8 Select__13CheatCodeMenu
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

class CheatCodeMenu {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;

public:
    void Select();
};

void CheatCodeMenu::Select() {
    menu_vtable *table = vtable;
    table->select(
        (char *)this + table->adjustment,
        highlighted->entry_num
    );
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_001D15B8)
// 0x001D15B8 Draw__13CheatFrontEnd
class ActiveMenu { char padding[0x74]; public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void Draw();
};
class CheatFrontEnd { char padding[0x60]; ActiveMenu* active; public: void Draw(); };
extern void base_call(CheatFrontEnd*) __asm__("Draw__15FEGraphicalMenu");
__asm__(".equ Draw__15FEGraphicalMenu, 0x001580D8");
void CheatFrontEnd::Draw() { if(active) { active->Draw(); KELLY_DECOMP_COMPILER_BARRIER(); } else { base_call(this); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
