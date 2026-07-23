// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001990D8)
// 0x001990D8 FEInitialized__Fv
struct FEManagerState { char padding[0x15674]; bool fe_init; };
extern FEManagerState frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
bool FEInitialized() { return frontendmanager.fe_init; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199150)
// 0x00199150 FEDone__Fv
struct FEManagerState { char padding[0x15678]; bool fe_done; };
extern FEManagerState frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
bool FEDone() { return frontendmanager.fe_done; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199168)
// 0x00199168 FEDoneLoading__Fv
struct FEManagerState { char padding[0x1567C]; bool fe_done_loading; };
extern FEManagerState frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
bool FEDoneLoading() { return frontendmanager.fe_done_loading; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199210)
// 0x00199210 IGOIsPaused__Fv
struct PauseMenuSystem { char padding[0x90]; bool draw; };
extern PauseMenuSystem* frontend_pause_system;
__asm__(".equ frontend_pause_system, 0x003E772C");
bool IGOIsPaused() { return frontend_pause_system->draw; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001990F0)
// 0x001990F0 FEInit__Fv
class FEManager { public: void InitFE(); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ InitFE__9FEManager, 0x00198938");
void FEInit() { frontendmanager.InitFE(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199110)
// 0x00199110 FEUpdate__Ff
class FEManager { public: void UpdateFE(float time); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ UpdateFE__9FEManagerf, 0x00198E18");
void FEUpdate(float time) { frontendmanager.UpdateFE(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199130)
// 0x00199130 FEDraw__Fv
class FEManager { public: void DrawFE(); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ DrawFE__9FEManager, 0x00198BC0");
void FEDraw() { frontendmanager.DrawFE(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199180)
// 0x00199180 FERelease__Fv
class FEManager { public: void ReleaseFE(); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ ReleaseFE__9FEManager, 0x00198F10");
void FERelease() { frontendmanager.ReleaseFE(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001991A0)
// 0x001991A0 IGOUpdate__Ff
class FEManager { public: void UpdateIGO(float time); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ UpdateIGO__9FEManagerf, 0x00198E68");
void IGOUpdate(float time) { frontendmanager.UpdateIGO(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001991C0)
// 0x001991C0 IGODraw__Fv
class FEManager { public: void DrawIGO(); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ DrawIGO__9FEManager, 0x00198CC8");
void IGODraw() { frontendmanager.DrawIGO(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00199220)
// 0x00199220 IGORelease__Fv
class FEManager { public: void ReleaseIGO(); };
extern FEManager frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ ReleaseIGO__9FEManager, 0x00199070");
void IGORelease() { frontendmanager.ReleaseIGO(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001991E0)
// 0x001991E0 IGOStandUp__Fv
class IGOFrontEnd { public: void OnSurferStandUp(); };
__asm__(".equ OnSurferStandUp__11IGOFrontEnd, 0x0017CB40");
struct FEManagerLayout { IGOFrontEnd *IGO; };
extern FEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
void IGOStandUp() { frontendmanager.IGO->OnSurferStandUp(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001988C8)
// 0x001988C8 OnLevelLoaded__9FEManager
struct frontend_vtable {
    char padding[0x1E0];
    short adjustment;
    short padding2;
    void (*on_level_loaded)(void *self);
};

struct beach_frontend_layout {
    char padding[0x74];
    frontend_vtable *vtable;
};

class FEManager {
    char padding[0x156A0];
    beach_frontend_layout *map;

public:
    void OnLevelLoaded();
};

void FEManager::OnLevelLoaded()
{
    beach_frontend_layout *frontend = map;
    frontend_vtable *table = frontend->vtable;
    table->on_level_loaded(
        (char *)frontend + table->adjustment
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00198900)
// 0x00198900 OnLevelEnding__9FEManager
struct frontend_vtable {
    char padding[0x1E8];
    short adjustment;
    short padding2;
    void (*on_level_ending)(void *self);
};

struct beach_frontend_layout {
    char padding[0x74];
    frontend_vtable *vtable;
};

class FEManager {
    char padding[0x156A0];
    beach_frontend_layout *map;

public:
    void OnLevelEnding();
};

void FEManager::OnLevelEnding()
{
    beach_frontend_layout *frontend = map;
    frontend_vtable *table = frontend->vtable;
    table->on_level_ending(
        (char *)frontend + table->adjustment
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00198ED8)
// 0x00198ED8 UpdateIGOScene__9FEManager
class FEMenu;
class FEManager;

class FEMenuSystem {
    char data[0x8c];

public:
    virtual ~FEMenuSystem();
    virtual void InitAll();
    virtual void Add(FEMenu *);
    virtual void MakeActive(int, int);
    virtual void Update(float);
    virtual void UpdateButtonDown();
    virtual void Draw();
    virtual void Select(int, int) = 0;
    virtual void Exit();
    virtual void startDraw(int, bool);
    virtual void endDraw(bool);
    virtual FEMenu *GetActiveMenu();

protected:
    virtual void cons(int, FEManager *, void *);
    virtual void OnButtonPress(int, int);
};

class PauseMenuSystem : public FEMenuSystem {
public:
    bool draw;

    virtual ~PauseMenuSystem();
    virtual void InitAll();
    virtual void Load();
    virtual void startDraw(int, bool);
    virtual void endDraw(bool);
    virtual void Update(float);
    virtual void UpdateInScene();
    virtual void Draw();
    virtual void OnButtonPress(int, int);
    virtual void MakeActive(int, int);
    virtual void Select(int, int);
};

class FEManager {
    void *IGO;
    PauseMenuSystem *pms;

public:
    void UpdateIGOScene();
};

void FEManager::UpdateIGOScene()
{
    if(pms->draw) pms->UpdateInScene();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00198CC8)
// 0x00198CC8 DrawIGO__9FEManager
extern int g_igo_enabled;
__asm__(".equ g_igo_enabled, 0x003E7720");
struct draw_slot {
    short adjustment; short reserved; void (*function)(void *);
};
struct igo_layout { char padding[0xc0]; char *vtable; };
struct pause_layout { char padding[0x8c]; char *vtable; };
class FEManager {
    igo_layout *IGO;
    pause_layout *pms;
public:
    void DrawIGO();
};
void FEManager::DrawIGO() {
    if (g_igo_enabled) {
        draw_slot *igo_slot=(draw_slot *)(IGO->vtable+0x20);
        igo_slot->function((char *)IGO+igo_slot->adjustment);
        draw_slot *pause_slot=(draw_slot *)(pms->vtable+0x38);
        pause_slot->function((char *)pms+pause_slot->adjustment);
    }
}
#endif
