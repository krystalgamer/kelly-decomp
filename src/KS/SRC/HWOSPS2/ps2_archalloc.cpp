// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002ACAC0)
// 0x002ACAC0 StlSmallAlloc__FUi
extern char* StlSmallAllocPtr;
__asm__(".equ StlSmallAllocPtr, 0x004322FC");
void* StlSmallAlloc(unsigned int bytes) { char* result = StlSmallAllocPtr; StlSmallAllocPtr += bytes; return result; }
#endif
