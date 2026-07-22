// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001207C8)
#include "KS/SRC/po_anim_shared.h"

extern "C" void **po_base_rtti() __asm__("__tft4anim1Z2po");
extern "C" void *po_base_type[] __asm__("__tit4anim1Z2po");
extern "C" void *po_anim_type[] __asm__("__ti7po_anim");
extern "C" const char po_anim_name[];

__asm__(".equ __tft4anim1Z2po, 0x00121A98");
__asm__(".equ __tit4anim1Z2po, 0x00511FC0");
__asm__(".equ __ti7po_anim, 0x005A26B8");
__asm__(".equ po_anim_name, 0x004CA448");

// 0x001207C8 __tf7po_anim
extern "C" void **po_anim_rtti() __asm__("__tf7po_anim");
void **po_anim_rtti()
{
    if (!po_anim_type[0]) {
        po_base_rtti();
        __rtti_si(po_anim_type, po_anim_name, po_base_type);
    }
    return po_anim_type;
}
#endif
