class ai_action { char padding[0x4]; int flags; public: void going_out_of_service(); };
void ai_action::going_out_of_service() { flags &= -2; }
