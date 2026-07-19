// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031DAA0)
// 0x0031DAA0 _$_9slc_mfg_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_0031DAA0(void *self) __asm__("_$_9slc_mfg_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_0031DAA0(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
