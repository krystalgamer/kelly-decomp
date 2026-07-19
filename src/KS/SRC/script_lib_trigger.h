// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003285A8)
// 0x003285A8 _$_13slc_trigger_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_003285A8(void *self) __asm__("_$_13slc_trigger_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_003285A8(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
