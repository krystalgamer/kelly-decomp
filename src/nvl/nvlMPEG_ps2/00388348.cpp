typedef void (*nvlFreeCallback)(void* pointer);
extern nvlFreeCallback nvlMPEGFreeFunc;
__asm__(".equ nvlMPEGFreeFunc, 0x00596F88");
void nvlMPEGSetMemoryFreeCallback(nvlFreeCallback callback) { nvlMPEGFreeFunc = callback; }
