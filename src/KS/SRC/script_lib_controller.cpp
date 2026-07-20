// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003196B8)
// 0x003196B8 get_signal_name__C17script_controllerUs
extern const char script_signal_name[];
__asm__(".equ script_signal_name, 0x00508DE8");
class script_controller { public: const char* get_signal_name(unsigned short index) const; };
const char* script_controller::get_signal_name(unsigned short index) const { return script_signal_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00318380)
// 0x00318380 _$_17script_controller
extern "C" void SignallerDtor(void *self, int deleting) __asm__("_$_9signaller");
extern const char signaller_vtable[];
__asm__(".equ _$_9signaller, 0x0034CC90");
__asm__(".equ signaller_vtable, 0x004FC988");
struct signaller_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17script_controller");
void DerivedDtor(void *self, int deleting) { ((signaller_layout *)self)->vtable = signaller_vtable; SignallerDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
