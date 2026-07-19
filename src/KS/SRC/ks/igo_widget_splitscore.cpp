// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C418)
// 0x0016C418 Update__16SplitScoreWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class SplitScoreWidget : public IGOWidget { public: void Update(float time); };
void SplitScoreWidget::Update(float time) { IGOWidget::Update(time); __asm__ volatile(""); }
#endif
