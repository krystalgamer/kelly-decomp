// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164E20)
// 0x00164E20 Hide__20MeterChallengeWidgetb
class MeterChallengeWidget { char padding[0x18]; int fadeDir; public: void Hide(bool fadeOut); };
void MeterChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
#endif
