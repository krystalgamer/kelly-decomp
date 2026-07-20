// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003499A0)
// 0x003499A0 _$_12EventManager
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void EventManagerDtor(void *self, int deleting) __asm__("_$_12EventManager");
void EventManagerDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
