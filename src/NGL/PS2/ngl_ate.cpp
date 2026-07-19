// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003ACA30)
// 0x003ACA30 ATEEntryHead__FPci
char* ATEEntryHead(char* base, int index) { return base + 16 + index * 48; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACD60)
// 0x003ACD60 _GLOBAL_$I$ATENameMatch__FRC14nglFixedStringT0
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$ATENameMatch__FRC14nglFixedStringT0");
__asm__(".equ __static_initialization_and_destruction_0, 0x003ACCF0");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
