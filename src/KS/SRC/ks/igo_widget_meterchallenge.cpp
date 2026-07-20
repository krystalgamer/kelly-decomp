// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164E20)
// 0x00164E20 Hide__20MeterChallengeWidgetb
class MeterChallengeWidget { char padding[0x18]; int fadeDir; public: void Hide(bool fadeOut); };
void MeterChallengeWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164AC8)
// 0x00164AC8 SetDisplay__20MeterChallengeWidgetb
class IGOWidget {
protected:
    bool display;

public:
    void SetDisplay(bool value);
};

__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");

class MeterChallengeWidget : public IGOWidget {
public:
    void SetDisplay(bool value);
};

void MeterChallengeWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    display = value;
}
#endif
