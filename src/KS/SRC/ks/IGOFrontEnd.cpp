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
