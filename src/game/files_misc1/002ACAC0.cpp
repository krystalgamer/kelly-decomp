extern char* StlSmallAllocPtr;
__asm__(".equ StlSmallAllocPtr, 0x004322FC");
void* StlSmallAlloc(unsigned int bytes) { char* result = StlSmallAllocPtr; StlSmallAllocPtr += bytes; return result; }
