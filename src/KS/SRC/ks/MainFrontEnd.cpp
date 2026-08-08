// Matching decompilation blocks selected by generated build shims.

// 0x00180EB0 Draw__10CareerMenu (warning-state rendering)
#include "KS/SRC/ks/MainFrontEnd.h"

void CareerMenu::Draw()
{
    if (warning_up)
    {
        warning->Draw();
        entry[SaveEntry]->Draw();
        entry[OKEntry]->Draw();
        entry[CancelEntry]->Draw();
    }
    else
    {
        for (int index = 0; index < SaveEntry; ++index)
            entry[index]->Draw();
    }
}

// 0x00183F08 Select__15MultiplayerMenui
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/MainFrontEnd.h"
#include "KS/SRC/ks/mode.h"
struct FrontEndManagerGameModeLayout {
    char padding[0x1566c];
    game_mode_t tmp_game_mode;
};

void MultiplayerMenu::Select(int entry_index)
{
    switch (entry_index)
    {
    case MultiPushEntry:
        ((FrontEndManagerGameModeLayout *)sys->manager)->tmp_game_mode =
            GAME_MODE_PUSH;
        break;
    case MultiHeadToHeadEntry:
        ((FrontEndManagerGameModeLayout *)sys->manager)->tmp_game_mode =
            GAME_MODE_HEAD_TO_HEAD;
        break;
    case MultiTimeAttackEntry:
        ((FrontEndManagerGameModeLayout *)sys->manager)->tmp_game_mode =
            GAME_MODE_TIME_ATTACK;
        break;
    default:
        break;
    }

    if (entry_index == MultiHeadToHeadEntry)
        system->MakeActive(GraphicalMenuSystem::SurferMenu);
    else
        parent->MakeActive(((MainFrontEnd *)parent)->multi_sub);
}

// 0x00183B70 OnActivate__15MultiplayerMenu
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/MainFrontEnd.h"
#include "KS/SRC/ks/mode.h"
struct FrontEndManagerGameModeLayout {
    char padding[0x1566c];
    game_mode_t tmp_game_mode;
};

__asm__(".equ UpdateDisable__15MultiplayerMenu, 0x00183DC8");
__asm__(".equ OnActivate__6FEMenu, 0x00157728");

void MultiplayerMenu::OnActivate()
{
    UpdateDisable();
    FEMenu::OnActivate();
    int active_entry = -1;

    switch (
        ((FrontEndManagerGameModeLayout *)system->manager)->tmp_game_mode
    )
    {
    case GAME_MODE_TIME_ATTACK:
        active_entry = MultiTimeAttackEntry;
        break;
    case GAME_MODE_HEAD_TO_HEAD:
        active_entry = MultiHeadToHeadEntry;
        break;
    case GAME_MODE_PUSH:
        active_entry = MultiPushEntry;
        break;
    default:
        break;
    }

    if (active_entry != -1 &&
        !entry[active_entry]->GetDisable())
        setHigh(entry[active_entry]);
}

// 0x001853F8 OnActivate__12FreesurfMenu
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/MainFrontEnd.h"
#include "KS/SRC/ks/mode.h"
struct FrontEndManagerGameModeLayout {
    char padding[0x1566c];
    game_mode_t tmp_game_mode;
};

__asm__(".equ OnActivate__6FEMenu, 0x00157728");

void FreesurfMenu::OnActivate()
{
    FEMenu::OnActivate();
    int act = -1;

    switch (
        ((FrontEndManagerGameModeLayout *)system->manager)->tmp_game_mode
    )
    {
    case GAME_MODE_FREESURF_INFINITE:
        act = FreeRegularEntry;
        break;
    case GAME_MODE_FREESURF_HIGHSCORE:
        act = FreeHighScoreEntry;
        break;
    case GAME_MODE_FREESURF_ICON:
        act = FreeIconEntry;
        break;
    default:
        break;
    }
    if (act != -1 && !entry[act]->GetDisable())
        setHigh(entry[act]);
}

// 0x001810E8 EndWarning__10CareerMenu
#include "KS/SRC/ks/MainFrontEnd.h"

void CareerMenu::EndWarning() {
    warning_up = false;
    OnActivate();
}

// 0x00183C58 Update__15MultiplayerMenuf
#include "KS/SRC/ks/MainFrontEnd.h"

