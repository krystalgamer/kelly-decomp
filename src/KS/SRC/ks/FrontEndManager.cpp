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
