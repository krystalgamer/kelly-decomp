class PanelQuad { char padding[0x84]; int rotate; float rotation; public: void Rotate(float amount); };
void PanelQuad::Rotate(float amount) { rotate = 1; rotation = amount; }
