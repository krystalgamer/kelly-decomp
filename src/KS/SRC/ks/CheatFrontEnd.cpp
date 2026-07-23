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


#if defined(KELLY_DECOMP_FUNCTION_001D22F8)
// 0x001D22F8 OnActivate__13CheatCodeMenu
class FEMenuEntry {}; class CheatBase { char padding[0x74]; public: virtual void d0(); virtual void d1(); virtual void setHigh(FEMenuEntry*, bool=true); }; class CheatCodeMenu : public CheatBase { char padding2[0x160-0x78]; FEMenuEntry* cheats[1]; public: void ReOrderEntries(int); void OnActivate(); }; __asm__(".equ ReOrderEntries__13CheatCodeMenui, 0x001D2518"); void CheatCodeMenu::OnActivate() { ReOrderEntries(0); setHigh(cheats[0]); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D2A50)
// 0x001D2A50 OnTriangle__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
// The old assembler requires the adjusted high-half representation for this
// absolute singleton address because its signed low half is negative.
__asm__(".equ _18SoundScriptManager$instance, 0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
void CheatCodeMenu::OnTriangle(int command) {
    parent->MakeActive(0);
    SoundScriptManager::inst()->playEvent(SS_FE_BACK);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D3868)
// 0x001D3868 OnTriangle__14EnterCheatMenui
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
__asm__(".equ _18SoundScriptManager$instance, 0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
__asm__(".equ ExitMenu__14EnterCheatMenuf, 0x001D39F0");
void EnterCheatMenu::OnTriangle(int command) {
    if (!closing)
        ExitMenu(0.0f);
    else
        closing_timer = 0.0f;
    SoundScriptManager::inst()->playEvent(SS_FE_BACK);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D1990)
// 0x001D1990 OnLeft__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
void CheatFrontEnd::OnLeft(int command) {
    if (active)
        active->OnLeft(command);
    else {
        CheatFrontEndDispatchVTable *table = *(CheatFrontEndDispatchVTable **)((char *)this + 0x74);
        table->on_left((char *)this + table->adjustment, command);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D19E0)
// 0x001D19E0 OnRight__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
void CheatFrontEnd::OnRight(int command) {
    if (active)
        active->OnRight(command);
    else {
        CheatFrontEndDispatchVTable *table = *(CheatFrontEndDispatchVTable **)((char *)this + 0x74);
        table->on_right((char *)this + table->right_adjustment, command);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D3100)
// 0x001D3100 Draw__14EnterCheatMenu
struct draw_vtable {
    char padding[0x18]; short adjustment; short reserved;
    void (*draw)(void *);
};
struct text_layout { char padding[0x4c]; draw_vtable *vtable; };
class EnterCheatMenu {
    char padding[0x16c];
    text_layout *code_display;
    text_layout *cursor;
    char padding2[0x30];
    int closing;
public:
    void Draw();
};
void EnterCheatMenu::Draw() {
    draw_vtable *code_table=code_display->vtable;
    code_table->draw(
        (char *)code_display+code_table->adjustment
    );
    if (!closing) {
        draw_vtable *cursor_table=cursor->vtable;
        cursor_table->draw(
            (char *)cursor+cursor_table->adjustment
        );
    }
}
#endif
