// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001B43E0)
// 0x001B43E0 Draw__15PauseMenuSystem (active pause display)
#include "KS/SRC/ks/PauseMenuSystem_shared.h"

void PauseMenuSystem::Draw()
{
    if (draw)
    {
        FEMenu *menu = menus[active];
        menu->Draw();

        if (g_game_ptr->get_num_active_players() > 1 &&
            pause_player != -1)
        {
            if (active != 9 &&
                active != 15 &&
                active != 16 &&
                active != 17 &&
                active != 19 &&
                active != 3)
                player->Draw();
        }
    }
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_001B2628)
// 0x001B2628 OnTriangle__12TipMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");extern "C" void triangle_base(void*,int) __asm__("OnTriangle__6FEMenui");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");struct system_layout{char p0[176];int navigationEvent;};struct menu_layout{char p0[132];system_layout*sys;};extern "C" void on_triangle(menu_layout*self,int c) __asm__("OnTriangle__12TipMenuClassi");void on_triangle(menu_layout*self,int c){register int controller __asm__("$18")=c;unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register void*entity __asm__("$6")=0;__asm__ __volatile__("" : : "f"(zero),"r"(entity));self->sys->navigationEvent=play(sound_manager,27,entity,zero);__asm__ __volatile__("" : : : "memory");pause(sound_manager);triangle_base(self,controller);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AC3E8)
// 0x001AC3E8 Init__18TrickTypeMenuClass
struct entry_vtable{char p0[48];short adjustment;short x0;int(*disabled)(void*);};struct entry{char p0[96];entry_vtable*vtable;};struct menu_vtable{char p0[48];short adjustment;short x0;void(*init)(void*);};struct menu{char p0[116];menu_vtable*vtable;};struct trick_type{char p0[124];menu*subs[4];entry*entries[4];};extern "C" void base_init(void*) __asm__("Init__6FEMenu");__asm__(".equ Init__6FEMenu,0x00156AE0");extern "C" void init(trick_type*self) __asm__("Init__18TrickTypeMenuClass");void init(trick_type*self){menu**p=self->subs;base_init(self);for(int i=3;i>=0;--i,++p){entry*e=*(entry**)((char*)p+16);entry_vtable*t=e->vtable;if(!t->disabled((char*)e+t->adjustment)){menu*m=*p;menu_vtable*u=m->vtable;u->init((char*)m+u->adjustment);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0640)
// 0x001B0640 OnLeft__15ReplayMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");struct igo_vtable{char p0[72];short left_adj;short x0;void(*left)(void*);short right_adj;short x1;void(*right)(void*);};struct igo{char p0[4];igo_vtable*vtable;};struct frontend_manager{char p0[1456];igo*IGO;};extern frontend_manager*manager;__asm__(".equ manager,0x003E7728");struct replay_system{char p0[148];int replay_mode;};struct replay_menu{char p0[120];replay_system*sys;};extern "C" void run(replay_menu*self,int) __asm__("OnLeft__15ReplayMenuClassi");void run(replay_menu*self,int){if(self->sys->replay_mode){igo*i=manager->IGO;if(i){igo_vtable*t=i->vtable;t->left((char*)i+t->left_adj);}unpause(sound_manager);register SoundScriptManager*m __asm__("$4")=sound_manager;__asm__ __volatile__("" : "+r"(m));register int event __asm__("$5")=26;__asm__ __volatile__("" : "+r"(event));play(m,event,0,0.0f);pause(sound_manager);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B06B8)
// 0x001B06B8 OnRight__15ReplayMenuClassi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");struct igo_vtable{char p0[72];short left_adj;short x0;void(*left)(void*);short right_adj;short x1;void(*right)(void*);};struct igo{char p0[4];igo_vtable*vtable;};struct frontend_manager{char p0[1456];igo*IGO;};extern frontend_manager*manager;__asm__(".equ manager,0x003E7728");struct replay_system{char p0[148];int replay_mode;};struct replay_menu{char p0[120];replay_system*sys;};extern "C" void run(replay_menu*self,int) __asm__("OnRight__15ReplayMenuClassi");void run(replay_menu*self,int){if(self->sys->replay_mode){igo*i=manager->IGO;if(i){igo_vtable*t=i->vtable;t->right((char*)i+t->right_adj);}unpause(sound_manager);register SoundScriptManager*m __asm__("$4")=sound_manager;__asm__ __volatile__("" : "+r"(m));register int event __asm__("$5")=26;__asm__ __volatile__("" : "+r"(event));play(m,event,0,0.0f);pause(sound_manager);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A7310)
// 0x001A7310 OnTriangle__21SaveCareerPromptClassi
struct SoundManager;extern SoundManager*sound_manager;extern "C" void unpause(SoundManager*)__asm__("unpause__18SoundScriptManager");extern "C" int play(SoundManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundManager*)__asm__("pause__18SoundScriptManager");extern "C" void base(void*,int)__asm__("OnTriangle__6FEMenui");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");struct Sys{char pad[176];int navigationEvent;};struct Menu{char pad[120];Sys*sys;char pad2[4];int state;};extern "C" void triangle(Menu*self,int c)__asm__("OnTriangle__21SaveCareerPromptClassi");void triangle(Menu*self,int c){unpause(sound_manager);if(self->state==7)self->sys->navigationEvent=play(sound_manager,28,0,0.0f);pause(sound_manager);base(self,c);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AAF30)
// 0x001AAF30 OnActivate__15CameraMenuClass
struct menu_vtable{char pad[104];short high_adjust;short high_pad;void(*highlight_default)(void*);char pad2[168];short help_adjust;short help_pad;void(*set_help)(void*,int);};struct PauseSystem;extern "C" bool resumable(const PauseSystem*,void*)__asm__("IsResumable__C15PauseMenuSystemP6FEMenu");__asm__(".equ IsResumable__C15PauseMenuSystemP6FEMenu,0x001B4B38");struct CameraMenu{char pad[116];menu_vtable*vtable;PauseSystem*sys;};extern "C" void activate(CameraMenu*self)__asm__("OnActivate__15CameraMenuClass");void activate(CameraMenu*self){if(resumable(self->sys,self)){menu_vtable*t=self->vtable;t->set_help((char*)self+t->help_adjust,115);}else{menu_vtable*t=self->vtable;t->set_help((char*)self+t->help_adjust,51);}menu_vtable*t=self->vtable;t->highlight_default((char*)self+t->high_adjust);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B23E8)
// 0x001B23E8 OnActivate__12TipMenuClass
struct vtable{char pad[280];short help_adj;short help_pad;void(*set_help)(void*,int);char pad2[80];short tip_adj;short tip_pad;void(*set_tip)(void*);};struct PauseSystem;extern "C" bool resumable(const PauseSystem*,void*)__asm__("IsResumable__C15PauseMenuSystemP6FEMenu");__asm__(".equ IsResumable__C15PauseMenuSystemP6FEMenu,0x001B4B38");struct TipMenu{char pad[116];vtable*vt;char pad2[12];PauseSystem*sys;};extern "C" void activate(TipMenu*self)__asm__("OnActivate__12TipMenuClass");void activate(TipMenu*self){vtable*t=self->vt;{register void(*fn)(void*) __asm__("$3")=t->set_tip;fn((char*)self+t->tip_adj);}if(resumable(self->sys,self)){t=self->vt;{register void(*fn)(void*,int) __asm__("$3")=t->set_help;fn((char*)self+t->help_adj,96);}}else{t=self->vt;{register void(*fn)(void*,int) __asm__("$3")=t->set_help;fn((char*)self+t->help_adj,32);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4980)
// 0x001B4980 EndLevel__15PauseMenuSystem
struct FEManager;struct IGOFrontEnd;struct MenuVtable{char pad[136];short adjust;short z;void(*make_active)(void*,int,int);};struct PauseMenuSystem{char pad0[120];FEManager*manager;char pad1[16];MenuVtable*vtable;};struct FEManager{IGOFrontEnd*IGO;char pad[87676];int in_game_map_up;};struct IGOFrontEnd{};extern FEManager frontendmanager;extern char wave_sound[];extern "C" void level_end(FEManager*)__asm__("OnLevelEnding__9FEManager");extern "C" void wave_shutdown(void*)__asm__("shutdown__9WaveSound");extern "C" void release_all()__asm__("nslReleaseAllSounds__Fv");extern "C" void show_bg(IGOFrontEnd*,bool)__asm__("ShowMenuBackground__11IGOFrontEndb");__asm__(".equ frontendmanager,0x003E7728");__asm__(".equ wave_sound,0x004308B8");__asm__(".equ OnLevelEnding__9FEManager,0x00198900");__asm__(".equ shutdown__9WaveSound,0x00255168");__asm__(".equ nslReleaseAllSounds__Fv,0x0038D3D0");__asm__(".equ ShowMenuBackground__11IGOFrontEndb,0x0017CED0");extern "C" void end_level(PauseMenuSystem*self)__asm__("EndLevel__15PauseMenuSystem");void end_level(PauseMenuSystem*self){level_end(&frontendmanager);wave_shutdown(wave_sound);release_all();MenuVtable*v=self->vtable;v->make_active((char*)self+v->adjust,15,1);self->manager->in_game_map_up=true;show_bg(self->manager->IGO,false);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A6F88)
// 0x001A6F88 SaveProgressFunc__21SaveCareerPromptClassPvi
struct PhotoFrontEnd{int GetSelectedPhotoIdx()const;};struct PauseMenuSystem{char pad[68];PhotoFrontEnd*photoMenu;};struct FrontendManager{char pad[116];PauseMenuSystem*pms;};extern FrontendManager*frontendmanager;__asm__(".equ frontendmanager,0x003E772C");__asm__(".equ GetSelectedPhotoIdx__C13PhotoFrontEnd,0x001CE238");struct SaveCareerPromptClass{char pad[128];int state;void SetState(int);};__asm__(".equ SetState__21SaveCareerPromptClassi,0x001A6D80");extern "C" void save_progress(void*userData,int progress)__asm__("SaveProgressFunc__21SaveCareerPromptClassPvi");void save_progress(void*userData,int progress){SaveCareerPromptClass*self=(SaveCareerPromptClass*)userData;if(progress>=100||progress<0){if(self->state==3){self->SetState(0);asm volatile("");}else if(self->state==1){int idx=frontendmanager->pms->photoMenu->GetSelectedPhotoIdx();if(idx!=-1){self->SetState(4);asm volatile("");}else{self->SetState(6);asm volatile("");}}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AC358)
// 0x001AC358 _$_18TrickTypeMenuClass
struct MenuVtable{char pad[8];short dtor_adj;short z;void(*dtor)(void*,int);};struct FEMenu{char pad[116];void*vptr;};extern "C" void base_dtor(FEMenu*,int)__asm__("_$_6FEMenu");extern void*trick_vtable;struct TrickTypeMenuClass:public FEMenu{void*sys;FEMenu*sub_menus[4];};extern "C" void destroy(TrickTypeMenuClass*,int)__asm__("_$_18TrickTypeMenuClass");__asm__(".equ _$_6FEMenu,0x00156580");__asm__(".equ trick_vtable,0x004C7DC0");void destroy(TrickTypeMenuClass*self,int flag){self->vptr=&trick_vtable;for(int i=0;i<4;i++){FEMenu*m=self->sub_menus[i];if(m){MenuVtable*v=(MenuVtable*)m->vptr;v->dtor((char*)m+v->dtor_adj,3);}}base_dtor(self,flag);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C20)
// 0x001B1C20 OnTriangle__14GoalsMenuClassi
struct PauseMenuSystem{char p[176];int navigationEvent;};struct ReplayState{char p[56];int mode;};struct World{char p[248];ReplayState*state;};extern World*g_world_ptr;extern void*sound_manager;extern "C" void unpause(void*)__asm__("unpause__18SoundScriptManager");extern "C" int play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(void*)__asm__("pause__18SoundScriptManager");extern "C" void base(void*,int)__asm__("OnTriangle__6FEMenui");class GoalsMenuClass{public:char p[164];PauseMenuSystem*sys;void OnTriangle(int)__asm__("OnTriangle__14GoalsMenuClassi");};__asm__(".equ g_world_ptr,0x00431A8C");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");void GoalsMenuClass::OnTriangle(int c){if(!(g_world_ptr->state&&g_world_ptr->state->mode==1)){unpause(sound_manager);sys->navigationEvent=play(sound_manager,27,0,0.0f);asm volatile("" : : : "memory");pause(sound_manager);}base(this,c);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2B00)
// 0x001B2B00 Select__20QuitConfirmMenuClassi
struct PauseMenuSystem{void ActivateAndExit()__asm__("ActivateAndExit__15PauseMenuSystem");};extern void*sound_manager;extern "C" void unpause(void*)__asm__("unpause__18SoundScriptManager");extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(void*)__asm__("pause__18SoundScriptManager");extern "C" void triangle(void*,int)__asm__("OnTriangle__6FEMenui");class QuitConfirmMenuClass{public:char p[120];PauseMenuSystem*sys;void Select(int)__asm__("Select__20QuitConfirmMenuClassi");};__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");__asm__(".equ OnTriangle__6FEMenui,0x001577F0");__asm__(".equ ActivateAndExit__15PauseMenuSystem,0x001B3E28");void QuitConfirmMenuClass::Select(int entry){unpause(sound_manager);register void*mgr asm("$4")=sound_manager;register void*none asm("$6")=0;asm volatile("" : "+r"(mgr), "+r"(none));play(mgr,24,none,0.0f);pause(sound_manager);switch(entry){case 0:sys->ActivateAndExit();asm volatile("");break;case 1:triangle(this,0);asm volatile("");break;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5CC8)
// 0x001A5CC8 OnActivate__24TimeAttackPauseMenuClass
struct EntryVtable{char p[48];short disable_adj;short z;bool(*get_disable)(void*);};struct Entry{char p[96];EntryVtable*vtable;};struct MenuVtable{char p0[24];short high_adj;short z0;void(*set_high)(void*,Entry*,bool);char p1[16];short init_adj;short z1;void(*init)(void*);char p2[48];short default_adj;short z2;void(*highlight_default)(void*);};class TimeAttackPauseMenuClass{char p0[76];Entry*highlighted;char p1[36];MenuVtable*vtable;public:void OnActivate() __asm__("OnActivate__24TimeAttackPauseMenuClass");};void TimeAttackPauseMenuClass::OnActivate(){Entry*oldHigh=highlighted;MenuVtable*v=vtable;register void(*init_fn)(void*) asm("$3")=v->init;init_fn((char*)this+v->init_adj);if(oldHigh&&!oldHigh->vtable->get_disable((char*)oldHigh+oldHigh->vtable->disable_adj)){v=vtable;register void(*high_fn)(void*,Entry*,bool) asm("$3")=v->set_high;high_fn((char*)this+v->high_adj,oldHigh,false);}else{v=vtable;register void(*default_fn)(void*) asm("$3")=v->highlight_default;default_fn((char*)this+v->default_adj);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5D60)
// 0x001A5D60 OnUp__24TimeAttackPauseMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playSound(SoundScriptManager*,int,entity*) __asm__("playSound__18SoundScriptManager9EventTypeP6entity");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playSound__18SoundScriptManager9EventTypeP6entity,0x0031BF28");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[152];short active_adj;short z0;void(*active_up)(void*,int);char p1[176];short self_adj;short z1;void(*self_up)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnUp(Menu*,int) __asm__("OnUp__24TimeAttackPauseMenuClassi");void OnUp(Menu*self,int c){unpause(sound_manager);playSound(sound_manager,25,0);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_up((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_up((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5DF8)
// 0x001A5DF8 OnDown__24TimeAttackPauseMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playSound(SoundScriptManager*,int,entity*) __asm__("playSound__18SoundScriptManager9EventTypeP6entity");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playSound__18SoundScriptManager9EventTypeP6entity,0x0031BF28");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[160];short active_adj;short z0;void(*active_down)(void*,int);char p1[160];short self_adj;short z1;void(*self_down)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnDown(Menu*,int) __asm__("OnDown__24TimeAttackPauseMenuClassi");void OnDown(Menu*self,int c){unpause(sound_manager);playSound(sound_manager,25,0);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_down((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_down((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A6420)
// 0x001A6420 OnActivate__22TutorialPauseMenuClass
struct EntryVtable{char p[48];short disable_adj;short z;bool(*get_disable)(void*);};struct Entry{char p[96];EntryVtable*vtable;};struct MenuVtable{char p0[24];short high_adj;short z0;void(*set_high)(void*,Entry*,bool);char p1[16];short init_adj;short z1;void(*init)(void*);char p2[48];short default_adj;short z2;void(*highlight_default)(void*);};class TutorialPauseMenuClass{char p0[76];Entry*highlighted;char p1[36];MenuVtable*vtable;public:void OnActivate() __asm__("OnActivate__22TutorialPauseMenuClass");};void TutorialPauseMenuClass::OnActivate(){Entry*oldHigh=highlighted;MenuVtable*v=vtable;register void(*init_fn)(void*) asm("$3")=v->init;init_fn((char*)this+v->init_adj);if(oldHigh&&!oldHigh->vtable->get_disable((char*)oldHigh+oldHigh->vtable->disable_adj)){v=vtable;register void(*high_fn)(void*,Entry*,bool) asm("$3")=v->set_high;high_fn((char*)this+v->high_adj,oldHigh,false);}else{v=vtable;register void(*default_fn)(void*) asm("$3")=v->highlight_default;default_fn((char*)this+v->default_adj);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A83F0)
// 0x001A83F0 OnActivate__16HeatMidMenuClass
struct EntryVtable{char p[48];short disable_adj;short z;bool(*get_disable)(void*);};struct Entry{char p[96];EntryVtable*vtable;};struct MenuVtable{char p0[24];short high_adj;short z0;void(*set_high)(void*,Entry*,bool);char p1[16];short init_adj;short z1;void(*init)(void*);char p2[48];short default_adj;short z2;void(*highlight_default)(void*);};class HeatMidMenuClass{char p0[76];Entry*highlighted;char p1[36];MenuVtable*vtable;public:void OnActivate() __asm__("OnActivate__16HeatMidMenuClass");};void HeatMidMenuClass::OnActivate(){Entry*oldHigh=highlighted;MenuVtable*v=vtable;register void(*init_fn)(void*) asm("$3")=v->init;init_fn((char*)this+v->init_adj);if(oldHigh&&!oldHigh->vtable->get_disable((char*)oldHigh+oldHigh->vtable->disable_adj)){v=vtable;register void(*high_fn)(void*,Entry*,bool) asm("$3")=v->set_high;high_fn((char*)this+v->high_adj,oldHigh,false);}else{v=vtable;register void(*default_fn)(void*) asm("$3")=v->highlight_default;default_fn((char*)this+v->default_adj);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2550)
// 0x001B2550 NextTip__12TipMenuClass
class stringx{char*chars;void*my_buf;public:stringx(const char*,int=-1);stringx(const stringx&);};class Random{public:unsigned NextRand();int rand(int end){unsigned r=NextRand();return r%end;}};extern Random*g_random_ptr;extern const char empty_string[];asm(".equ g_random_ptr,0x00432360");asm(".equ empty_string,0x004CEF68");asm(".equ NextRand__6Random,0x00112C68");asm(".equ __7stringxPCci,0x0034D438");asm(".equ __7stringxRC7stringx,0x0034D4D0");inline int random(int end){int i=g_random_ptr->rand(end);return i;}class TipMenuClass{char p[124];stringx*tip_list;int tip_list_size;public:stringx NextTip() __asm__("NextTip__12TipMenuClass");};stringx TipMenuClass::NextTip(){if(tip_list_size==0||tip_list==0)return stringx(empty_string);int r=random(tip_list_size);return tip_list[r];}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A9020)
// 0x001A9020 OnUp__16CompEndMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[152];short active_adj;short z0;void(*active_fn)(void*,int);char p1[176];short self_adj;short z1;void(*self_fn)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnUp(Menu*,int) __asm__("OnUp__16CompEndMenuClassi");void OnUp(Menu*self,int c){unpause(sound_manager);playEvent(sound_manager,25,0,0.0f);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_fn((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_fn((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A90B8)
// 0x001A90B8 OnDown__16CompEndMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[160];short active_adj;short z0;void(*active_fn)(void*,int);char p1[160];short self_adj;short z1;void(*self_fn)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnDown(Menu*,int) __asm__("OnDown__16CompEndMenuClassi");void OnDown(Menu*self,int c){unpause(sound_manager);playEvent(sound_manager,25,0,0.0f);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_fn((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_fn((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A9C08)
// 0x001A9C08 OnTriangle__16OptionsMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct PauseSystem{char p[160];int pause_player;char p2[12];int navigationEvent;};struct Game{char p[192];int player_devices[4];};extern Game*g_game_ptr;asm(".equ g_game_ptr,0x0046AC64");class OptionsMenuClass{char p[120];PauseSystem*sys;public:void RumbleOn(bool,int);void OnTriangle(int) __asm__("OnTriangle__16OptionsMenuClassi");};asm(".equ RumbleOn__16OptionsMenuClassbi,0x001A9930");extern "C" void menu_triangle(void*,int) __asm__("OnTriangle__6FEMenui");asm(".equ OnTriangle__6FEMenui,0x001577F0");void OptionsMenuClass::OnTriangle(int c){unpause(sound_manager);register float volume asm("$f12")=0.0f;asm("" : : "f"(volume) : "memory");register int event asm("$5")=27;asm("" : : "r"(event) : "memory");register SoundScriptManager*manager asm("$4")=sound_manager;register entity*source asm("$6")=0;sys->navigationEvent=playEvent(manager,event,source,volume);asm("" : : : "memory");pause(sound_manager);RumbleOn(false,g_game_ptr->player_devices[sys->pause_player]);menu_triangle(this,c);int dead;asm("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B29D0)
// 0x001B29D0 OnUp__20QuitConfirmMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[152];short active_adj;short z0;void(*active_fn)(void*,int);char p1[176];short self_adj;short z1;void(*self_fn)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnUp(Menu*,int) __asm__("OnUp__20QuitConfirmMenuClassi");void OnUp(Menu*self,int c){unpause(sound_manager);playEvent(sound_manager,25,0,0.0f);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_fn((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_fn((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B2A68)
// 0x001B2A68 OnDown__20QuitConfirmMenuClassi
struct SoundScriptManager;struct entity;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" void playEvent(SoundScriptManager*,int,entity*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");asm(".equ pause__18SoundScriptManager,0x0031BF98");struct Vtable{char p0[160];short active_adj;short z0;void(*active_fn)(void*,int);char p1[160];short self_adj;short z1;void(*self_fn)(void*,int);};struct Menu{char p[96];Menu*active;char p1[16];Vtable*vtable;};extern "C" void OnDown(Menu*,int) __asm__("OnDown__20QuitConfirmMenuClassi");void OnDown(Menu*self,int c){unpause(sound_manager);playEvent(sound_manager,25,0,0.0f);pause(sound_manager);Menu*active=self->active;if(active){Vtable*v=active->vtable;v->active_fn((char*)active+v->active_adj,c);}else{Vtable*v=self->vtable;v->self_fn((char*)self+v->self_adj,c);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4B38)
// 0x001B4B38 IsResumable__C15PauseMenuSystemP6FEMenu
struct FEMenu{char p[84];FEMenu*back;};class PauseMenuSystem{char p[116];FEMenu**menus;public:bool IsResumable(FEMenu*)const;};bool PauseMenuSystem::IsResumable(FEMenu*m)const{if(m==menus[0]||m==menus[4]||m==menus[1]||m==menus[2])return true;if(m){if(m->back==menus[0]||m->back==menus[4]||m->back==menus[1]||m->back==menus[2])return true;if(m->back){if(m->back->back==menus[0]||m->back->back==menus[4]||m->back->back==menus[1]||m->back->back==menus[2])return true;}}return false;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A7260)
// 0x001A7260 OnDown__21SaveCareerPromptClassi
struct SoundScriptManager{};extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*)__asm__("unpause__18SoundScriptManager");extern "C" void pause(SoundScriptManager*)__asm__("pause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");asm(".equ sound_manager,0x0046B4A0");asm(".equ unpause__18SoundScriptManager,0x0031BFA8");asm(".equ pause__18SoundScriptManager,0x0031BF98");asm(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");struct Sys{char padding[176];int navigationEvent;};struct menu_vtable{char padding[336];};struct Active{char padding[116];menu_vtable*vtable;};class SaveCareerPromptClass{char padding0[96];Active*active;char padding1[16];menu_vtable*vtable;Sys*sys;char padding2[4];int myState;public:void OnDown(int);};inline void call_move(void*self,menu_vtable*v,int off,int c){short adj=*(short*)((char*)v+off);void(*fn)(void*,int)=*(void(**)(void*,int))((char*)v+off+4);fn((char*)self+adj,c);}void SaveCareerPromptClass::OnDown(int c){unpause(sound_manager);if(myState==7)sys->navigationEvent=play(sound_manager,25,0,0.0f);pause(sound_manager);if(active)call_move(active,active->vtable,160,c);else call_move(this,vtable,328,c);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001ACB30)
// 0x001ACB30 OnActivate__14TrickMenuClass
#include "KS/SRC/ks/trick_menu_activation_shared.h"

extern "C" void activate_trick_menu(trick_menu_layout *self)
    __asm__("OnActivate__14TrickMenuClass");

void activate_trick_menu(trick_menu_layout *self)
{
    trick_menu_entry *old_high = self->highlighted;
    trick_menu_entry *old_visible = self->first_visible;

    trick_menu_vtable *vtable = self->vtable;
    register void (*init_function)(void *) __asm__("$3") =
        vtable->init;
    init_function((char *)self + vtable->init_adjustment);

    if (
        old_high &&
        !old_high->vtable->get_disable(
            (char *)old_high +
            old_high->vtable->get_disable_adjustment
        )
    )
    {
        vtable = self->vtable;
        register void (*set_high_function)(
            void *,
            trick_menu_entry *,
            bool
        ) __asm__("$3") = vtable->set_high;
        set_high_function(
            (char *)self + vtable->set_high_adjustment,
            old_high,
            false
        );
    }
    else
    {
        vtable = self->vtable;
        register void (*highlight_function)(void *) __asm__("$3") =
            vtable->highlight_default;
        highlight_function(
            (char *)self + vtable->highlight_default_adjustment
        );
    }

    if (old_visible)
    {
        vtable = self->vtable;
        register void (*set_vis_function)(
            void *,
            trick_menu_entry *
        ) __asm__("$3") = vtable->set_vis;
        set_vis_function(
            (char *)self + vtable->set_vis_adjustment,
            old_visible
        );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001AEC48)
// 0x001AEC48 Select__17PlaylistMenuClassi
#include "KS/SRC/ks/PlaylistMenu_shared.h"

void PlaylistMenuClass::Select(int entry_index)
{
    if (numSongs == 0)
        return;

    if (!os_developer_options::inst()->is_flagged(os_developer_options::FLAG_NO_AUDIO))
    {
        SoundScriptManager::inst()->unpause();
        MusicMan::inst()->stop();
        MusicMan::inst()->setCurrent(pos + offset);
        if (MusicMan::inst()->isDisabled(pos + offset))
            MusicMan::inst()->disable(pos + offset, false);
        __asm__ __volatile__("" : : : "memory");
        MusicMan::inst()->play();
        SoundScriptManager::inst()->playEvent(SS_FE_ONX);
        SoundScriptManager::inst()->pause();
        __asm__ __volatile__("" : : : "memory");
    }
    return;
}
#endif
