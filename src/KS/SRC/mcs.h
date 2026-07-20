// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003005F0)
// 0x003005F0 _$_17theta_and_psi_mcs
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_21motion_control_system");
extern const char base_vtable[];
__asm__(".equ _$_21motion_control_system, 0x002E3158");
__asm__(".equ base_vtable, 0x004F15E8");
struct object_layout { char padding[0x8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17theta_and_psi_mcs");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
