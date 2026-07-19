// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00113250)
// 0x00113250 _GLOBAL_$I$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00113270)
// 0x00113270 _GLOBAL_$D$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