__asm__(".equ Update__6FEMenuf, 0x00156DC8");
void update_disable(MultiplayerMenu *menu)
    __asm__("UpdateDisable__15MultiplayerMenu");
__asm__(".equ UpdateDisable__15MultiplayerMenu, 0x00183DC8");

void MultiplayerMenu::Update(float dt) {
    FEMenu::Update(dt);
    void (*update)(MultiplayerMenu *) = update_disable;
    update(this);
}

// 0x0017F7A8 UpdateInScene__12MainFrontEnd
struct menu_vtable {
    char padding[0x58];
    short adjustment;
    short padding2;
    void (*update_in_scene)(void *self);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct main_update_scene_layout {
    char padding[0x60];
    menu_layout *active;
};

extern "C" void update_main_scene(main_update_scene_layout *self)
    __asm__("UpdateInScene__12MainFrontEnd");
void update_main_scene(main_update_scene_layout *self)
{
    menu_layout *menu = self->active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->update_in_scene((char *)menu + table->adjustment);
    }
}

// 0x00183FE8 OnTriangle__15MultiplayerMenui
struct menu_vtable {
    char padding[0x110];
    short adjustment;
    short padding2;
    void (*make_active)(void *self, void *menu, bool notify);
};

struct main_frontend_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct multiplayer_triangle_layout {
    char padding[0x64];
    main_frontend_layout *parent;
};

extern "C" void multiplayer_triangle(
    multiplayer_triangle_layout *self,
    int controller
) __asm__("OnTriangle__15MultiplayerMenui");
void multiplayer_triangle(
    multiplayer_triangle_layout *self,
    int controller
)
{
    main_frontend_layout *frontend = self->parent;
    menu_vtable *table = frontend->vtable;
    table->make_active(
        (char *)frontend + table->adjustment,
        0,
        true
    );
}

// 0x00185580 OnTriangle__12FreesurfMenui
struct menu_vtable {
    char padding[0x110];
    short adjustment;
    short padding2;
    void (*make_active)(void *self, void *menu, bool notify);
};

struct main_frontend_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct freesurf_triangle_layout {
    char padding[0x64];
    main_frontend_layout *parent;
};

extern "C" void freesurf_triangle(
    freesurf_triangle_layout *self,
    int controller
) __asm__("OnTriangle__12FreesurfMenui");
void freesurf_triangle(
    freesurf_triangle_layout *self,
    int controller
)
{
    main_frontend_layout *frontend = self->parent;
    menu_vtable *table = frontend->vtable;
    table->make_active(
        (char *)frontend + table->adjustment,
        0,
        true
    );
}

// 0x00184618 Draw__12MultiSubMenu
asm(".equ Draw__6FEMenu, 0x00156C88");
class FEMenu {
public:
    void Draw();
};
class TextString {
    char padding[0x4C];
public:
    virtual ~TextString();
    virtual void Update(float time_inc);
    virtual void Draw();
};
struct multi_sub_draw_layout {
    char padding[0x88];
    TextString *difficulty;
};
extern "C" void draw_multi_sub(multi_sub_draw_layout *self)
    __asm__("Draw__12MultiSubMenu");
void draw_multi_sub(multi_sub_draw_layout *self)
{
    extern void draw_menu(void *) __asm__("Draw__6FEMenu");
    draw_menu(self);
    self->difficulty->Draw();
}

// 0x00184D00 Draw__19MultiControllerMenu
asm(".equ Draw__6FEMenu, 0x00156C88");
class FEMenu { public: void Draw(); };
class TextString {
    char padding[0x4C];
public:
    virtual ~TextString();
    virtual void Update(float time_inc);
    virtual void Draw();
};
class MultiControllerMenu : public FEMenu {
    char padding[0x80];
    TextString *title;
public:
    void Draw();
};
void MultiControllerMenu::Draw()
{
    FEMenu::Draw();
    title->Draw();
}

// 0x00182AB8 OnLeft__11OptionsMenui
struct FEMenuEntry { int entry_num; };
class OptionsMenu { char padding[0x4c]; FEMenuEntry *highlighted; public: void ChangeSwitch(bool right); void ChangeVolume(bool right); void OnLeft(int controller); };
asm(".equ ChangeSwitch__11OptionsMenub, 0x00182ED0"); asm(".equ ChangeVolume__11OptionsMenub, 0x00183598");
void OptionsMenu::OnLeft(int controller)
{
    if (highlighted->entry_num < 6)
        { ChangeSwitch(false); KELLY_DECOMP_COMPILER_BARRIER(); }
    else
        { ChangeVolume(false); KELLY_DECOMP_COMPILER_BARRIER(); }
}

