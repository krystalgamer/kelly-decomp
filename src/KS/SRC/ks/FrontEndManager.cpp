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
