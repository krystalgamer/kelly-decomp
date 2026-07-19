// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00169BB8)
// 0x00169BB8 SetDisplay__12CameraWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class CameraWidget : public IGOWidget { public: void SetDisplay(bool value); };
void CameraWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00169EA0)
// 0x00169EA0 Reset__12CameraWidget
class CameraWidget { public: void Hide(); void Reset(); };
__asm__(".equ Hide__12CameraWidget, 0x00169FF0");
void CameraWidget::Reset() { Hide(); __asm__ volatile(""); }
#endif
