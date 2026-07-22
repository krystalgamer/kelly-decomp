// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001974F0)
// 0x001974F0 TrickOK__17TrickBookFrontEndi
#include "KS/SRC/ks/TrickBookFrontEnd_shared.h"
enum { TRICKBOOKTYPE_NOTYPE = 4 };
#define PAD_NONE 255
__asm__(".equ GTrickList, 0x00427CA8");
bool TrickBookFrontEnd::TrickOK(int t) {
    SurferTrick *st = &(GTrickList[t]);
    bool right_type = st->trickbook_type != TRICKBOOKTYPE_NOTYPE;
    bool has_buttons = st->button1 != PAD_NONE;
    bool has_anim = st->anim_id != -1;
    bool bad_trick = false;
    return right_type && has_buttons && has_anim && !bad_trick;
}
#endif
