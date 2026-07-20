// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016AA78)
// 0x0016AA78 SetDisplay__11PhotoWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class PhotoWidget : public IGOWidget { public: void SetDisplay(bool value); };
void PhotoWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016AB70)
// 0x0016AB70 Reset__11PhotoWidget
class PhotoWidget { char padding0[0x18]; void *photoTexture; char padding1[0xc8]; float darkFade; float fadeOutAlpha; float shownTimer; int timed; int photoNum; void *pointText; int score; int *scorePtr; public: void Reset(); };
void PhotoWidget::Reset() { photoTexture = 0; scorePtr = 0; score = 0; photoNum = 0; shownTimer = 0.0f; darkFade = 1.0f; fadeOutAlpha = 1.0f; timed = 0; }
#endif
