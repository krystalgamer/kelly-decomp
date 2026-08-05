// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DFA58)
// 0x001DFA58 onscreenerror__FRC7stringx
struct stringx { char *data; };
void low_level_console_print(char *format, ...);
void low_level_console_flush();
__asm__(".equ low_level_console_print__FPce, 0x001E2790");
__asm__(".equ low_level_console_flush__Fv, 0x001E27C8");
void onscreenerror(const stringx &text) { register char *message __asm__("$5") = text.data; register char *format __asm__("$4") = (char *)0x004D0000; __asm__ volatile("" : "+r"(message), "+r"(format)); format -= 0x1b78; low_level_console_print(format, message); low_level_console_flush(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
