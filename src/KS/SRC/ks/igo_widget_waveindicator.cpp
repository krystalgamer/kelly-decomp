// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168180)
// 0x00168180 Hide__19WaveIndicatorWidgetb
class WaveIndicatorWidget { char padding[0x98]; int fadeDir; int state; public: void Hide(bool fadeOut); };
void WaveIndicatorWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; else state = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001673A0)
// 0x001673A0 SetDisplay__19WaveIndicatorWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class WaveIndicatorWidget : public IGOWidget { public: void SetDisplay(bool value); };
void WaveIndicatorWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168098)
// 0x00168098 ShowSurge__19WaveIndicatorWidgetb
class WaveIndicatorWidget {
    char padding[0x88];
    float waveIdx;
    float tongueIdx;
    float hiliteTime;
    float fade;
    int fadeDir;
    int state;

public:
    void ShowSurge(bool fadeIn);
};

void WaveIndicatorWidget::ShowSurge(const bool fadeIn)
{
    if (fadeIn)
    {
        fade = 0.0f;
        fadeDir = 1;
    }
    else
    {
        fade = 1.0f;
        fadeDir = 0;
    }

    waveIdx = 0;
    tongueIdx = 0;
    state = 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001680D0)
// 0x001680D0 ShowTongue__19WaveIndicatorWidgetb
class WaveIndicatorWidget {
    char padding[0x88];
    float waveIdx;
    float tongueIdx;
    float hiliteTime;
    float fade;
    int fadeDir;
    int state;

public:
    void ShowTongue(bool fadeIn);
};

void WaveIndicatorWidget::ShowTongue(const bool fadeIn)
{
    if (fadeIn)
    {
        fade = 0.0f;
        fadeDir = 1;
    }
    else
    {
        fade = 1.0f;
        fadeDir = 0;
    }

    waveIdx = 0;
    tongueIdx = 0;
    state = 3;
}
#endif
