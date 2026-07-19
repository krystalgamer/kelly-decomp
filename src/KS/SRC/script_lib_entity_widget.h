// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00327150)
// 0x00327150 _$_19slc_entity_widget_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00327150(void *self) __asm__("_$_19slc_entity_widget_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00327150(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
