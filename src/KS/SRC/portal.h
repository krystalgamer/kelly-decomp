// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FFBD8)
// 0x002FFBD8 _$_6portal
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_8vr_pmesh");
extern const char base_vtable[];
__asm__(".equ _$_8vr_pmesh, 0x002D3B90");
__asm__(".equ base_vtable, 0x004F1E80");
struct object_layout { char padding[0x10]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_6portal");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
