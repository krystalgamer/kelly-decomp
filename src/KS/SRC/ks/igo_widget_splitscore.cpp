// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C2B0)
// 0x0016C2B0 SetDisplay__16SplitScoreWidgetb
#include "KS/SRC/ks/igo_widget_splitscore.h"

asm(".equ SetDisplay__9IGOWidgetb, 0x00164658");

void SplitScoreWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    bgPQ->TurnOn(display);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C438)
// 0x0016C438 Draw__16SplitScoreWidget
#include "KS/SRC/ks/igo_widget_splitscore.h"

__asm__(".equ Draw__9IGOWidget,0x00164668");
void SplitScoreWidget::Draw()
{
    IGOWidget::Draw();
    if (!display) return;
    bgPQ->Draw();
    scoreText->Draw();
}
#endif
