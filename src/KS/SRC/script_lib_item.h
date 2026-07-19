// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003270D8)
// 0x003270D8 _$_10slc_item_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_003270D8(void *self) __asm__("_$_10slc_item_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_003270D8(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
