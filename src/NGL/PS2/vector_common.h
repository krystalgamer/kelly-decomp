// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E9928)
// 0x001E9928 _GLOBAL_$I$make_projection__9matrix4x4fffff
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$make_projection__9matrix4x4fffff");
__asm__(".equ __static_initialization_and_destruction_0, 0x001E9198");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E9948)
// 0x001E9948 _GLOBAL_$D$make_projection__9matrix4x4fffff
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$make_projection__9matrix4x4fffff");
__asm__(".equ __static_initialization_and_destruction_0, 0x001E9198");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
