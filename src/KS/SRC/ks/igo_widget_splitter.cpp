// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168C80)
// 0x00168C80 SetDisplay__14SplitterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SplitterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SplitterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168D08)
// 0x00168D08 Update__14SplitterWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class SplitterWidget : public IGOWidget { public: void Update(float time); };
void SplitterWidget::Update(float time) { IGOWidget::Update(time); __asm__ volatile(""); }
#endif
