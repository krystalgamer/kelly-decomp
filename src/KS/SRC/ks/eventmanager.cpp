// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00349B58)
// 0x00349B58 __14EventRecipient
#pragma interface
#include "KS/SRC/ks/eventmanager.h"

__asm__(".equ g_eventManager, 0x0046DA20");
__asm__(".equ _vt$14EventRecipient, 0x00505078");
__asm__(".equ RegisterRecipient__12EventManagerP14EventRecipient, 0x003499C8");
EventRecipient::EventRecipient()
{
    g_eventManager.RegisterRecipient(this);
}
#endif
