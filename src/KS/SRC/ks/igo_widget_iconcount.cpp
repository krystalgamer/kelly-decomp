// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016DDA8)
// 0x0016DDA8 Hide__15IconCountWidgetb
class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Hide(bool fadeOut); };
void IconCountWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016DDC0)
// 0x0016DDC0 Show__15IconCountWidgetb
class IconCountWidget { char padding[0x1C]; int fadeDir; public: void Show(bool fadeIn); };
void IconCountWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }
#endif
