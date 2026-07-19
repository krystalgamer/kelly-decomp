// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCF08)
// 0x001DCF08 _$_14PauseMenuClass
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void PauseMenuClassDtor(void *self) __asm__("_$_14PauseMenuClass");
__asm__(".equ _$_6FEMenu, 0x00156580");
void PauseMenuClassDtor(void *self) { FEMenuDtor(self); __asm__ volatile(""); }
#endif
