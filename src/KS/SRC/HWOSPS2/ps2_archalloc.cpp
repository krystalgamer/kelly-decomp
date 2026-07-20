// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002ACAC0)
// 0x002ACAC0 StlSmallAlloc__FUi
extern char* StlSmallAllocPtr;
__asm__(".equ StlSmallAllocPtr, 0x004322FC");
void* StlSmallAlloc(unsigned int bytes) { char* result = StlSmallAllocPtr; StlSmallAllocPtr += bytes; return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC6D0)
// 0x002AC6D0 __builtin_vec_delete
void mem_free(void *pointer);
__asm__(".equ mem_free__FPv, 0x002AC900");
extern "C" void builtin_vec_delete(void *pointer) __asm__("__builtin_vec_delete");
void builtin_vec_delete(void *pointer) { mem_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC768)
// 0x002AC768 arch_free__FPv
void mem_free(void *pointer);
__asm__(".equ mem_free__FPv, 0x002AC900");
void arch_free(void *pointer) { mem_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC6B0)
// 0x002AC6B0 __builtin_delete
void mem_free(void *pointer);
__asm__(".equ mem_free__FPv, 0x002AC900");
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
void builtin_delete(void *pointer) { if (pointer) mem_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC578)
// 0x002AC578 __nw__FUiUiPCci
void *mem_malloc(unsigned int size, const char *file, int line, int flags);
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
void *operator new(unsigned int size, unsigned int alignment, const char *file, int line) { void *result = mem_malloc(size, file, line, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC618)
// 0x002AC618 __builtin_new
void *mem_malloc(unsigned int size, const char *description, int line, int flags);
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
void *operator new(unsigned int size) { const char *description = (const char *)0x004F0000; __asm__ volatile("" : "+r"(description)); description -= 0x6b68; void *result = mem_malloc(size, description, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002AC6F0)
// 0x002AC6F0 arch_malloc__FUiPCci
void *mem_malloc(unsigned int size, const char *description, int line, int flags);
extern const char arch_malloc_description[];
__asm__(".equ mem_malloc__FUiPCcii, 0x002AC788");
__asm__(".equ arch_malloc_description, 0x004F94B8");
void *arch_malloc(unsigned int size, const char *description, int line) { void *result = mem_malloc(size, description ? description : arch_malloc_description, line, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
