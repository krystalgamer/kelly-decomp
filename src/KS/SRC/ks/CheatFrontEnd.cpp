// Matching decompilation blocks selected by generated build shims.

// 0x001D1780 OnActivate__13CheatFrontEnd
#include "KS/SRC/ks/CheatFrontEnd.h"

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

// 0x001D1600 Select__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd.h"

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

// 0x001D3510 Select__14EnterCheatMenu
struct cheat_vtable { char padding[0x128]; short adjustment; short padding2; void (*select)(void *self, void *entry); };
struct enter_cheat_select_layout {
    char padding0[0x74];
    cheat_vtable *vtable;
    char padding1[0xfc];
    void *selected;
};
extern "C" void select_enter_cheat(enter_cheat_select_layout *self)
    __asm__("Select__14EnterCheatMenu");
void select_enter_cheat(enter_cheat_select_layout *self) {
    cheat_vtable *table = self->vtable;
    table->select(
        (char *)self + table->adjustment,
        self->selected
    );
}

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

struct cheat_frontend_select_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void select_cheat_frontend(cheat_frontend_select_layout *self)
    __asm__("Select__13CheatFrontEnd");
void select_cheat_frontend(cheat_frontend_select_layout *self) {
    menu_vtable *table = self->vtable;
    table->select(
        (char *)self + table->adjustment,
        self->highlighted->entry_num
    );
}

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

struct cheat_code_select_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void select_cheat_code(cheat_code_select_layout *self)
    __asm__("Select__13CheatCodeMenu");
void select_cheat_code(cheat_code_select_layout *self) {
    menu_vtable *table = self->vtable;
    table->select(
        (char *)self + table->adjustment,
        self->highlighted->entry_num
    );
}


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
struct cheat_frontend_draw_layout { char padding[0x60]; ActiveMenu* active; };
extern void base_call(void*) __asm__("Draw__15FEGraphicalMenu");
__asm__(".equ Draw__15FEGraphicalMenu, 0x001580D8");
extern "C" void draw_cheat_frontend(cheat_frontend_draw_layout *self)
    __asm__("Draw__13CheatFrontEnd");