// 0x00182AF8 OnRight__11OptionsMenui
struct FEMenuEntry { int entry_num; };
class OptionsMenu { char padding[0x4c]; FEMenuEntry *highlighted; public: void ChangeSwitch(bool right); void ChangeVolume(bool right); void OnRight(int controller); };
asm(".equ ChangeSwitch__11OptionsMenub, 0x00182ED0"); asm(".equ ChangeVolume__11OptionsMenub, 0x00183598");
void OptionsMenu::OnRight(int controller)
{
    if (highlighted->entry_num < 6) { ChangeSwitch(true); KELLY_DECOMP_COMPILER_BARRIER(); }
    else { ChangeVolume(true); KELLY_DECOMP_COMPILER_BARRIER(); }
}


// 0x0017FE50 OnTriangle__12MainFrontEndi
class ActiveMenu {
    char padding[0x74];
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void OnTriangle(int);
};
struct main_triangle_layout {
    char padding[0x60];
    ActiveMenu* active;
};
__asm__(".equ OnTriangle__6FEMenui, 0x001577F0");
extern void base_call(void *, int) __asm__("OnTriangle__6FEMenui");
extern "C" void main_triangle(main_triangle_layout *self, int c)
    __asm__("OnTriangle__12MainFrontEndi");
void main_triangle(main_triangle_layout *self, int c)
{
    if(self->active) {
        self->active->OnTriangle(c);
        KELLY_DECOMP_COMPILER_BARRIER();
    } else {
        base_call(self, c);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x00184870 OnTriangle__12MultiSubMenui
class entity;

class SoundScriptManager
{
};

extern SoundScriptManager *sound_manager;
extern "C" void PlayEvent(
    SoundScriptManager *manager, int event,
    entity *source, float volume
) __asm__(
    "playEvent__18SoundScriptManager9EventTypeP6entityf"
);
__asm__(".equ sound_manager, 0x0046B4A0");
__asm__(
    ".equ playEvent__18SoundScriptManager9EventTypeP6entityf, "
    "0x0031C380"
);

struct menu_vtable
{
    char padding[0x110];
    short adjustment;
    short reserved;
    void (*make_active)(void *self, void *menu, bool play_sound);
};

struct menu_parent
{
    char padding[0x74];
    menu_vtable *vtable;
};

struct multi_sub_triangle_layout {
    char padding[0x64];
    menu_parent *parent;
};

extern "C" void multi_sub_triangle(
    multi_sub_triangle_layout *self,
    int controller
) __asm__("OnTriangle__12MultiSubMenui");
void multi_sub_triangle(
    multi_sub_triangle_layout *self,
    int controller
)
{
    PlayEvent(sound_manager, 27, 0, 0.0f);
    menu_vtable *table = self->parent->vtable;
    table->make_active(
        (char *)self->parent + table->adjustment, 0, true
    );
}

// 0x00184F18 OnTriangle__19MultiControllerMenui
class entity;
struct menu_vtable
{
    char padding[0x110];
    short adjustment;
    short reserved;
    void (*make_active)(void *self, void *menu, bool play_sound);
};

struct menu_parent
{
    char padding0[0x74];
    menu_vtable *vtable;
    char padding1[0x22c];
    void *previous_menu;
};

class SoundScriptManager {};
extern SoundScriptManager *sound_manager;
extern "C" void PlayEvent(
    SoundScriptManager *manager, int event,
    entity *source, float volume
) __asm__(
    "playEvent__18SoundScriptManager9EventTypeP6entityf"
);

__asm__(".equ sound_manager, 0x0046B4A0");
__asm__(
    ".equ playEvent__18SoundScriptManager9EventTypeP6entityf, "
    "0x0031C380"
);

class MultiControllerMenu
{
    char padding[0x64];
    menu_parent *parent;

public:
    void OnTriangle(int controller);
};

void MultiControllerMenu::OnTriangle(int controller)
{
    PlayEvent(sound_manager, 27, 0, 0.0f);
    menu_vtable *table = parent->vtable;
    table->make_active(
        (char *)parent + table->adjustment,
        parent->previous_menu,
        true
    );
}

// 0x00180F78 OnTriangle__10CareerMenui
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void end_warning(void*) __asm__("EndWarning__10CareerMenu");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ EndWarning__10CareerMenu,0x001810E8");struct system_vtable{char p0[32];short adjustment;short x0;void(*make_active)(void*,int,bool,bool);};struct system{char p0[140];system_vtable*vtable;};struct career{char p0[80];system*sys;char p1[64];int warning_up;};extern "C" void triangle(career*self,int) __asm__("OnTriangle__10CareerMenui");void triangle(career*self,int){if(self->warning_up)end_warning(self);else{play(sound_manager,27,0,0.0f);system*s=self->sys;system_vtable*t=s->vtable;t->make_active((char*)s+t->adjustment,0,true,true);}int dead;__asm__("" : "=r"(dead));}

// 0x0017FAC0 OnLeft__12MainFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateHighlight__12MainFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateHighlight__12MainFrontEnd,0x0017FBB0");struct active_vtable{char p0[168];short adjustment;short x0;void(*left)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[448];short adjustment;short x0;void(*left)(void*);};struct mainfe{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void left(mainfe*self,int c) __asm__("OnLeft__12MainFrontEndi");void left(mainfe*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->left((char*)m+t->adjustment,c);}else{play(sound_manager,26,0,0.0f);main_vtable*t=self->vtable;t->left((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}

// 0x0017FB38 OnRight__12MainFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateHighlight__12MainFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateHighlight__12MainFrontEnd,0x0017FBB0");struct active_vtable{char p0[176];short adjustment;short x0;void(*right)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[456];short adjustment;short x0;void(*right)(void*);};struct mainfe{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void right(mainfe*self,int c) __asm__("OnRight__12MainFrontEndi");void right(mainfe*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->right((char*)m+t->adjustment,c);}else{play(sound_manager,26,0,0.0f);main_vtable*t=self->vtable;t->right((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}

// 0x001802F8 MakeActive__12MainFrontEndP6FEMenub
struct menu_vtable{char p0[424];short adjustment;short x0;void(*set_main)(void*,bool,bool);};struct FEMenu{char p0[116];menu_vtable*vtable;};struct mainfe{char p0[96];FEMenu*active;char p1[560];FEMenu*Options;};extern "C" void base_make(mainfe*,FEMenu*,bool) __asm__("MakeActive__6FEMenuP6FEMenub");__asm__(".equ MakeActive__6FEMenuP6FEMenub,0x00157600");extern "C" void make_active(mainfe*self,FEMenu*a,bool b) __asm__("MakeActive__12MainFrontEndP6FEMenub");void make_active(mainfe*self,FEMenu*a,bool b){if(!a&&self->active==self->Options){FEMenu*o=self->active;menu_vtable*t=o->vtable;t->set_main((char*)o+t->adjustment,false,false);}base_make(self,a,b);int dead;__asm__("" : "=r"(dead));}

// 0x00182078 OnTriangle__11OptionsMenui
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void base_triangle(void*,int)__asm__("OnTriangle__6FEMenui");extern "C" int play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void rumble(void*,bool,int)__asm__("RumbleOn__11OptionsMenubi");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ RumbleOn__11OptionsMenubi,0x00182E20");extern "C" void triangle(void*self,int c)__asm__("OnTriangle__11OptionsMenui");void triangle(void*self,int c){base_triangle(self,c);play_event(sound_manager,27,0,0.0f);rumble(self,false,0);rumble(self,false,1);rumble(self,false,2);rumble(self,false,3);KELLY_DECOMP_COMPILER_BARRIER();}

// 0x00180C68 OnUp__10CareerMenui
struct ActiveVtable{char pad[152];short adjust;short z;void(*on_up)(void*,int);};struct Active{char pad[116];ActiveVtable*vtable;};struct MenuVtable{char pad[336];short adjust;short z;void(*previous)(void*);};struct CareerMenuLayout{char pad[96];Active*active;char pad2[16];MenuVtable*vtable;};struct SoundScriptManager{};extern SoundScriptManager*g_sound;extern "C" void play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");__asm__(".equ g_sound,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void on_up(CareerMenuLayout*self,int c)__asm__("OnUp__10CareerMenui");void on_up(CareerMenuLayout*self,int c){play_event(g_sound,26,0,0.0f);if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_up((char*)a+v->adjust,c);}else{MenuVtable*v=self->vtable;v->previous((char*)self+v->adjust);}}

// 0x00180CE8 OnDown__10CareerMenui
struct ActiveVtable{char pad[160];short adjust;short z;void(*on_down)(void*,int);};struct Active{char pad[116];ActiveVtable*vtable;};struct MenuVtable{char pad[328];short adjust;short z;void(*next)(void*);};struct CareerMenuLayout{char pad[96];Active*active;char pad2[16];MenuVtable*vtable;};struct SoundScriptManager{};extern SoundScriptManager*g_sound;extern "C" void play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");__asm__(".equ g_sound,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void on_down(CareerMenuLayout*self,int c)__asm__("OnDown__10CareerMenui");void on_down(CareerMenuLayout*self,int c){play_event(g_sound,26,0,0.0f);if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_down((char*)a+v->adjust,c);}else{MenuVtable*v=self->vtable;v->next((char*)self+v->adjust);}}

