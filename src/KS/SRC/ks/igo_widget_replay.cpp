// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016B688)
// 0x0016B688 SetDisplay__12ReplayWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class ReplayWidget : public IGOWidget { public: void SetDisplay(bool value); };
void ReplayWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD50)
// 0x0016BD50 HighlightLeft__12ReplayWidget
class ReplayWidget { int padding[3]; int vcrButtonHL; public: void HighlightLeft(); };
void ReplayWidget::HighlightLeft() { vcrButtonHL--; if (vcrButtonHL < 0) vcrButtonHL = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD70)
// 0x0016BD70 HighlightRight__12ReplayWidget
class ReplayWidget { int padding[3]; int vcrButtonHL; public: void HighlightRight(); };
void ReplayWidget::HighlightRight() { vcrButtonHL++; if (vcrButtonHL > 4) vcrButtonHL = 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD00)
// 0x0016BD00 Select__12ReplayWidgeti
class ReplayWidget { char padding[8]; int vcrButton; public: void Select(int button); };
void ReplayWidget::Select(int button) { vcrButton = button; if (vcrButton < 0) vcrButton = 0; if (vcrButton > 4) vcrButton = 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD28)
// 0x0016BD28 SelectHighlight__12ReplayWidgeti
class ReplayWidget { char padding[0xc]; int vcrButtonHL; public: void SelectHighlight(int button); };
void ReplayWidget::SelectHighlight(int button) { vcrButtonHL = button; if (vcrButtonHL < 0) vcrButtonHL = 0; if (vcrButtonHL > 4) vcrButtonHL = 4; }
#endif