void draw_cheat_frontend(cheat_frontend_draw_layout *self) {
    if (self->active) {
        self->active->Draw();
        KELLY_DECOMP_COMPILER_BARRIER();
    } else {
        base_call(self);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}


// 0x001D22F8 OnActivate__13CheatCodeMenu
#include "KS/SRC/ks/CheatFrontEnd.h"
void CheatCodeMenu::OnActivate() {
    ReOrderEntries(0);
    setHigh(cheats[0]);
}

// 0x001D2A50 OnTriangle__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd.h"
// The old assembler requires the adjusted high-half representation for this
// absolute singleton address because its signed low half is negative.
__asm__(".equ _18SoundScriptManager$instance, 0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
void CheatCodeMenu::OnTriangle(int command) {
    parent->MakeActive(0);
    SoundScriptManager::inst()->playEvent(SS_FE_BACK);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001D3868 OnTriangle__14EnterCheatMenui
#include "KS/SRC/ks/CheatFrontEnd.h"
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

// 0x001D1990 OnLeft__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd.h"
struct CheatFrontEndDispatchVTable {
    char padding[0x1c0];
    short adjustment;
    short padding2;
    void (*on_left)(void *self, int command);
};

void CheatFrontEnd::OnLeft(int command) {
    if (active)
        active->OnLeft(command);
    else {
        CheatFrontEndDispatchVTable *table = *(CheatFrontEndDispatchVTable **)((char *)this + 0x74);
        table->on_left((char *)this + table->adjustment, command);
    }
}

// 0x001D19E0 OnRight__13CheatFrontEndi
#include "KS/SRC/ks/CheatFrontEnd.h"
struct CheatFrontEndDispatchVTable {
    char padding[0x1c8];
    short adjustment;
    short padding2;
    void (*on_right)(void *self, int command);
};

void CheatFrontEnd::OnRight(int command) {
    if (active)
        active->OnRight(command);
    else {
        CheatFrontEndDispatchVTable *table = *(CheatFrontEndDispatchVTable **)((char *)this + 0x74);
        table->on_right((char *)this + table->adjustment, command);
    }
}

// 0x001D3100 Draw__14EnterCheatMenu
struct draw_vtable {
    char padding[0x18]; short adjustment; short reserved;
    void (*draw)(void *);
};
struct text_layout { char padding[0x4c]; draw_vtable *vtable; };
struct enter_cheat_draw_layout {
    char padding[0x16c];
    text_layout *code_display;
    text_layout *cursor;
    char padding2[0x30];
    int closing;
};
extern "C" void draw_enter_cheat(enter_cheat_draw_layout *self)
    __asm__("Draw__14EnterCheatMenu");
void draw_enter_cheat(enter_cheat_draw_layout *self) {
    draw_vtable *code_table=self->code_display->vtable;
    code_table->draw(
        (char *)self->code_display+code_table->adjustment
    );
    if (!self->closing) {
        draw_vtable *cursor_table=self->cursor->vtable;
        cursor_table->draw(
            (char *)self->cursor+cursor_table->adjustment
        );
    }
}

// 0x001D2028 Draw__13CheatCodeMenu
struct text_vtable{char p0[24];short adjustment;short x0;void(*draw)(void*);};struct text{char p0[76];text_vtable*vtable;};struct cheat_layout{char p0[380];text*toggle_state[2];};extern "C" void draw_base(void*) __asm__("Draw__15FEGraphicalMenu");__asm__(".equ Draw__15FEGraphicalMenu,0x001580D8");extern "C" void draw_cheats(cheat_layout*self) __asm__("Draw__13CheatCodeMenu");void draw_cheats(cheat_layout*self){for(int i=0;i<2;i++){text*x=self->toggle_state[i];text_vtable*t=x->vtable;t->draw((char*)x+t->adjustment);}draw_base(self);int dead;__asm__("" : "=r"(dead));}

// 0x001D16F0 OnTriangle__13CheatFrontEndi
struct MenuVtable {
    char p0[32];
    short make_adj;
    short z0;
    void (*make)(void *, int, int, int);
    char p1[152];
    short tri_adj;
    short z1;
    void (*triangle)(void *, int);
};
struct Menu { char pad[116]; MenuVtable *vtable; };
struct GraphicalMenuSystemLayout { char pad[140]; MenuVtable *vtable; };
struct CheatFrontEndTriangleLayout {
    char p0[96];
    Menu *active;
    char p1[252];
    GraphicalMenuSystemLayout *sys;
};
extern void *sound_manager;
extern "C" void play(void *, int, void *, float)
    __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
extern "C" void turn_on_phone(void *, bool)
    __asm__("TurnOnPhone__13CheatFrontEndb");
extern "C" void cheat_frontend_triangle(
    CheatFrontEndTriangleLayout *,
    int
) __asm__("OnTriangle__13CheatFrontEndi");
__asm__(".equ TurnOnPhone__13CheatFrontEndb,0x001D1BC8");
__asm__(".equ sound_manager,0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
void cheat_frontend_triangle(CheatFrontEndTriangleLayout *self, int c) {
    if (self->active) {
        MenuVtable *v = self->active->vtable;
        v->triangle((char *)self->active + v->tri_adj, c);
    } else {
        turn_on_phone(self, false);
        MenuVtable *v = self->sys->vtable;
        register int x asm("$5") = 1;
        register int y asm("$6") = 1;
        register int z asm("$7") = 1;
        asm volatile("" : "+r"(x), "+r"(y), "+r"(z));
        v->make((char *)self->sys + v->make_adj, x, y, z);
        play(sound_manager, 27, 0, 0.0f);
        asm volatile("");
    }
}

// 0x001D3618 OnUp__14EnterCheatMenui
extern void *sound_manager;
extern "C" void play(void *, int, void *, float)
    __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
struct EnterCheatNavigationLayout {
    char padding[372];
    int current_button;
    char padding2[44];
    bool closing;
};
extern "C" void change_button(void *, int)
    __asm__("ChangeButton__14EnterCheatMenui");
extern "C" void enter_cheat_up(EnterCheatNavigationLayout *, int)
    __asm__("OnUp__14EnterCheatMenui");
__asm__(".equ sound_manager,0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
__asm__(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");
void enter_cheat_up(EnterCheatNavigationLayout *self, int c) {
    if (self->closing)
        return;
    play(sound_manager, 25, 0, 0.0f);
    if (self->current_button >= 4 && self->current_button <= 9)
        change_button(self, self->current_button - 3);
    else if (self->current_button >= 1 && self->current_button <= 3)
        change_button(self, 0);
    else
        change_button(self, 8);
}

// 0x001D36A8 OnDown__14EnterCheatMenui
extern void *sound_manager;
extern "C" void play(void *, int, void *, float)
    __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
struct EnterCheatNavigationLayout {
    char padding[372];
    int current_button;
    char padding2[44];
    bool closing;
};
extern "C" void change_button(void *, int)
    __asm__("ChangeButton__14EnterCheatMenui");
extern "C" void enter_cheat_down(EnterCheatNavigationLayout *, int)
    __asm__("OnDown__14EnterCheatMenui");
__asm__(".equ sound_manager,0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
__asm__(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");
void enter_cheat_down(EnterCheatNavigationLayout *self, int c) {
    if (self->closing)
        return;
    play(sound_manager, 25, 0, 0.0f);
    if (self->current_button >= 1 && self->current_button <= 6)
        change_button(self, self->current_button + 3);
    else if (self->current_button >= 7 && self->current_button <= 9)
        change_button(self, 0);
    else
        change_button(self, 2);
}

// 0x001D3738 OnRight__14EnterCheatMenui
struct entity;
struct SoundScriptManager;
extern SoundScriptManager *sound_manager;
extern "C" void playEvent(SoundScriptManager *, int, entity *, float)
    __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
struct EnterCheatNavigationLayout {
    char padding[372];
    int current_button;
    char padding2[44];
    bool closing;
};
extern "C" void change_button(void *, int)
    __asm__("ChangeButton__14EnterCheatMenui");
extern "C" void enter_cheat_right(EnterCheatNavigationLayout *, int)
    __asm__("OnRight__14EnterCheatMenui");
asm(".equ sound_manager,0x0046B4A0");
asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
asm(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");
void enter_cheat_right(EnterCheatNavigationLayout *self, int c) {
    if (self->closing)
        return;
    playEvent(sound_manager, 26, 0, 0.0f);
    if (self->current_button % 3 != 0)
        change_button(self, self->current_button + 1);
    else if (self->current_button != 0)
        change_button(self, self->current_button - 2);
    else
        change_button(self, 9);
}

// 0x001D37D0 OnLeft__14EnterCheatMenui
struct entity;
struct SoundScriptManager;
extern SoundScriptManager *sound_manager;
extern "C" void playEvent(SoundScriptManager *, int, entity *, float)
    __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");
struct EnterCheatNavigationLayout {
    char padding[372];
    int current_button;
    char padding2[44];
    bool closing;
};
extern "C" void change_button(void *, int)
    __asm__("ChangeButton__14EnterCheatMenui");
extern "C" void enter_cheat_left(EnterCheatNavigationLayout *, int)
    __asm__("OnLeft__14EnterCheatMenui");
asm(".equ sound_manager,0x0046B4A0");
asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
asm(".equ ChangeButton__14EnterCheatMenui,0x001D38B8");
void enter_cheat_left(EnterCheatNavigationLayout *self, int c) {
    if (self->closing)
        return;
    playEvent(sound_manager, 26, 0, 0.0f);
    if (self->current_button == 0)
        change_button(self, 7);
    else if (self->current_button % 3 != 1)
        change_button(self, self->current_button - 1);
    else
        change_button(self, self->current_button + 2);
}

// 0x001D1850 OnUp__13CheatFrontEndi
struct Entry;
struct VTable {
    char p0[152];
    short active_adj;
    short g0;
    void (*active_up)(void *, int);
    char p1[272];
    short self_adj;
    short g1;
    void (*self_up)(void *, int);
};
struct CheatFrontEndNavigationLayout {
    char p0[76];
    Entry *highlighted;
    char p1[16];
    CheatFrontEndNavigationLayout *active;
    char p2[16];
    VTable *vt;
};
class entity;
enum EventType { UPDOWN = 25, ERROR_EVENT = 28 };
class SoundScriptManager {
public:
    int playEvent(EventType, entity * = 0, float = 0);
};
extern SoundScriptManager *sound_manager;
extern "C" void cheat_frontend_up(
    CheatFrontEndNavigationLayout *,
    int
) __asm__("OnUp__13CheatFrontEndi");
asm(".equ sound_manager,0x0046B4A0");
asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
void cheat_frontend_up(CheatFrontEndNavigationLayout *self, int c) {
    if (self->active) {
        CheatFrontEndNavigationLayout *active = self->active;
        VTable *v = active->vt;
        v->active_up((char *)active + v->active_adj, c);
        asm volatile("");
        return;
    }
    Entry *old = self->highlighted;
    VTable *v = self->vt;
    v->self_up((char *)self + v->self_adj, c);
    if (self->highlighted != old) {
        sound_manager->playEvent(UPDOWN);
        asm volatile("");
        return;
    }
    sound_manager->playEvent(ERROR_EVENT);
    asm volatile("");
}

// 0x001D18F0 OnDown__13CheatFrontEndi
struct Entry;
struct VTable {
    char p0[160];
    short active_adj;
    short g0;
    void (*active_down)(void *, int);
    char p1[272];
    short self_adj;
    short g1;
    void (*self_down)(void *, int);
};
struct CheatFrontEndNavigationLayout {
    char p0[76];
    Entry *highlighted;
    char p1[16];
    CheatFrontEndNavigationLayout *active;
    char p2[16];
    VTable *vt;
};
class entity;
enum EventType { UPDOWN = 25, ERROR_EVENT = 28 };
class SoundScriptManager {
public:
    int playEvent(EventType, entity * = 0, float = 0);
};
extern SoundScriptManager *sound_manager;
extern "C" void cheat_frontend_down(
    CheatFrontEndNavigationLayout *,
    int
) __asm__("OnDown__13CheatFrontEndi");
asm(".equ sound_manager,0x0046B4A0");
asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");
void cheat_frontend_down(CheatFrontEndNavigationLayout *self, int c) {
    if (self->active) {
        CheatFrontEndNavigationLayout *active = self->active;
        VTable *v = active->vt;
        v->active_down((char *)active + v->active_adj, c);
        asm volatile("");
        return;
    }
    Entry *old = self->highlighted;
    VTable *v = self->vt;
    v->self_down((char *)self + v->self_adj, c);
    if (self->highlighted != old) {
        sound_manager->playEvent(UPDOWN);
        asm volatile("");
        return;
    }
    sound_manager->playEvent(ERROR_EVENT);
    asm volatile("");
}

// 0x001D2340 OnUp__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd.h"
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

// 0x001D23F8 OnDown__13CheatCodeMenui
#include "KS/SRC/ks/CheatFrontEnd.h"
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

// Source implementation boundary.
// 0x001DDC80 OnCross__14EnterCheatMenui
#include "KS/SRC/ks/CheatFrontEnd.h"

void EnterCheatMenu::OnCross(int command) { Select(); }

// 0x001DDB10 __tf13CheatFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDB10() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDB10[] __asm__("__ti13CheatFrontEnd");
extern const char name_001DDB10[];
extern void *base_type_001DDB10[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13CheatFrontEnd, 0x005A2E48");
__asm__(".equ name_001DDB10, 0x004DDF88");
__asm__(".equ base_type_001DDB10, 0x004DDC48");
extern "C" void **Rtti_001DDB10() __asm__("__tf13CheatFrontEnd");
void **Rtti_001DDB10() { if (!type_001DDB10[0]) { BaseRtti_001DDB10(); __rtti_class(type_001DDB10, name_001DDB10, base_type_001DDB10, 1); } return type_001DDB10; }

// 0x001DDBD0 __tf13CheatCodeMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDBD0() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDBD0[] __asm__("__ti13CheatCodeMenu");
extern const char name_001DDBD0[];
extern void *base_type_001DDBD0[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13CheatCodeMenu, 0x005A2E58");
__asm__(".equ name_001DDBD0, 0x004DDF98");
__asm__(".equ base_type_001DDBD0, 0x004DDC48");
extern "C" void **Rtti_001DDBD0() __asm__("__tf13CheatCodeMenu");
void **Rtti_001DDBD0() { if (!type_001DDBD0[0]) { BaseRtti_001DDBD0(); __rtti_class(type_001DDBD0, name_001DDBD0, base_type_001DDBD0, 1); } return type_001DDBD0; }

// 0x001DDC28 __tf14EnterCheatMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDC28() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDC28[] __asm__("__ti14EnterCheatMenu");
extern const char name_001DDC28[];
extern void *base_type_001DDC28[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14EnterCheatMenu, 0x005A2E68");
__asm__(".equ name_001DDC28, 0x004DDFA8");
__asm__(".equ base_type_001DDC28, 0x004DDC48");
extern "C" void **Rtti_001DDC28() __asm__("__tf14EnterCheatMenu");
void **Rtti_001DDC28() { if (!type_001DDC28[0]) { BaseRtti_001DDC28(); __rtti_class(type_001DDC28, name_001DDC28, base_type_001DDC28, 1); } return type_001DDC28; }

// 0x001DDB68 Update__13CheatFrontEndf
struct active_vtable { char padding[96]; short adjustment; short reserved; void (*update)(void *,float); };
struct active_menu { char padding[116]; active_vtable *vtable; };
extern "C" void update_frontend(void*,float) __asm__("Update__8FrontEndf"); extern "C" void update_menu(void*,float) __asm__("Update__6FEMenuf");
__asm__(".equ Update__8FrontEndf,0x00157B30"); __asm__(".equ Update__6FEMenuf,0x00156DC8");
struct cheat_layout { char padding[96]; active_menu *active; };
extern "C" void update_cheat(cheat_layout *self,float dt) __asm__("Update__13CheatFrontEndf");
void update_cheat(cheat_layout *self,float dt)
{
    if(self->active){active_vtable*t=self->active->vtable;t->update((char*)self->active+t->adjustment,dt);}
    else {update_frontend((char*)self+128,dt);update_menu(self,dt);int dead;__asm__("" : "=r"(dead));}
}