// 0x00184E80 Select__19MultiControllerMenui
struct entity;struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");struct FrontEndManager{char p[0x15670];int tmp_num_players;};extern FrontEndManager frontendmanager;asm(".equ frontendmanager,0x003E7728");struct SysVtable{char p[32];short active_adj;short z;void(*make_active)(void*,int,bool,bool);};struct System{char p[140];SysVtable*vtable;};class MultiControllerMenu{char p[80];System*system;public:void Select(int) __asm__("Select__19MultiControllerMenui");};void MultiControllerMenu::Select(int entry_index){playEvent(sound_manager,24,0,0.0f);if(entry_index==0)frontendmanager.tmp_num_players=1;else frontendmanager.tmp_num_players=2;SysVtable*v=system->vtable;v->make_active((char*)system+v->active_adj,4,true,true);}

// 0x00183C88 OnUp__15MultiplayerMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void multiplayer_up(MenuLayout*self,int c)__asm__("OnUp__15MultiplayerMenui");void multiplayer_up(MenuLayout*self,int c){Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x00183D28 OnDown__15MultiplayerMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void multiplayer_down(MenuLayout*self,int c)__asm__("OnDown__15MultiplayerMenui");void multiplayer_down(MenuLayout*self,int c){Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x00184658 OnUp__12MultiSubMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void multi_sub_up(MenuLayout*self,int c)__asm__("OnUp__12MultiSubMenui");void multi_sub_up(MenuLayout*self,int c){Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x001846F8 OnDown__12MultiSubMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void multi_sub_down(MenuLayout*self,int c)__asm__("OnDown__12MultiSubMenui");void multi_sub_down(MenuLayout*self,int c){Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x00184D40 OnUp__19MultiControllerMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiControllerMenu{char raw[120];public:void OnUp(int);};void MultiControllerMenu::OnUp(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x00184DE0 OnDown__19MultiControllerMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiControllerMenu{char raw[120];public:void OnDown(int);};void MultiControllerMenu::OnDown(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}

