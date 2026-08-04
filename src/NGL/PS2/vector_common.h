// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003AC0F8)
// 0x003AC0F8 _GLOBAL_$I$nglSysFontFDF
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$nglSysFontFDF");
__asm__(".equ __static_initialization_and_destruction_0, 0x003ABF00");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
