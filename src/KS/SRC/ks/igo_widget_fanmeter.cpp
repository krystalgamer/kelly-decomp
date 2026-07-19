// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168E70)
// 0x00168E70 SetDisplay__14FanMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class FanMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void FanMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif
