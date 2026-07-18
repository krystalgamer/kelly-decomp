extern const char app_signal_name[];
__asm__(".equ app_signal_name, 0x004F5030");
class app { public: const char* get_signal_name(unsigned int index) const; };
const char* app::get_signal_name(unsigned int index) const { return app_signal_name; }
