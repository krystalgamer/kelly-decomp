// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016B688)
// 0x0016B688 SetDisplay__12ReplayWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class ReplayWidget : public IGOWidget { public: void SetDisplay(bool value); };
void ReplayWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD50)
// 0x0016BD50 HighlightLeft__12ReplayWidget
class ReplayWidget { int padding[3]; int vcrButtonHL; public: void HighlightLeft(); };
void ReplayWidget::HighlightLeft() { vcrButtonHL--; if (vcrButtonHL < 0) vcrButtonHL = 0; }
#endif
