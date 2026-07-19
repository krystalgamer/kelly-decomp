// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031D938)
// 0x0031D938 _$_12slc_entity_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_0031D938(void *self) __asm__("_$_12slc_entity_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_0031D938(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
