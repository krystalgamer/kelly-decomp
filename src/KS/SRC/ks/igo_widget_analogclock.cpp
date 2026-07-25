// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_analogclock.h"

#if defined(KELLY_DECOMP_FUNCTION_00165C88)
// 0x00165C88 ShowElapsedTime__17AnalogClockWidgetf
void AnalogClockWidget::ShowElapsedTime(float time) {
    elapsedInterval = time;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165C90)
// 0x00165C90 HideElapsedTime__17AnalogClockWidget
void AnalogClockWidget::HideElapsedTime() {
    elapsedInterval = 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165138)
// 0x00165138 SetDisplay__17AnalogClockWidgetb
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
void AnalogClockWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00165088)
// 0x00165088 _$_17AnalogClockWidget
struct dtor_vtable{char padding[8];short adjustment;short reserved;void(*destroy)(void*,int);};struct Quad{char padding[404];dtor_vtable*vtable;};struct Text{char padding[76];dtor_vtable*vtable;};struct layout{char padding0[4];void*vtable;char padding1[48];Quad*timeSegs[60];char padding2[12];Text*scoreText;};extern char target_vtable;extern "C" void base_dtor(layout*,int)__asm__("_$_9IGOWidget");asm(".equ target_vtable,0x004DB5C0");asm(".equ _$_9IGOWidget,0x00164628");extern "C" void dtor(layout*,int)__asm__("_$_17AnalogClockWidget");inline void destroy_quad(Quad*q){if(q){dtor_vtable*v=q->vtable;v->destroy((char*)q+v->adjustment,3);}}inline void destroy_text(Text*t){if(t){dtor_vtable*v=t->vtable;v->destroy((char*)t+v->adjustment,3);}}void dtor(layout*self,int deleting){self->vtable=&target_vtable;for(int i=0;i<60;i++)destroy_quad(self->timeSegs[i]);destroy_text(self->scoreText);base_dtor(self,deleting);asm volatile("");}
#endif
