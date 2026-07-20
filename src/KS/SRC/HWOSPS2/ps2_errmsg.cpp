// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DFA88)
// 0x001DFA88 warning__FRC7stringx
class stringx { public: char *data; };
void nglPrintf(const char *format, ...);
__asm__(".equ nglPrintf__FPCce, 0x003AC050");
void warning(const stringx &message) { register char *text __asm__("$5") = message.data; register char *format __asm__("$4") = (char *)0x004D0000; __asm__ volatile("" : "+r"(text), "+r"(format)); format -= 0x1b78; nglPrintf(format, text); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
