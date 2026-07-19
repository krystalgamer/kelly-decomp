// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00356678)
// 0x00356678 zip_filter_free__FPvT0
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void zip_filter_free(void *unused, void *address) { arch_free(address); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
