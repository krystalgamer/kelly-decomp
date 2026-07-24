// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001A5838) || \
    defined(KELLY_DECOMP_FUNCTION_001A5F90) || \
    defined(KELLY_DECOMP_FUNCTION_001A85A0) || \
    defined(KELLY_DECOMP_FUNCTION_001B4398) || \
    defined(KELLY_DECOMP_FUNCTION_001B4A58)
#include "decomp_annotations.h"
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

#if defined(KELLY_DECOMP_FUNCTION_001A85A0)
// 0x001A85A0 OnButtonRelease__16HeatMidMenuClassii
void HeatMidMenuClass::OnButtonRelease(int c, int b)
{
    if (b == FEMENUCMD_CROSS && highlighted->entry_num == Continue)
        sys->endDraw();
}
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

#if defined(KELLY_DECOMP_FUNCTION_001B4398)
// 0x001B4398 UpdateInScene__15PauseMenuSystem
void PauseMenuSystem::UpdateInScene()
{
    if (!draw)
        return;
    menus[active]->UpdateInScene();
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

#if defined(KELLY_DECOMP_FUNCTION_001B4A58)
// 0x001B4A58 RestartComp__15PauseMenuSystem
asm(".equ g_game_ptr, 0x0046AC64");
asm(".equ g_beach_ptr, 0x0043F710");
asm(".equ retry_level__4gameb, 0x002839D0");
asm(".equ OnCompetitionReset__13JudgingSystem, 0x00259898");

void PauseMenuSystem::RestartComp()
{
    endDraw();
    g_game_ptr->retry_level();
    g_beach_ptr->judges.OnCompetitionReset();
    KELLY_DECOMP_COMPILER_BARRIER();
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

#if defined(KELLY_DECOMP_FUNCTION_001B0A28)
// 0x001B0A28 OnStart__15ReplayMenuClassi
#include "KS/SRC/ks/FrontEndMenus_shared.h"
#include "decomp_annotations.h"
extern "C" void FEMenuOnStart(FEMenu *menu, int controller) __asm__("OnStart__6FEMenui");
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
extern "C" void ReplayOnStart(ReplayMenuClassLayout *self, int controller) __asm__("OnStart__15ReplayMenuClassi");
void ReplayOnStart(ReplayMenuClassLayout *self, int controller) {
    if (self->sys->replay_mode) {
        ReplayMenuVTableLayout *table = self->vtable;
        table->replay_end((char *)self + table->replay_end_adjustment);
    } else {
        FEMenuOnStart((FEMenu *)self, controller);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1FA0)
// 0x001B1FA0 Init__12TipMenuClass
#include "KS/SRC/ks/FrontEndMenus_shared.h"
__asm__(".equ Init__6FEMenu, 0x00156AE0");
void TipMenuClass::Init() {
    FEMenu::Init();
    entries->SetPos(320, 280);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A6730)
// 0x001A6730 OnButtonRelease__22TutorialPauseMenuClassii
#include "KS/SRC/ks/FrontEndMenus_shared.h"

void TutorialPauseMenuClass::OnButtonRelease(int c, int b)
/* shared text context, minimal vtable */
{
    if (b == FEMENUCMD_CROSS && highlighted->entry_num == Continue)
        sys->endDraw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A7140)
// 0x001A7140 Draw__21SaveCareerPromptClass
#include "decomp_annotations.h"
#include "KS/SRC/ks/FrontEndMenus_shared.h"
__asm__(".equ Draw__6FEMenu, 0x00156C88");

void SaveCareerPromptClass::Draw()
{
    if (myFrameTimer > 0)
        myFrameTimer--;
    message->Draw();
    FEMenu::Draw();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4610)
// 0x001B4610 SetDisconnect__15PauseMenuSystemb
class KSReplay { public: bool IsPlaying(); };
extern KSReplay ksreplay;
__asm__(".equ ksreplay, 0x004252A8");
__asm__(".equ IsPlaying__8KSReplay, 0x0023BE08");
class PauseMenuSystem {
    char padding[0x94];
    int replay_mode;
    char padding2[0x20];
    bool controller_disconnected;
public:
    bool SetDisconnect(bool disconnected);
};
bool PauseMenuSystem::SetDisconnect(bool disconnected) {
    if (!disconnected) {
        controller_disconnected=false;
        return false;
    }
    if (!replay_mode && !ksreplay.IsPlaying())
        controller_disconnected=true;
    return controller_disconnected;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A7390)
// 0x001A7390 _$_21SaveCareerPromptClass
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_6FEMenu");
extern const char derived_vtable[];
__asm__(".equ _$_6FEMenu,0x00156580");
__asm__(".equ derived_vtable,0x004D87D0");
struct prompt_layout { char padding[116]; const void *vtable; char padding2[24]; TextString *message; };
extern "C" void destroy_prompt(prompt_layout *self, int deleting) __asm__("_$_21SaveCareerPromptClass");
void destroy_prompt(prompt_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *message = self->message;
    if (message) {
        text_vtable *table = message->vtable;
        table->destroy((char *)message + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AA280)
// 0x001AA280 OnActivate__14SoundMenuClass
struct PauseMenuSystem; extern "C" bool resumable(PauseMenuSystem *,void*) __asm__("IsResumable__C15PauseMenuSystemP6FEMenu"); __asm__(".equ IsResumable__C15PauseMenuSystemP6FEMenu,0x001B4B38");
struct menu_vtable { char padding[280]; short adjustment; short reserved; void (*set_help)(void *,int); };
struct sound_layout { char padding[116]; menu_vtable *vtable; PauseMenuSystem *sys; };
extern "C" void activate_sound(sound_layout *self) __asm__("OnActivate__14SoundMenuClass");
void activate_sound(sound_layout *self)
{
    if(resumable(self->sys,self)) {
        menu_vtable *table=self->vtable; register void(*fn)(void*,int) __asm__("$3")=table->set_help; fn((char*)self+table->adjustment,355);
    } else {
        menu_vtable *table=self->vtable; register void(*fn)(void*,int) __asm__("$3")=table->set_help; fn((char*)self+table->adjustment,291);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B05D8)
// 0x001B05D8 Update__15ReplayMenuClassf
struct replay_system { char padding[148]; int replay_mode; };
struct replay_vtable { char padding[376]; short adjustment; short reserved; void (*end_replay)(void *); };
struct replay_menu { char padding[116]; replay_vtable *vtable; replay_system *sys; };
struct KSReplay { char padding[16]; int status; };
extern KSReplay ksreplay; extern "C" bool replay_done(KSReplay *) __asm__("Done__8KSReplay");
__asm__(".equ ksreplay,0x004252A8"); __asm__(".equ Done__8KSReplay,0x0023CAD8");
extern "C" void update_replay(replay_menu *self,float dt) __asm__("Update__15ReplayMenuClassf");
void update_replay(replay_menu *self,float dt)
{
    if(self->sys->replay_mode && replay_done(&ksreplay)) {
        replay_vtable *table=self->vtable;
        table->end_replay((char*)self+table->adjustment);
        ksreplay.status=1;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1B98)
// 0x001B1B98 OnUnactivate__14GoalsMenuClassP6FEMenu
struct igo{char p0[296];int menu_bg;};struct manager{igo*IGO;};struct system_layout{char p0[120];manager*manager_ptr;};struct goals_layout{char p0[164];system_layout*sys;char p1[44];int wasMenuBGOn;};extern "C" void show_menu(igo*,bool) __asm__("ShowMenuBackground__11IGOFrontEndb");extern "C" void show_accomp(igo*,bool,int,int) __asm__("ShowAccompBackground__11IGOFrontEndbii");__asm__(".equ ShowMenuBackground__11IGOFrontEndb,0x0017CED0");__asm__(".equ ShowAccompBackground__11IGOFrontEndbii,0x0017CC88");extern "C" void unactivate(goals_layout*self,void*m) __asm__("OnUnactivate__14GoalsMenuClassP6FEMenu");void unactivate(goals_layout*self,void*m){if(m&&self->wasMenuBGOn){system_layout*s=self->sys;manager*man=s->manager_ptr;igo*i=man->IGO;if(!i->menu_bg)show_menu(i,true);}register system_layout*s __asm__("$3")=self->sys;register manager*man __asm__("$2")=s->manager_ptr;show_accomp(man->IGO,false,0,0);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2468)
// 0x001B2468 Select__12TipMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play_event(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");struct system_layout{char p0[176];int navigationEvent;};struct tip_vtable{char p0[368];short adjustment;short x0;void(*set_tip)(void*);};struct tip_layout{char p0[116];tip_vtable*vtable;char p1[12];system_layout*sys;};extern "C" void select_tip(tip_layout*self,int entry) __asm__("Select__12TipMenuClassi");void select_tip(tip_layout*self,int entry){unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register int event __asm__("$5")=24;__asm__ __volatile__("" : : "f"(zero),"r"(event));self->sys->navigationEvent=play_event(sound_manager,event,0,zero);__asm__ __volatile__("" : : : "memory");pause(sound_manager);tip_vtable*t=self->vtable;t->set_tip((char*)self+t->adjustment);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4328)
// 0x001B4328 Update__15PauseMenuSystemf
extern "C" bool debug_menu() __asm__("IsDebugMenuDisplayed__Fv");extern "C" void update_buttons(void*) __asm__("UpdateButtonDown__12FEMenuSystem");extern "C" void update_base(void*,float) __asm__("Update__12FEMenuSystemf");extern "C" void end_level(void*) __asm__("end_level__4game");__asm__(".equ IsDebugMenuDisplayed__Fv,0x001B4BD8");__asm__(".equ UpdateButtonDown__12FEMenuSystem,0x00158C20");__asm__(".equ Update__12FEMenuSystemf,0x00158AC8");__asm__(".equ end_level__4game,0x00283598");struct app_layout{char p0[16];void*game;};extern app_layout*g_app;__asm__(".equ g_app,0x0046AC18");inline app_layout*get_app(){register app_layout*app __asm__("$3")=g_app;__asm__ __volatile__("" : : "r"(app));return app;}struct pause_layout{char p0[152];int end_level_flag;};extern "C" void update_pause(pause_layout*self,float dt) __asm__("Update__15PauseMenuSystemf");void update_pause(pause_layout*self,float dt){if(debug_menu()){update_buttons(self);int dead;__asm__("" : "=r"(dead));return;}update_base(self,dt);if(self->end_level_flag){self->end_level_flag=false;end_level(get_app()->game);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AAA08)
// 0x001AAA08 OnTriangle__14SoundMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");extern "C" void triangle_base(void*,int) __asm__("OnTriangle__6FEMenui");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");struct system_layout{char p0[176];int navigationEvent;};struct menu_layout{char p0[120];system_layout*sys;};extern "C" void on_triangle(menu_layout*self,int c) __asm__("OnTriangle__14SoundMenuClassi");void on_triangle(menu_layout*self,int c){register int controller __asm__("$18")=c;unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register void*entity __asm__("$6")=0;__asm__ __volatile__("" : : "f"(zero),"r"(entity));self->sys->navigationEvent=play(sound_manager,27,entity,zero);__asm__ __volatile__("" : : : "memory");pause(sound_manager);triangle_base(self,controller);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AB2C0)
// 0x001AB2C0 OnTriangle__15CameraMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");extern "C" void triangle_base(void*,int) __asm__("OnTriangle__6FEMenui");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");struct system_layout{char p0[176];int navigationEvent;};struct menu_layout{char p0[120];system_layout*sys;};extern "C" void on_triangle(menu_layout*self,int c) __asm__("OnTriangle__15CameraMenuClassi");void on_triangle(menu_layout*self,int c){register int controller __asm__("$18")=c;unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register void*entity __asm__("$6")=0;__asm__ __volatile__("" : : "f"(zero),"r"(entity));self->sys->navigationEvent=play(sound_manager,27,entity,zero);__asm__ __volatile__("" : : : "memory");pause(sound_manager);triangle_base(self,controller);int dead;__asm__("" : "=r"(dead));}
#endif
