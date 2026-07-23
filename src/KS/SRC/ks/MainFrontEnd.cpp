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
