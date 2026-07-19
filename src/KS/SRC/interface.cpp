// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00288A80)
// 0x00288A80 show__16interface_widget
class widget { public: void show(); };
__asm__(".equ show__6widget, 0x0033DDD0");
class interface_widget : public widget { public: void show(); };
void interface_widget::show() { widget::show(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
