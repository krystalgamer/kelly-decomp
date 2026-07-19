// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B84E0)
// 0x002B84E0 _$_3mic
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void MicDtor(void *self) __asm__("_$_3mic");
__asm__(".equ _$_6entity, 0x001298C8");
void MicDtor(void *self) { EntityDtor(self); __asm__ volatile(""); }
#endif
