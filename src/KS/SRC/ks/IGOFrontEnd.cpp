// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016EE38)
// 0x0016EE38 clear__13IGOPrintQueue
class IGOPrintQueue { char padding[0xC0]; int start; int end; unsigned char size; public: void clear(); };
void IGOPrintQueue::clear() { start = end = size = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017C1A8)
// 0x0017C1A8 OnScoreChange__11IGOFrontEndi
class IGOFrontEnd {
public:
    void OnScoreChange(int player_index);
};

void IGOFrontEnd::OnScoreChange(int player_index) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CEB0)
// 0x0017CEB0 IsPhotoShown__C11IGOFrontEnd
class PhotoWidget { char padding[0x18]; int shown; public: bool IsShown() const { return shown; } };
class IGOFrontEnd { char padding[0x5ac]; PhotoWidget *photoWidget; public: bool IsPhotoShown() const; };
bool IGOFrontEnd::IsPhotoShown() const { return photoWidget && photoWidget->IsShown(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE68)
// 0x0017CE68 GetCameraReticleFade__C11IGOFrontEnd
class CameraWidget { char padding[0x78]; float fade; public: float GetFade() const { return fade; } };
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: float GetCameraReticleFade() const; };
float IGOFrontEnd::GetCameraReticleFade() const { if (!cameraWidget) return 0.0f; return cameraWidget->GetFade(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017DF78)
// 0x0017DF78 GetProceedButtonState__11IGOFrontEnd
int getButtonState(int command);
__asm__(".equ getButtonState__Fi, 0x00159150");
class IGOFrontEnd { public: bool GetProceedButtonState(); };
bool IGOFrontEnd::GetProceedButtonState() { return getButtonState(6); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017DF98)
// 0x0017DF98 GetProceedButtonState__11IGOFrontEndi
int getButtonState(int command, int controller);
__asm__(".equ getButtonState__Fii, 0x00159270");
class IGOFrontEnd { public: bool GetProceedButtonState(int controller); };
bool IGOFrontEnd::GetProceedButtonState(int controller) { return getButtonState(6, controller); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CB40)
// 0x0017CB40 OnSurferStandUp__11IGOFrontEnd
class WaveIndicatorWidget { public: void Hide(bool immediate); };
__asm__(".equ Hide__19WaveIndicatorWidgetb, 0x00168180");
class IGOFrontEnd { char padding[0x5a0]; WaveIndicatorWidget *waveIndicatorWidget; public: void OnSurferStandUp(); };
void IGOFrontEnd::OnSurferStandUp() { if (waveIndicatorWidget) { waveIndicatorWidget->Hide(true); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE18)
// 0x0017CE18 ShowCameraReticle__11IGOFrontEndf
class CameraWidget { public: void Show(float time); };
__asm__(".equ Show__12CameraWidgetf, 0x00169FC8");
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: void ShowCameraReticle(float time); };
void IGOFrontEnd::ShowCameraReticle(float time) { if (cameraWidget) { cameraWidget->Show(time); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE40)
// 0x0017CE40 HideCameraReticle__11IGOFrontEnd
class CameraWidget { public: void Hide(); };
__asm__(".equ Hide__12CameraWidget, 0x00169FF0");
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: void HideCameraReticle(); };
void IGOFrontEnd::HideCameraReticle() { if (cameraWidget) { cameraWidget->Hide(); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
