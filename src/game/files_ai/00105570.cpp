class ai_interface { char padding[0x30]; int disable_count; public: void pop_disable(); };
void ai_interface::pop_disable() { --disable_count; if (disable_count < 0) disable_count = 0; }
