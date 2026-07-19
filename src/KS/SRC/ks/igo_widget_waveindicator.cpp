// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168180)
// 0x00168180 Hide__19WaveIndicatorWidgetb
class WaveIndicatorWidget { char padding[0x98]; int fadeDir; int state; public: void Hide(bool fadeOut); };
void WaveIndicatorWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; else state = 0; }
#endif
