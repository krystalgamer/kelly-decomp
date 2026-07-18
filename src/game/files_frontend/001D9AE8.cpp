class PanelQuad { char padding[0x98]; float r; float g; float b; float a; public: void SetColor(float red, float green, float blue, float alpha); };
void PanelQuad::SetColor(float red, float green, float blue, float alpha) { r = red; g = green; b = blue; a = alpha; }
