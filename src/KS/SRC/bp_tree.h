// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00302C18)
// 0x00302C18 _GLOBAL_$I$__13entity_widgetPCcP6widgetssT1
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$__13entity_widgetPCcP6widgetssT1");
__asm__(".equ __static_initialization_and_destruction_0, 0x002FDDC8");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302C38)
// 0x00302C38 _GLOBAL_$D$__13entity_widgetPCcP6widgetssT1
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$__13entity_widgetPCcP6widgetssT1");
__asm__(".equ __static_initialization_and_destruction_0, 0x002FDDC8");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
