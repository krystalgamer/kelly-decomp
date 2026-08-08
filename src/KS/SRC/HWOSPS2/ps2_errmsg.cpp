// Matching decompilation blocks selected by generated build shims.


// 0x001DFA58 onscreenerror__FRC7stringx
#include "KS/SRC/stringx.h"

void low_level_console_print(char *format, ...);
void low_level_console_flush();
extern char onscreen_error_format[];
__asm__(".equ low_level_console_print__FPce, 0x001E2790");
__asm__(".equ low_level_console_flush__Fv, 0x001E27C8");

void onscreenerror(const stringx &text) {
    low_level_console_print(onscreen_error_format, text.c_str());
    void (*flush)() = low_level_console_flush;
    flush();
}
