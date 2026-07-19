// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168180)
// 0x00168180 Hide__19WaveIndicatorWidgetb
class WaveIndicatorWidget { char padding[0x98]; int fadeDir; int state; public: void Hide(bool fadeOut); };
void WaveIndicatorWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; else state = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001673A0)
// 0x001673A0 SetDisplay__19WaveIndicatorWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class WaveIndicatorWidget : public IGOWidget { public: void SetDisplay(bool value); };
void WaveIndicatorWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
