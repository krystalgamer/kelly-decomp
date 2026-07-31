// signal_anim RTTI extracted by generated one-function shims.

// 0x00120818 __tf11signal_anim
#include "KS/SRC/signal_anim.h"

extern "C" void **signal_base_rtti() __asm__("__tft4anim1Z10signal_key");
extern "C" void *signal_base_type[] __asm__("__tit4anim1Z10signal_key");
extern "C" void *signal_anim_type[] __asm__("__ti11signal_anim");
extern "C" const char signal_anim_name[];

__asm__(".equ __tft4anim1Z10signal_key, 0x00121AD8");
__asm__(".equ __tit4anim1Z10signal_key, 0x00511FC8");
__asm__(".equ __ti11signal_anim, 0x005A26C8");
__asm__(".equ signal_anim_name, 0x004CA458");

extern "C" void **signal_anim_rtti() __asm__("__tf11signal_anim");
void **signal_anim_rtti()
{
    if (!signal_anim_type[0]) {
        signal_base_rtti();
        __rtti_si(signal_anim_type, signal_anim_name, signal_base_type);
    }
    return signal_anim_type;
}
