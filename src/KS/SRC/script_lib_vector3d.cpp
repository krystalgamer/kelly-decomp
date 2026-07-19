// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00329148)
// 0x00329148 __cl__24slf_vector3d_construct_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_vector3d_construct_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_vector3d_construct_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003290D8)
// 0x003290D8 _$_24slf_vector3d_construct_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003290D8(void *self) __asm__("_$_24slf_vector3d_construct_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003290D8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
