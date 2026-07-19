// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E3890)
// 0x001E3890 system_idle__Fv
void system_idle() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3898)
// 0x001E3898 register_exception_handlers__Fv
void register_exception_handlers() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3280)
// 0x001E3280 KSMemFree__FPv
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void KSMemFree(void *pointer) { arch_free(pointer); __asm__ volatile(""); }
#endif
