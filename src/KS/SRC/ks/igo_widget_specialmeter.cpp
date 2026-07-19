// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00166E98)
// 0x00166E98 SetFillage__18SpecialMeterWidgetf
class PanelQuad { char padding[0x10]; float mask; int maskType; public: void Mask(float amount, int type) { mask = amount; maskType = type; } };
class SpecialMeterWidget { char padding[0x10]; PanelQuad* colorPQ; public: void SetFillage(float amount); };
void SpecialMeterWidget::SetFillage(float amount) { colorPQ->Mask(amount, true); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166B30)
// 0x00166B30 SetDisplay__18SpecialMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SpecialMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SpecialMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
