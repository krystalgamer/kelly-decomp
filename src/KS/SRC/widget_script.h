// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF780)
// 0x002FF780 _$_11clue_widget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char base_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ base_vtable, 0x004F2EA8");
struct object_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_11clue_widget");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
