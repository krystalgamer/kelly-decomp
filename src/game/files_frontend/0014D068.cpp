class PanelQuad { char padding[0x4]; int fade; float fade_alpha; public: void SetFade(float amount); };
void PanelQuad::SetFade(float amount) { fade = 2; fade_alpha = amount; }
