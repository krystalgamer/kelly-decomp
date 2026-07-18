extern const char script_signal_name[];
__asm__(".equ script_signal_name, 0x00508DE8");
class script_mfg { public: const char* get_signal_name(unsigned short index) const; };
const char* script_mfg::get_signal_name(unsigned short index) const { return script_signal_name; }
