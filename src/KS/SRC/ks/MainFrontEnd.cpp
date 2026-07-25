// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001810E8)
// 0x001810E8 EndWarning__10CareerMenu
struct career_menu_vtable { char padding[0x70]; short adjustment; short padding2; void (*on_activate)(void *self); };
class CareerMenu { char padding0[0x74]; career_menu_vtable *vtable; char padding1[0x1c]; int warning_up; public: void EndWarning(); };
void CareerMenu::EndWarning() { warning_up = 0; career_menu_vtable *table = vtable; table->on_activate((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00183C58)
// 0x00183C58 Update__15MultiplayerMenuf
class FEMenu { public: void Update(float dt); };
__asm__(".equ Update__6FEMenuf, 0x00156DC8");
class MultiplayerMenu : public FEMenu { public: void Update(float dt); void UpdateDisable(); };
__asm__(".equ UpdateDisable__15MultiplayerMenu, 0x00183DC8");
void MultiplayerMenu::Update(float dt) { FEMenu::Update(dt); UpdateDisable(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017F7A8)
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

class MainFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void UpdateInScene();
};

void MainFrontEnd::UpdateInScene()
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->update_in_scene((char *)menu + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00183FE8)
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

class MultiplayerMenu {
    char padding[0x64];
    main_frontend_layout *parent;

public:
    void OnTriangle(int controller);
};

void MultiplayerMenu::OnTriangle(int controller)
{
    main_frontend_layout *frontend = parent;
    menu_vtable *table = frontend->vtable;
    table->make_active(
        (char *)frontend + table->adjustment,
        0,
        true
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00185580)
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

class FreesurfMenu {
    char padding[0x64];
    main_frontend_layout *parent;

public:
    void OnTriangle(int controller);
};

void FreesurfMenu::OnTriangle(int controller)
{
    main_frontend_layout *frontend = parent;
    menu_vtable *table = frontend->vtable;
    table->make_active(
        (char *)frontend + table->adjustment,
        0,
        true
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184618)
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
class MultiSubMenu : public FEMenu {
    char padding[0x84];
    TextString *difficulty;
public:
    void Draw();
};
void MultiSubMenu::Draw()
{
    FEMenu::Draw();
    difficulty->Draw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184D00)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00182AB8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00182AF8)
// 0x00182AF8 OnRight__11OptionsMenui
struct FEMenuEntry { int entry_num; };
class OptionsMenu { char padding[0x4c]; FEMenuEntry *highlighted; public: void ChangeSwitch(bool right); void ChangeVolume(bool right); void OnRight(int controller); };
asm(".equ ChangeSwitch__11OptionsMenub, 0x00182ED0"); asm(".equ ChangeVolume__11OptionsMenub, 0x00183598");
void OptionsMenu::OnRight(int controller)
{
    if (highlighted->entry_num < 6) { ChangeSwitch(true); KELLY_DECOMP_COMPILER_BARRIER(); }
    else { ChangeVolume(true); KELLY_DECOMP_COMPILER_BARRIER(); }
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_0017FE50)
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
class MainFrontEnd {
    char padding[0x60];
    ActiveMenu* active;
public: void OnTriangle(int c);
};
__asm__(".equ OnTriangle__6FEMenui, 0x001577F0");
extern void base_call(MainFrontEnd*, int) __asm__("OnTriangle__6FEMenui");
void MainFrontEnd::OnTriangle(int c)
{
    if(active) {
        active->OnTriangle(c);
        KELLY_DECOMP_COMPILER_BARRIER();
    } else {
        base_call(this, c);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184870)
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

class MultiSubMenu
{
    char padding[0x64];
    menu_parent *parent;

public:
    void OnTriangle(int controller);
};

void MultiSubMenu::OnTriangle(int controller)
{
    PlayEvent(sound_manager, 27, 0, 0.0f);
    menu_vtable *table = parent->vtable;
    table->make_active(
        (char *)parent + table->adjustment, 0, true
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184F18)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00180F78)
// 0x00180F78 OnTriangle__10CareerMenui
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void end_warning(void*) __asm__("EndWarning__10CareerMenu");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ EndWarning__10CareerMenu,0x001810E8");struct system_vtable{char p0[32];short adjustment;short x0;void(*make_active)(void*,int,bool,bool);};struct system{char p0[140];system_vtable*vtable;};struct career{char p0[80];system*sys;char p1[64];int warning_up;};extern "C" void triangle(career*self,int) __asm__("OnTriangle__10CareerMenui");void triangle(career*self,int){if(self->warning_up)end_warning(self);else{play(sound_manager,27,0,0.0f);system*s=self->sys;system_vtable*t=s->vtable;t->make_active((char*)s+t->adjustment,0,true,true);}int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017FAC0)
// 0x0017FAC0 OnLeft__12MainFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateHighlight__12MainFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateHighlight__12MainFrontEnd,0x0017FBB0");struct active_vtable{char p0[168];short adjustment;short x0;void(*left)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[448];short adjustment;short x0;void(*left)(void*);};struct mainfe{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void left(mainfe*self,int c) __asm__("OnLeft__12MainFrontEndi");void left(mainfe*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->left((char*)m+t->adjustment,c);}else{play(sound_manager,26,0,0.0f);main_vtable*t=self->vtable;t->left((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017FB38)
// 0x0017FB38 OnRight__12MainFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void update(void*) __asm__("UpdateHighlight__12MainFrontEnd");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ UpdateHighlight__12MainFrontEnd,0x0017FBB0");struct active_vtable{char p0[176];short adjustment;short x0;void(*right)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct main_vtable{char p0[456];short adjustment;short x0;void(*right)(void*);};struct mainfe{char p0[96];menu*active;char p1[16];main_vtable*vtable;};extern "C" void right(mainfe*self,int c) __asm__("OnRight__12MainFrontEndi");void right(mainfe*self,int c){if(self->active){menu*m=self->active;active_vtable*t=m->vtable;t->right((char*)m+t->adjustment,c);}else{play(sound_manager,26,0,0.0f);main_vtable*t=self->vtable;t->right((char*)self+t->adjustment);update(self);}int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001802F8)
// 0x001802F8 MakeActive__12MainFrontEndP6FEMenub
struct menu_vtable{char p0[424];short adjustment;short x0;void(*set_main)(void*,bool,bool);};struct FEMenu{char p0[116];menu_vtable*vtable;};struct mainfe{char p0[96];FEMenu*active;char p1[560];FEMenu*Options;};extern "C" void base_make(mainfe*,FEMenu*,bool) __asm__("MakeActive__6FEMenuP6FEMenub");__asm__(".equ MakeActive__6FEMenuP6FEMenub,0x00157600");extern "C" void make_active(mainfe*self,FEMenu*a,bool b) __asm__("MakeActive__12MainFrontEndP6FEMenub");void make_active(mainfe*self,FEMenu*a,bool b){if(!a&&self->active==self->Options){FEMenu*o=self->active;menu_vtable*t=o->vtable;t->set_main((char*)o+t->adjustment,false,false);}base_make(self,a,b);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00182078)
// 0x00182078 OnTriangle__11OptionsMenui
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void base_triangle(void*,int)__asm__("OnTriangle__6FEMenui");extern "C" int play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void rumble(void*,bool,int)__asm__("RumbleOn__11OptionsMenubi");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ RumbleOn__11OptionsMenubi,0x00182E20");extern "C" void triangle(void*self,int c)__asm__("OnTriangle__11OptionsMenui");void triangle(void*self,int c){base_triangle(self,c);play_event(sound_manager,27,0,0.0f);rumble(self,false,0);rumble(self,false,1);rumble(self,false,2);rumble(self,false,3);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00180C68)
// 0x00180C68 OnUp__10CareerMenui
struct ActiveVtable{char pad[152];short adjust;short z;void(*on_up)(void*,int);};struct Active{char pad[116];ActiveVtable*vtable;};struct MenuVtable{char pad[336];short adjust;short z;void(*previous)(void*);};struct CareerMenu{char pad[96];Active*active;char pad2[16];MenuVtable*vtable;};struct SoundScriptManager{};extern SoundScriptManager*g_sound;extern "C" void play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");__asm__(".equ g_sound,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void on_up(CareerMenu*self,int c)__asm__("OnUp__10CareerMenui");void on_up(CareerMenu*self,int c){play_event(g_sound,26,0,0.0f);if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_up((char*)a+v->adjust,c);}else{MenuVtable*v=self->vtable;v->previous((char*)self+v->adjust);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00180CE8)
// 0x00180CE8 OnDown__10CareerMenui
struct ActiveVtable{char pad[160];short adjust;short z;void(*on_down)(void*,int);};struct Active{char pad[116];ActiveVtable*vtable;};struct MenuVtable{char pad[328];short adjust;short z;void(*next)(void*);};struct CareerMenu{char pad[96];Active*active;char pad2[16];MenuVtable*vtable;};struct SoundScriptManager{};extern SoundScriptManager*g_sound;extern "C" void play_event(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");__asm__(".equ g_sound,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void on_down(CareerMenu*self,int c)__asm__("OnDown__10CareerMenui");void on_down(CareerMenu*self,int c){play_event(g_sound,26,0,0.0f);if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_down((char*)a+v->adjust,c);}else{MenuVtable*v=self->vtable;v->next((char*)self+v->adjust);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184E80)
// 0x00184E80 Select__19MultiControllerMenui
struct entity;struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");struct FrontEndManager{char p[0x15670];int tmp_num_players;};extern FrontEndManager frontendmanager;asm(".equ frontendmanager,0x003E7728");struct SysVtable{char p[32];short active_adj;short z;void(*make_active)(void*,int,bool,bool);};struct System{char p[140];SysVtable*vtable;};class MultiControllerMenu{char p[80];System*system;public:void Select(int) __asm__("Select__19MultiControllerMenui");};void MultiControllerMenu::Select(int entry_index){playEvent(sound_manager,24,0,0.0f);if(entry_index==0)frontendmanager.tmp_num_players=1;else frontendmanager.tmp_num_players=2;SysVtable*v=system->vtable;v->make_active((char*)system+v->active_adj,4,true,true);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00183C88)
// 0x00183C88 OnUp__15MultiplayerMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiplayerMenu{char raw[120];public:void OnUp(int);};void MultiplayerMenu::OnUp(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00183D28)
// 0x00183D28 OnDown__15MultiplayerMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiplayerMenu{char raw[120];public:void OnDown(int);};void MultiplayerMenu::OnDown(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184658)
// 0x00184658 OnUp__12MultiSubMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiSubMenu{char raw[120];public:void OnUp(int);};void MultiSubMenu::OnUp(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001846F8)
// 0x001846F8 OnDown__12MultiSubMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiSubMenu{char raw[120];public:void OnDown(int);};void MultiSubMenu::OnDown(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184D40)
// 0x00184D40 OnUp__19MultiControllerMenui
struct Entry;struct VTable{char p0[152];short active_adj;short g0;void(*active_call)(void*,int);char p1[176];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiControllerMenu{char raw[120];public:void OnUp(int);};void MultiControllerMenu::OnUp(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00184DE0)
// 0x00184DE0 OnDown__19MultiControllerMenui
struct Entry;struct VTable{char p0[160];short active_adj;short g0;void(*active_call)(void*,int);char p1[160];short self_adj;short g1;void(*self_call)(void*,int);};struct MenuLayout{char p0[76];Entry*highlighted;char p1[16];MenuLayout*active;char p2[16];VTable*vt;};class entity;enum EventType{UPDOWN=25,ERROR_EVENT=28};class SoundScriptManager{public:int playEvent(EventType,entity* = 0,float=0);};extern SoundScriptManager*sound_manager;asm(".equ sound_manager,0x0046B4A0");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");class MultiControllerMenu{char raw[120];public:void OnDown(int);};void MultiControllerMenu::OnDown(int c){MenuLayout*self=(MenuLayout*)this;Entry*old=self->highlighted;if(self->active){MenuLayout*a=self->active;VTable*v=a->vt;v->active_call((char*)a+v->active_adj,c);}else{VTable*v=self->vt;v->self_call((char*)self+v->self_adj,c);}if(self->highlighted==old){sound_manager->playEvent(ERROR_EVENT);asm volatile("");return;}sound_manager->playEvent(UPDOWN);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001854D8)
// 0x001854D8 Select__12FreesurfMenui
struct Manager{char padding[0x1566c];int tmp_game_mode;};struct Sys{char padding[120];Manager*manager;};struct menu_vtable{char padding[32];short adjustment;short reserved;void(*make_active)(void*,int,int,int);};struct MenuSystem{char padding[140];menu_vtable*vtable;};class FreesurfMenu{char padding0[80];MenuSystem*system;char padding1[48];Sys*sys;public:void Select(int);};void FreesurfMenu::Select(int entry_index){switch(entry_index){case 0:sys->manager->tmp_game_mode=1;break;case 1:sys->manager->tmp_game_mode=2;break;case 2:sys->manager->tmp_game_mode=3;break;default:break;}menu_vtable*v=system->vtable;v->make_active((char*)system+v->adjustment,4,1,1);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00182E20)
// 0x00182E20 RumbleOn__11OptionsMenubi
struct device_vtable{char pad[112];short adjustment;short zero;void(*vibrate)(void*,int,int,int,int);};struct input_device{char pad[4];device_vtable*vtable;};struct input_mgr{char pad[40];input_device*joy[8];};extern input_mgr*g_input_mgr;asm(".equ g_input_mgr,0x0046B7B0");class OptionsMenu{char pad[584];float rumbleTimer[4];public:void RumbleOn(bool,int);};inline void vibrate(input_device*d,int a,int b,int c,int e){device_vtable*v=d->vtable;v->vibrate((char*)d+v->adjustment,a,b,c,e);}void OptionsMenu::RumbleOn(bool on,int controller){input_mgr*inputmgr=g_input_mgr;input_device*joyjoy=inputmgr->joy[controller];if(on){rumbleTimer[controller]=0.0f;if(joyjoy)vibrate(joyjoy,0,255,1,0);}else if(joyjoy){vibrate(joyjoy,0,0,0,0);rumbleTimer[controller]=-1.0f;}}
#endif
