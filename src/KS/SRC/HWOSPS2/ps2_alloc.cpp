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
void os_free(void *pointer) { arch_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFA38)
// 0x001DFA38 os_free32__FPv
void arch_free(void *pointer);
__asm__(".equ arch_free__FPv, 0x002AC768");
void os_free32(void *pointer) { arch_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DF9C8)
// 0x001DF9C8 os_malloc__Fi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
void *os_malloc(int size) { const char *file = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1da0; void *result = arch_malloc(size, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFA10)
// 0x001DFA10 os_malloc32__Fi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
void *os_malloc32(int size) { const char *file = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1d88; void *result = arch_malloc(size, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
