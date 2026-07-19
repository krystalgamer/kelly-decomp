// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034F078)
// 0x0034F078 __Q220script_library_class8functioni
struct ScriptFunctionLayout { const void *name_data; const void *vtable; };
extern const char empty_script_name[];
extern const char script_function_vtable[];
__asm__(".equ empty_script_name, 0x00500D28");
__asm__(".equ script_function_vtable, 0x005052B0");
extern "C" void *ScriptFunctionCtor(void *self, int dummy) __asm__("__Q220script_library_class8functioni");
void *ScriptFunctionCtor(void *self, int dummy) { ScriptFunctionLayout *layout = (ScriptFunctionLayout *)self; layout->vtable = script_function_vtable; layout->name_data = empty_script_name; return self; }
#endif