// 0x001854D8 Select__12FreesurfMenui
struct Manager{char padding[0x1566c];int tmp_game_mode;};struct Sys{char padding[120];Manager*manager;};struct menu_vtable{char padding[32];short adjustment;short reserved;void(*make_active)(void*,int,int,int);};struct MenuSystem{char padding[140];menu_vtable*vtable;};struct FreesurfMenuLayout{char padding0[80];MenuSystem*system;char padding1[48];Sys*sys;};extern "C" void select_freesurf(FreesurfMenuLayout*self,int entry_index)__asm__("Select__12FreesurfMenui");void select_freesurf(FreesurfMenuLayout*self,int entry_index){switch(entry_index){case 0:self->sys->manager->tmp_game_mode=1;break;case 1:self->sys->manager->tmp_game_mode=2;break;case 2:self->sys->manager->tmp_game_mode=3;break;default:break;}menu_vtable*v=self->system->vtable;v->make_active((char*)self->system+v->adjustment,4,1,1);}

// 0x00182E20 RumbleOn__11OptionsMenubi
struct device_vtable{char pad[112];short adjustment;short zero;void(*vibrate)(void*,int,int,int,int);};struct input_device{char pad[4];device_vtable*vtable;};struct input_mgr{char pad[40];input_device*joy[8];};extern input_mgr*g_input_mgr;asm(".equ g_input_mgr,0x0046B7B0");class OptionsMenu{char pad[584];float rumbleTimer[4];public:void RumbleOn(bool,int);};inline void vibrate(input_device*d,int a,int b,int c,int e){device_vtable*v=d->vtable;v->vibrate((char*)d+v->adjustment,a,b,c,e);}void OptionsMenu::RumbleOn(bool on,int controller){input_mgr*inputmgr=g_input_mgr;input_device*joyjoy=inputmgr->joy[controller];if(on){rumbleTimer[controller]=0.0f;if(joyjoy)vibrate(joyjoy,0,255,1,0);}else if(joyjoy){vibrate(joyjoy,0,0,0,0);rumbleTimer[controller]=-1.0f;}}

