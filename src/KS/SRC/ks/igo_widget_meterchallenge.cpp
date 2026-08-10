// Matching decompilation blocks selected by generated build shims.


// 0x00164E20 Hide__20MeterChallengeWidgetb
#include "KS/SRC/ks/igo_widget_meterchallenge.h"

void MeterChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }

#if defined(KELLY_DECOMP_FUNCTION_00164AC8)
// 0x00164AC8 SetDisplay__20MeterChallengeWidgetb
#include "KS/SRC/ks/igo_widget_meterchallenge.h"

__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");

void MeterChallengeWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    display = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164DB8)
// 0x00164DB8 Draw__20MeterChallengeWidget
#include "KS/SRC/ks/igo_widget_meterchallenge.h"

__asm__(".equ Draw__9IGOWidget,0x00164668");
void MeterChallengeWidget::Draw()
{
    IGOWidget::Draw();
    if (!display) return;
    objectRoot->Draw();
    Text->Draw();
}
#endif
