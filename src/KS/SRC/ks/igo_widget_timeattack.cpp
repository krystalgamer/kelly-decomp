// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016CD80)
// 0x0016CD80 SetDisplay__16TimeAttackWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class TimeAttackWidget : public IGOWidget { public: void SetDisplay(bool value); };
void TimeAttackWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016CE80)
// 0x0016CE80 Update__16TimeAttackWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class TimeAttackWidget : public IGOWidget { public: void Update(float time); };
void TimeAttackWidget::Update(float time) { IGOWidget::Update(time); __asm__ volatile(""); }
#endif
