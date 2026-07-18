class PanelQuad { char padding[0x10]; float mask; int maskType; public: void Mask(float amount, int type) { mask = amount; maskType = type; } };
class SpecialMeterWidget { char padding[0x10]; PanelQuad* colorPQ; public: void SetFillage(float amount); };
void SpecialMeterWidget::SetFillage(float amount) { colorPQ->Mask(amount, true); }
