// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_analogclock.h"

#if defined(KELLY_DECOMP_FUNCTION_00165C88)
// 0x00165C88 ShowElapsedTime__17AnalogClockWidgetf
void AnalogClockWidget::ShowElapsedTime(float time) {
    elapsedInterval = time;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165C90)
// 0x00165C90 HideElapsedTime__17AnalogClockWidget
void AnalogClockWidget::HideElapsedTime() {
    elapsedInterval = 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165138)
// 0x00165138 SetDisplay__17AnalogClockWidgetb
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
void AnalogClockWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
