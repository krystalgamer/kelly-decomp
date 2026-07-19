// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003196B8)
// 0x003196B8 get_signal_name__C17script_controllerUs
extern const char script_signal_name[];
__asm__(".equ script_signal_name, 0x00508DE8");
class script_controller { public: const char* get_signal_name(unsigned short index) const; };
const char* script_controller::get_signal_name(unsigned short index) const { return script_signal_name; }
#endif
