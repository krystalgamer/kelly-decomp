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
