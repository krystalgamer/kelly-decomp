// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DFA88)
// 0x001DFA88 warning__FRC7stringx
class stringx { public: char *data; };
void nglPrintf(const char *format, ...);
__asm__(".equ nglPrintf__FPCce, 0x003AC050");
void warning(const stringx &message) { register char *text __asm__("$5") = message.data; register char *format __asm__("$4") = (char *)0x004D0000; __asm__ volatile("" : "+r"(text), "+r"(format)); format -= 0x1b78; nglPrintf(format, text); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFAB0)
// 0x001DFAB0 error__FRC7stringx
class stringx { public: char *data; };
void nglPrintf(const char *format, ...);
__asm__(".equ nglPrintf__FPCce, 0x003AC050");
void error(const stringx &message) { register char *text __asm__("$5") = message.data; register char *format __asm__("$4") = (char *)0x004D0000; __asm__ volatile("" : "+r"(text), "+r"(format)); format -= 0x1b78; nglPrintf(format, text); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DFA58)
// 0x001DFA58 onscreenerror__FRC7stringx
struct stringx { char *data; };
void low_level_console_print(char *format, ...);
void low_level_console_flush();
__asm__(".equ low_level_console_print__FPce, 0x001E2790");
__asm__(".equ low_level_console_flush__Fv, 0x001E27C8");
void onscreenerror(const stringx &text) { register char *message __asm__("$5") = text.data; register char *format __asm__("$4") = (char *)0x004D0000; __asm__ volatile("" : "+r"(message), "+r"(format)); format -= 0x1b78; low_level_console_print(format, message); low_level_console_flush(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
