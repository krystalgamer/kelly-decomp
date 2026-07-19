// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DF9B8)
// 0x001DF9B8 os_alloc_init__Fv
void os_alloc_init() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DF9C0)
// 0x001DF9C0 os_alloc_shutdown__Fv
void os_alloc_shutdown() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DF9F0)
// 0x001DF9F0 os_free__FPv
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void os_free(void *pointer) { arch_free(pointer); __asm__ volatile(""); }
#endif
