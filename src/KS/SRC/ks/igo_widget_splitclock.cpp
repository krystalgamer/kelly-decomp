// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C670)
// 0x0016C670 SetDisplay__16SplitClockWidgetb
#include "KS/SRC/ks/igo_widget_splitclock.h"

asm(".equ SetDisplay__9IGOWidgetb, 0x00164658");

void SplitClockWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    bgPQ->TurnOn(display);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C760)
// 0x0016C760 Draw__16SplitClockWidget
#include "KS/SRC/ks/igo_widget_splitclock.h"

__asm__(".equ Draw__9IGOWidget,0x00164668");
void SplitClockWidget::Draw()
{
    IGOWidget::Draw();
    if (!display) return;
    bgPQ->Draw();
    clockText->Draw();
}
#endif
