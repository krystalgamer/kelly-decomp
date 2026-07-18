class FloatingText { char padding[0xD4]; float real_x; float real_y; bool non_floating_behavior; public: void SetBehaviorNF(float x, float y); };
void FloatingText::SetBehaviorNF(float x, float y) { non_floating_behavior = true; real_x = x; real_y = y; }