// 0x0017FE98 OnCross__12MainFrontEndi
#include "KS/SRC/ks/MainFrontEnd.h"
#include "decomp_annotations.h"

void MainFrontEnd::OnCross(int c)
{
	input_mgr::inst()->SetDefaultController(c);
	if(active)
	{
		active->OnCross(c);
		return;
	}
	if (highlighted->GetDisable() == false)
		SoundScriptManager::inst()->playEvent(SS_FE_ONX);
	else
		SoundScriptManager::inst()->playEvent(SS_FE_ERROR);
	FEGraphicalMenu::OnCross(c);
	KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x0017F6D0 Update__12MainFrontEndf
#include "KS/SRC/ks/MainFrontEnd.h"

__asm__(".equ Update__8FrontEndf, 0x00157B30");
__asm__(".equ Update__6FEMenuf, 0x00156DC8");

void MainFrontEnd::Update(time_value_t time_inc)
{
    if(active) active->Update(time_inc);
    else
    {
        FrontEnd::Update(time_inc);
        FEMenu::Update(time_inc);
        switch(highlighted->entry_num)
        {
        case MainFreeEntry: Freesurf->Update(time_inc); break;
        case MainCareerEntry: career_menu->Update(time_inc); break;
        case MainMultiEntry: Multi->Update(time_inc); break;
        }
    }
}

// Source implementation boundary.
// 0x001DC668 Select__11OptionsMenu
#include "KS/SRC/ks/MainFrontEnd.h"

void OptionsMenu::Select() {
}

// 0x001DC670 GetPointer__11OptionsMenuPCc
#include "KS/SRC/ks/MainFrontEnd.h"

PanelQuad *OptionsMenu::GetPointer(const char *name) { return panel.GetPointer(name); }

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

// 0x001DC5C8 _$_10CareerMenu
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_6FEMenu");
extern const char derived_vtable[];
__asm__(".equ _$_6FEMenu,0x00156580");
__asm__(".equ derived_vtable,0x004DAC98");
struct menu_layout { char padding[116]; const void *vtable; char padding2[24]; TextString *text; };
extern "C" void destroy_menu(menu_layout *self, int deleting) __asm__("_$_10CareerMenu");
void destroy_menu(menu_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *text = self->text;
    if (text) {
        text_vtable *table = text->vtable;
        table->destroy((char *)text + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}

// 0x001DC7D0 _$_12MultiSubMenu
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_6FEMenu");
extern const char derived_vtable[];
__asm__(".equ _$_6FEMenu,0x00156580");
__asm__(".equ derived_vtable,0x004DA7B0");
struct menu_layout { char padding[116]; const void *vtable; char padding2[16]; TextString *text; };
extern "C" void destroy_menu(menu_layout *self, int deleting) __asm__("_$_12MultiSubMenu");
void destroy_menu(menu_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *text = self->text;
    if (text) {
        text_vtable *table = text->vtable;
        table->destroy((char *)text + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}

// 0x001DC8E0 _$_19MultiControllerMenu
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_6FEMenu");
extern const char derived_vtable[];
__asm__(".equ _$_6FEMenu,0x00156580");
__asm__(".equ derived_vtable,0x004DA640");
struct menu_layout { char padding[116]; const void *vtable; char padding2[12]; TextString *text; };
extern "C" void destroy_menu(menu_layout *self, int deleting) __asm__("_$_19MultiControllerMenu");
void destroy_menu(menu_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *text = self->text;
    if (text) {
        text_vtable *table = text->vtable;
        table->destroy((char *)text + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}
