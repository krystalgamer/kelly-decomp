// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002BC128)
// 0x002BC128 inc_time_left__12timer_widgetf
class timer_widget { char padding[0x18c]; float time_left; public: void set_time_left(float time); void inc_time_left(float amount); };
__asm__(".equ set_time_left__12timer_widgetf, 0x002BBE90");
void timer_widget::inc_time_left(float amount) { set_time_left(time_left + amount); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
