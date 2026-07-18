class TextString { char padding[0x24]; int fade; float fade_alpha; public: void SetFade(float amount); };
void TextString::SetFade(float amount) { fade = 2; fade_alpha = amount; }
