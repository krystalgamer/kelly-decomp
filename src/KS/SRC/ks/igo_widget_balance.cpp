// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168220)
// 0x00168220 SetDisplay__18HorizBalanceWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class HorizBalanceWidget : public IGOWidget { public: void SetDisplay(bool value); };
void HorizBalanceWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168470)
// 0x00168470 Update__18HorizBalanceWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class HorizBalanceWidget : public IGOWidget { public: void Update(float time); };
void HorizBalanceWidget::Update(float time) { IGOWidget::Update(time); __asm__ volatile(""); }
#endif
