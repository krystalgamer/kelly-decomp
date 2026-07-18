class BouncingText { char padding_to_scale[0x30]; float scale; char padding_to_target[0x1C]; float targetScale; float speed; public: void Bounce(float bounceScale, float bounceTime); };
void BouncingText::Bounce(float bounceScale, float bounceTime) { targetScale = bounceScale; speed = targetScale / bounceTime; scale = 0.0f; }
