// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_timeattack.h"

#if defined(KELLY_DECOMP_FUNCTION_0016CD80)
// 0x0016CD80 SetDisplay__16TimeAttackWidgetb
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
void TimeAttackWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016CE80)
// 0x0016CE80 Update__16TimeAttackWidgetf
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
void TimeAttackWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
