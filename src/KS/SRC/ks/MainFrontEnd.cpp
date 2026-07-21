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
