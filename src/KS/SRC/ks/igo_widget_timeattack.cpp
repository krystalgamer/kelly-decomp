// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016CD80)
// 0x0016CD80 SetDisplay__16TimeAttackWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class TimeAttackWidget : public IGOWidget { public: void SetDisplay(bool value); };
void TimeAttackWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif
