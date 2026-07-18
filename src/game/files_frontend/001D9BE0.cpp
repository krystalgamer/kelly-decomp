class PanelQuad { char padding[0x4]; int fade; float fade_alpha; float fade_timer; public: void SetFade(int mode, float alpha, float timer); };
void PanelQuad::SetFade(int mode, float alpha, float timer) { fade = mode; fade_alpha = alpha; fade_timer = timer; }
