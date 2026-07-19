// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00165C88)
// 0x00165C88 ShowElapsedTime__17AnalogClockWidgetf
class AnalogClockWidget {
    char padding[0x10];
    float elapsedInterval;

public:
    void ShowElapsedTime(float time);
};

void AnalogClockWidget::ShowElapsedTime(float time) {
    elapsedInterval = time;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165C90)
// 0x00165C90 HideElapsedTime__17AnalogClockWidget
class AnalogClockWidget {
    char padding[0x10];
    float elapsedInterval;

public:
    void HideElapsedTime();
};

void AnalogClockWidget::HideElapsedTime() {
    elapsedInterval = 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165138)
// 0x00165138 SetDisplay__17AnalogClockWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class AnalogClockWidget : public IGOWidget { public: void SetDisplay(bool value); };
void AnalogClockWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
