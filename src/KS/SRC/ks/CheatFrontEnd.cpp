// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001D1780)
// 0x001D1780 OnActivate__13CheatFrontEnd
#include "KS/SRC/ks/CheatFrontEnd_shared.h"

void CheatFrontEnd::OnActivate()
{
    bool cheat_available = false;

    TurnOnPhone(true);

    for (int index = 0; index < CHEAT_LAST; index++)
    {
        if (globalCareerData.isCheatUnlocked(index))
            cheat_available = true;
    }

    if (entries->next == 0 && cheat_available)
    {
        toggle_cheats_entryAdded = true;
        Add(toggle_cheats_entry);
        new_cheat_entry->down =
            new_cheat_entry->up = toggle_cheats_entry;
    }

    FEMultiMenu::OnActivate();
    __asm__ volatile("");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D1600)
// 0x001D1600 Select__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd_shared.h"

void CheatFrontEnd::Select(int entry_index)
{
    if (active)
        active->Select(entry_index);
    else
    {
        SoundScriptManager::inst()->playEvent(SS_FE_ONX);
        switch (entry_index)
        {
        case 0:
            MakeActive(enter_code);
            break;
        case 1:
            MakeActive(code_menu);
            break;
        }
    }
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_001D2028)
// 0x001D2028 Draw__13CheatCodeMenu
struct text_vtable{char p0[24];short adjustment;short x0;void(*draw)(void*);};struct text{char p0[76];text_vtable*vtable;};struct cheat_layout{char p0[380];text*toggle_state[2];};extern "C" void draw_base(void*) __asm__("Draw__15FEGraphicalMenu");__asm__(".equ Draw__15FEGraphicalMenu,0x001580D8");extern "C" void draw_cheats(cheat_layout*self) __asm__("Draw__13CheatCodeMenu");void draw_cheats(cheat_layout*self){for(int i=0;i<2;i++){text*x=self->toggle_state[i];text_vtable*t=x->vtable;t->draw((char*)x+t->adjustment);}draw_base(self);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D16F0)
// 0x001D16F0 OnTriangle__13CheatFrontEndi
struct MenuVtable{char p0[32];short make_adj;short z0;void(*make)(void*,int,int,int);char p1[152];short tri_adj;short z1;void(*triangle)(void*,int);};struct Menu{char pad[116];MenuVtable*vtable;};struct GraphicalMenuSystem{char pad[140];MenuVtable*vtable;};extern void*sound_manager;extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");class CheatFrontEnd{public:char p0[96];Menu*active;char p1[252];GraphicalMenuSystem*sys;void TurnOnPhone(bool)__asm__("TurnOnPhone__13CheatFrontEndb");void OnTriangle(int)__asm__("OnTriangle__13CheatFrontEndi");};__asm__(".equ TurnOnPhone__13CheatFrontEndb,0x001D1BC8");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");void CheatFrontEnd::OnTriangle(int c){if(active){MenuVtable*v=active->vtable;v->triangle((char*)active+v->tri_adj,c);}else{TurnOnPhone(false);MenuVtable*v=sys->vtable;register int x asm("$5")=1;register int y asm("$6")=1;register int z asm("$7")=1;asm volatile("" : "+r"(x), "+r"(y), "+r"(z));v->make((char*)sys+v->make_adj,x,y,z);play(sound_manager,27,0,0.0f);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D3618)
// 0x001D3618 OnUp__14EnterCheatMenui
extern void*sound_manager;extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");class EnterCheatMenu{public:char p[372];int current_button;char p2[44];bool closing;void ChangeButton(int)__asm__("ChangeButton__14EnterCheatMenui");void OnUp(int)__asm__("OnUp__14EnterCheatMenui");};__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");void EnterCheatMenu::OnUp(int c){if(closing)return;play(sound_manager,25,0,0.0f);if(current_button>=4&&current_button<=9)ChangeButton(current_button-3);else if(current_button>=1&&current_button<=3)ChangeButton(0);else ChangeButton(8);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D36A8)
// 0x001D36A8 OnDown__14EnterCheatMenui
extern void*sound_manager;extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");class EnterCheatMenu{public:char p[372];int current_button;char p2[44];bool closing;void ChangeButton(int)__asm__("ChangeButton__14EnterCheatMenui");void OnDown(int)__asm__("OnDown__14EnterCheatMenui");};__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");void EnterCheatMenu::OnDown(int c){if(closing)return;play(sound_manager,25,0,0.0f);if(current_button>=1&&current_button<=6)ChangeButton(current_button+3);else if(current_button>=7&&current_button<=9)ChangeButton(0);else ChangeButton(2);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D3738)
// 0x001D3738 OnRight__14EnterCheatMenui
struct entity;struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class EnterCheatMenu{char p0[372];int current_button;char p1[44];bool closing;public:void ChangeButton(int);void OnRight(int) __asm__("OnRight__14EnterCheatMenui");};asm(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");void EnterCheatMenu::OnRight(int c){if(closing)return;playEvent(sound_manager,26,0,0.0f);if(current_button%3!=0)ChangeButton(current_button+1);else if(current_button!=0)ChangeButton(current_button-2);else ChangeButton(9);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D37D0)
// 0x001D37D0 OnLeft__14EnterCheatMenui
struct entity;struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class EnterCheatMenu{char p0[372];int current_button;char p1[44];bool closing;public:void ChangeButton(int);void OnLeft(int) __asm__("OnLeft__14EnterCheatMenui");};asm(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");void EnterCheatMenu::OnLeft(int c){if(closing)return;playEvent(sound_manager,26,0,0.0f);if(current_button==0)ChangeButton(7);else if(current_button%3!=1)ChangeButton(current_button-1);else ChangeButton(current_button+2);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D1850)
// 0x001D1850 OnUp__13CheatFrontEndi
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_up)(void*,int);char p1[272];short self_adj;short g1;void(*self_up)(void*,int);};struct Layout{char p0[76];Entry*highlighted;char p1[16];Layout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class CheatFrontEnd{char raw[120];public:void OnUp(int);};void CheatFrontEnd::OnUp(int c){Layout*self=(Layout*)this;if(self->active){Layout*a=self->active;VTable*v=a->vt;v->active_up((char*)a+v->active_adj,c);asm volatile("");return;}Entry*old=self->highlighted;VTable*v=self->vt;v->self_up((char*)self+v->self_adj,c);if(self->highlighted!=old){sound_manager->playEvent(UPDOWN);asm volatile("");return;}sound_manager->playEvent(ERROR_EVENT);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D18F0)
// 0x001D18F0 OnDown__13CheatFrontEndi
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_down)(void*,int);char p1[272];short self_adj;short g1;void(*self_down)(void*,int);};struct Layout{char p0[76];Entry*highlighted;char p1[16];Layout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class CheatFrontEnd{char raw[120];public:void OnDown(int);};void CheatFrontEnd::OnDown(int c){Layout*self=(Layout*)this;if(self->active){Layout*a=self->active;VTable*v=a->vt;v->active_down((char*)a+v->active_adj,c);asm volatile("");return;}Entry*old=self->highlighted;VTable*v=self->vt;v->self_down((char*)self+v->self_adj,c);if(self->highlighted!=old){sound_manager->playEvent(UPDOWN);asm volatile("");return;}sound_manager->playEvent(ERROR_EVENT);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D2340)
// 0x001D2340 OnUp__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
#include "decomp_annotations.h"

// Reuse the complete released FEGraphicalMenu and FEMultiMenu virtual order.
// The shipped base also retains its source-version slot before Select.
// Preserve the released shared-epilogue scheduling across the sound branches.
void CheatCodeMenu::OnUp(int c)
{
	FEMenuEntry *old_highlighted = highlighted;
	int old_next_up = next_up;

	if(highlighted == cheats[0] && old_next_up != -1)
		ReOrderEntries(old_next_up);
	else
		FEMultiMenu::OnUp(c);

	if (highlighted == old_highlighted && old_next_up == -1)
		SoundScriptManager::inst()->playEvent(SS_FE_ERROR);
	else
		SoundScriptManager::inst()->playEvent(SS_FE_UPDOWN);
	KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D23F8)
// 0x001D23F8 OnDown__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd_shared.h"
#include "decomp_annotations.h"

void CheatCodeMenu::OnDown(int controller)
{
    FEMenuEntry *old_highlighted = highlighted;
    int old_next_down = next_down;

    if (
        old_highlighted == cheats[MAX_CHEATS_PER_SCREEN - 1] &&
        old_next_down != -1
    )
        ReOrderEntries(menu_entry_cheat_index[0] + 1);
    else
        FEMultiMenu::OnDown(controller);

    if (
        highlighted == old_highlighted &&
        old_next_down == -1
    )
        SoundScriptManager::inst()->playEvent(SS_FE_ERROR);
    else
        SoundScriptManager::inst()->playEvent(SS_FE_UPDOWN);

    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
