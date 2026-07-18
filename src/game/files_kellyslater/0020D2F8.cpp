class kellyslater_controller { char padding[0x18F4]; int currentTrick; int completedTrick; public: void ResetTricks(); };
void kellyslater_controller::ResetTricks() { completedTrick = -1; currentTrick = -1; }
