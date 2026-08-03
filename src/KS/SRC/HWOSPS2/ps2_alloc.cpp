// Matching decompilation blocks selected by generated build shims.


// 0x001DF9B8 os_alloc_init__Fv
void os_alloc_init() {
}

// 0x001DF9C0 os_alloc_shutdown__Fv
void os_alloc_shutdown() {
}

// 0x001DF9C8 os_malloc__Fi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
void *os_malloc(int size) { const char *file = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1da0; void *result = arch_malloc(size, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x001DFA10 os_malloc32__Fi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
void *os_malloc32(int size) { const char *file = (const char *)0x004D0000; __asm__ volatile("" : "+r"(file)); file -= 0x1d88; void *result = arch_malloc(size, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
