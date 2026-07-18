typedef void* (*nvlAllocCallback)(int alignment, int size);
extern nvlAllocCallback nvlMPEGAllocFunc;
__asm__(".equ nvlMPEGAllocFunc, 0x00596F84");
void nvlMPEGSetMemoryAllocCallback(nvlAllocCallback callback) { nvlMPEGAllocFunc = callback; }
