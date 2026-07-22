// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00288A80) || \
    defined(KELLY_DECOMP_FUNCTION_00288B08)
#include "KS/SRC/interface_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288B08)
// 0x00288B08 render__16interface_widget
void interface_widget::render()
{
    if (cur_reticle)
        cur_reticle->render();

    widget::render();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288A80)
// 0x00288A80 show__16interface_widget
void interface_widget::show() { widget::show(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
