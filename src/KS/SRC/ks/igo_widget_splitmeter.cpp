// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016BE20)
// 0x0016BE20 SetDisplay__16SplitMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SplitMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SplitMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif
