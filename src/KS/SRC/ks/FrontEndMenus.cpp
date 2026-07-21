// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001A5838) || \
    defined(KELLY_DECOMP_FUNCTION_001A5F90) || \
    defined(KELLY_DECOMP_FUNCTION_001A85A0) || \
    defined(KELLY_DECOMP_FUNCTION_001B4398) || \
    defined(KELLY_DECOMP_FUNCTION_001B4A58)
#include "KS/SRC/ks/FrontEndMenus_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5838)
// 0x001A5838 OnButtonRelease__14PauseMenuClassii
void PauseMenuClass::OnButtonRelease(int controller, int button)
{
    if (button == FEMENUCMD_CROSS && highlighted->entry_num == Continue)
        sys->endDraw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AA2E8)
// 0x001AA2E8 Select__14SoundMenuClassi
class SoundMenuClass {
public:
    void Select(int entry_index);
};

void SoundMenuClass::Select(int entry_index) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001ACBF0)
// 0x001ACBF0 Select__14TrickMenuClassi
class TrickMenuClass {
public:
    void Select(int controller);
};

void TrickMenuClass::Select(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001ACBF8)
// 0x001ACBF8 OnCross__14TrickMenuClassi
class TrickMenuClass {
public:
    void OnCross(int controller);
};

void TrickMenuClass::OnCross(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0310)
// 0x001B0310 OnCircle__17PlaylistMenuClassi
class PlaylistMenuClass {
public:
    void OnCircle(int controller);
};

void PlaylistMenuClass::OnCircle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0730)
// 0x001B0730 OnL2__15ReplayMenuClassi
class ReplayMenuClass {
public:
    void OnL2(int controller);
};

void ReplayMenuClass::OnL2(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0A20)
// 0x001B0A20 OnCircle__15ReplayMenuClassi
class ReplayMenuClass {
public:
    void OnCircle(int controller);
};

void ReplayMenuClass::OnCircle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C08)
// 0x001B1C08 OnUp__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnUp(int controller);
};

void GoalsMenuClass::OnUp(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C10)
// 0x001B1C10 OnDown__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnDown(int controller);
};

void GoalsMenuClass::OnDown(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C18)
// 0x001B1C18 OnCross__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnCross(int controller);
};

void GoalsMenuClass::OnCross(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4BD8)
// 0x001B4BD8 IsDebugMenuDisplayed__Fv
struct MenuSystem { char padding[0x470]; bool active; };
extern MenuSystem* menus;
__asm__(".equ menus, 0x00424EE8");
bool IsDebugMenuDisplayed() { return menus->active != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5880)
// 0x001A5880 OnStart__14PauseMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class PauseMenuClass : public FEMenu { public: void OnStart(int command); };
void PauseMenuClass::OnStart(int command) { FEMenu::OnStart(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5F90)
// 0x001A5F90 OnButtonRelease__24TimeAttackPauseMenuClassii
void TimeAttackPauseMenuClass::OnButtonRelease(int c, int b)
{
    if (b == FEMENUCMD_CROSS && highlighted->entry_num == Continue)
        sys->endDraw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5FD8)
// 0x001A5FD8 OnStart__24TimeAttackPauseMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class TimeAttackPauseMenuClass : public FEMenu { public: void OnStart(int command); };
void TimeAttackPauseMenuClass::OnStart(int command) { FEMenu::OnStart(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A6780)
// 0x001A6780 OnStart__22TutorialPauseMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class TutorialPauseMenuClass : public FEMenu { public: void OnStart(int command); };
void TutorialPauseMenuClass::OnStart(int command) { FEMenu::OnStart(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A85E8)
// 0x001A85E8 OnStart__16HeatMidMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class HeatMidMenuClass : public FEMenu { public: void OnStart(int command); };
void HeatMidMenuClass::OnStart(int command) { FEMenu::OnStart(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AB160)
// 0x001AB160 Draw__15CameraMenuClass
class FEMenu { public: void Draw(); };
__asm__(".equ Draw__6FEMenu, 0x00156C88");
class CameraMenuClass : public FEMenu { public: void Draw(); };
void CameraMenuClass::Draw() { FEMenu::Draw(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AAA78)
// 0x001AAA78 OnLeft__14SoundMenuClassi
struct FEMenuEntryLayout { int entry_num; };
class SoundMenuClass { char padding[0x4c]; FEMenuEntryLayout *highlighted; public: void Change(int entry, bool increase); void OnLeft(int command); };
__asm__(".equ Change__14SoundMenuClassib, 0x001AA430");
void SoundMenuClass::OnLeft(int command) { Change(highlighted->entry_num, false); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AAAA0)
// 0x001AAAA0 OnRight__14SoundMenuClassi
struct FEMenuEntryLayout { int entry_num; };
class SoundMenuClass { char padding[0x4c]; FEMenuEntryLayout *highlighted; public: void Change(int entry, bool increase); void OnRight(int command); };
__asm__(".equ Change__14SoundMenuClassib, 0x001AA430");
void SoundMenuClass::OnRight(int command) { Change(highlighted->entry_num, true); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A8978)
// 0x001A8978 OnActivate__16HeatEndMenuClass
class IGOFrontEnd { public: void ShowMenuBackground(bool visible); };
__asm__(".equ ShowMenuBackground__11IGOFrontEndb, 0x0017CED0");
struct FEManagerLayout { IGOFrontEnd *IGO; };
struct PauseMenuSystemLayout { char padding[0x78]; FEManagerLayout *manager; };
class HeatEndMenuClass { char padding[0x50]; PauseMenuSystemLayout *system; public: void OnActivate(); };
void HeatEndMenuClass::OnActivate() { system->manager->IGO->ShowMenuBackground(true); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A8FF8)
// 0x001A8FF8 OnActivate__16CompEndMenuClass
class IGOFrontEnd { public: void ShowMenuBackground(bool visible); };
__asm__(".equ ShowMenuBackground__11IGOFrontEndb, 0x0017CED0");
struct FEManagerLayout { IGOFrontEnd *IGO; };
struct PauseMenuSystemLayout { char padding[0x78]; FEManagerLayout *manager; };
class CompEndMenuClass { char padding[0x78]; PauseMenuSystemLayout *system; public: void OnActivate(); };
void CompEndMenuClass::OnActivate() { system->manager->IGO->ShowMenuBackground(true); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AABE8)
// 0x001AABE8 _$_15CameraMenuClass
extern "C" void BaseDtor(void *self, int deleting)
    __asm__("_$_6FEMenu");
extern const char derived_vtable[];

__asm__(".equ _$_6FEMenu, 0x00156580");
__asm__(".equ derived_vtable, 0x004C7F30");

struct CameraMenuLayout {
    char padding[0x74];
    const void *vtable;
};

extern "C" void CameraMenuDtor(void *self, int deleting)
    __asm__("_$_15CameraMenuClass");

void CameraMenuDtor(void *self, int deleting) {
    ((CameraMenuLayout *)self)->vtable = derived_vtable;
    BaseDtor(self, deleting);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B05B0)
// 0x001B05B0 OnActivate__15ReplayMenuClass
struct ReplayVTable { char padding[0x170]; short adjustment; short padding2; void (*ReplayStart)(void *self); };
class ReplayMenuClass { char padding[0x74]; ReplayVTable *vtable; public: void OnActivate(); };
void ReplayMenuClass::OnActivate() { ReplayVTable *table = vtable; table->ReplayStart((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0A78)
// 0x001B0A78 OnTriangle__15ReplayMenuClassi
class FEMenu { public: void OnTriangle(int controller); };
__asm__(".equ OnTriangle__6FEMenui, 0x001577F0");
struct replay_system { char padding[0x94]; int replaying; };
class ReplayMenuClass : public FEMenu { char padding[0x74]; replay_system *system; public: void OnTriangle(int controller); };
void ReplayMenuClass::OnTriangle(int controller) { if (!system->replaying) { FEMenu::OnTriangle(controller); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2D18)
// 0x001B2D18 Init__23LostControllerMenuClass
class FEMenu { public: void Init(); };
__asm__(".equ Init__6FEMenu, 0x00156AE0");
class LostControllerMenuClass : public FEMenu { char padding[0x38]; int flags; public: void Init(); };
void LostControllerMenuClass::Init() { flags &= ~0x80; FEMenu::Init(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A4EF8)
// 0x001A4EF8 hasPrevious__FP6FEMenu
struct FEMenuEntry {
    char padding[8];
    FEMenuEntry *previous;
};

struct FEMenu {
    char padding0[0x3c];
    unsigned int flags;
    FEMenuEntry *entries;
    char padding1[8];
    FEMenuEntry *highlighted;
};

bool hasPrevious(FEMenu *menu) {
    FEMenuEntry *highlighted = menu->highlighted;
    if (!(menu->flags & 2) && highlighted == menu->entries) {
        return false;
    }
    if (highlighted->previous) {
        return true;
    }
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B25E8)
// 0x001B25E8 Draw__12TipMenuClass
asm(".equ Draw__6FEMenu, 0x00156C88");
class FEMenu { public: void Draw(); };
class BoxText {
    char padding[0x4C];
public:
    virtual ~BoxText();
    virtual void Update(float time_inc);
    virtual void Draw();
};
class TipMenuClass : public FEMenu {
    char padding[0x74];
public:
    BoxText *tip;
    void Draw();
};
void TipMenuClass::Draw()
{
    FEMenu::Draw();
    tip->Draw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2990)
// 0x001B2990 Draw__20QuitConfirmMenuClass
asm(".equ Draw__6FEMenu, 0x00156C88");
class FEMenu { public: void Draw(); };
class PauseMenuSystem;
class BoxText {
    char padding[0x4C];
public:
    virtual ~BoxText();
    virtual void Update(float time_inc);
    virtual void Draw();
};
class QuitConfirmMenuClass : public FEMenu {
    char padding[0x74];
    PauseMenuSystem *sys;
    BoxText *question;
public:
    void Draw();
};
void QuitConfirmMenuClass::Draw()
{
    FEMenu::Draw();
    question->Draw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B3DE8)
// 0x001B3DE8 Load__15PauseMenuSystem
struct Panel {};
struct goals_vtable {
    char padding[0x168];
    short adjustment;
    short unused;
    void (*load)(void *self, Panel *panel);
};
class GoalsMenuClass {
    char padding[0x74];
    goals_vtable *vtable;
public:
    void Load(Panel *panel) {
        goals_vtable *table = vtable;
        table->load((char *)this + table->adjustment, panel);
    }
};
struct IGOFrontEnd { char padding[0x80]; Panel panel; };
struct FEManager { IGOFrontEnd *IGO; };
class PauseMenuSystem {
    char padding[0x74];
    GoalsMenuClass **menus;
    FEManager *manager;
public:
    void Load();
};
void PauseMenuSystem::Load()
{
    menus[8]->Load(&manager->IGO->panel);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B45D0)
// 0x001B45D0 Select__15PauseMenuSystemii
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short unused;
    void (*select)(void *self, int entry_index);
};
class FEMenu {
    char padding[0x74];
    menu_vtable *vtable;
public:
    void Select(int entry_index) {
        menu_vtable *table = vtable;
        table->select((char *)this + table->adjustment, entry_index);
    }
};
class PauseMenuSystem {
    char padding[0x74];
    FEMenu **menus;
public:
    void Select(int menu_index, int entry_index);
};
void PauseMenuSystem::Select(int menu_index, int entry_index)
{
    menus[menu_index]->Select(entry_index);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4AF8)
// 0x001B4AF8 Restart__15PauseMenuSystem
struct system_vtable {
    char padding[0x58];
    short adjustment;
    short unused;
    void (*end_draw)(void *self, bool pause);
};
class PauseMenuSystem {
    char padding[0x8C];
    system_vtable *vtable;
public:
    void endDraw(bool pause = true) {
        system_vtable *table = vtable;
        table->end_draw((char *)this + table->adjustment, pause);
    }
    void Restart();
};
class game { public: void retry_mode(bool reload); };
extern game *g_game_ptr;
asm(".equ g_game_ptr, 0x0046AC64");
asm(".equ retry_mode__4gameb, 0x00283910");
void PauseMenuSystem::Restart()
{
    endDraw();
    g_game_ptr->retry_mode(false);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0318)
// 0x001B0318 OnL1__17PlaylistMenuClassi
#include "decomp_annotations.h"
typedef void (*playlist_handler)(void *, int);
struct playlist_slot { short adjustment; unsigned short padding; playlist_handler function; };
struct playlist_vtable { char padding[0x98]; playlist_slot up; };
class PlaylistMenuClass { char padding[0x74]; playlist_vtable *vtable; char padding2[0x70]; public: int active; void OnL1(int); };
void PlaylistMenuClass::OnL1(int controller)
{
    active = true;
    KELLY_DECOMP_COMPILER_BARRIER();
    playlist_slot &slot = vtable->up;
    slot.function((char *)this + slot.adjustment, controller);
    active = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0358)
// 0x001B0358 OnR1__17PlaylistMenuClassi
#include "decomp_annotations.h"
typedef void (*playlist_handler)(void *, int);
struct playlist_slot { short adjustment; unsigned short padding; playlist_handler function; };
struct playlist_vtable { char padding[0xa0]; playlist_slot down; };
class PlaylistMenuClass { char padding[0x74]; playlist_vtable *vtable; char padding2[0x70]; public: int active; void OnR1(int); };
void PlaylistMenuClass::OnR1(int controller)
{
    active = true;
    KELLY_DECOMP_COMPILER_BARRIER();
    playlist_slot &slot = vtable->down;
    slot.function((char *)this + slot.adjustment, controller);
    active = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2950)
// 0x001B2950 OnActivate__20QuitConfirmMenuClass
typedef void (*menu_set_high_handler)(void *, void *, bool);
struct menu_slot { short adjustment; unsigned short padding; menu_set_high_handler function; };
struct menu_vtable { char padding[0x18]; menu_slot set_high; };
class FEMenu { char padding[0x74]; protected: menu_vtable *vtable; public: void OnActivate(); };
class QuitConfirmMenuClass : public FEMenu { void *system; void *question; void *yesEntry; void *noEntry; public: void OnActivate(); };
asm(".equ OnActivate__6FEMenu, 0x00157728");
void QuitConfirmMenuClass::OnActivate()
{
    FEMenu::OnActivate();
    menu_slot &slot = vtable->set_high;
    slot.function((char *)this + slot.adjustment, noEntry, false);
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_001AC7B8)
// 0x001AC7B8 Update__18TrickTypeMenuClassf
class ActiveMenu { char padding[0x74]; public:
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
    virtual void Update(float);
};
class TrickTypeMenuClass { char padding[0x60]; ActiveMenu* active; public: void Update(float time_inc); };
extern void base_call(TrickTypeMenuClass*, float) __asm__("Update__6FEMenuf");
__asm__(".equ Update__6FEMenuf, 0x00156DC8");
void TrickTypeMenuClass::Update(float time_inc) { if(active) { active->Update(time_inc); KELLY_DECOMP_COMPILER_BARRIER(); } else { base_call(this,time_inc); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
