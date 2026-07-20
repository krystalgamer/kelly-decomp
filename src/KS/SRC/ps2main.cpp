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
void KSMemFree(void *pointer) { arch_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3168)
// 0x001E3168 KSMemAllocate__FUiUiPCci
void *arch_memalign(unsigned int alignment, unsigned int size, const char *file, int line);
__asm__(".equ arch_memalign__FUiUiPCci, 0x002AC740");
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line) { void *result = arch_memalign(alignment, size, file, line); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3190)
// 0x001E3190 KSMemAlloc__FUiUi
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line);
__asm__(".equ KSMemAllocate__FUiUiPCci, 0x001E3168");
void *KSMemAlloc(unsigned int size, unsigned int alignment) { register const char *file __asm__("$6") = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x10e0; void *result = KSMemAllocate(size, alignment, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E3228)
// 0x001E3228 KSMemAllocNSL__FUiUi
void *KSMemAllocate(unsigned int size, unsigned int alignment, const char *file, int line);
__asm__(".equ KSMemAllocate__FUiUiPCci, 0x001E3168");
void *KSMemAllocNSL(unsigned int size, unsigned int alignment) { register const char *file __asm__("$6") = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1080; void *result = KSMemAllocate(size, alignment, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
