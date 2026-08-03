// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_timeattack.h"

#if defined(KELLY_DECOMP_FUNCTION_0016CEA0)
// 0x0016CEA0 Draw__16TimeAttackWidget
#include "KS/SRC/ks/igo_widget_timeattack.h"
extern "C" void base_draw(void*) __asm__("Draw__9IGOWidget");asm(".equ Draw__9IGOWidget,0x00164668");struct PanelVtable{char p[64];short draw_adj;short z;void(*draw)(void*,int,float);};struct PanelLayout{char p[404];PanelVtable*vtable;};struct TextVtable{char p[24];short draw_adj;short z;void(*draw)(void*);};struct TextLayout{char p[76];TextVtable*vtable;};struct TimeAttackLayout{int display;char p0[4];PanelLayout*bgPQ;char p1[8];TextLayout*timeText;char p2[8];TextLayout*attackText;char p3[4];TextLayout*scoreText;};void TimeAttackWidget::Draw(){TimeAttackLayout*self=(TimeAttackLayout*)this;base_draw(self);if(!self->display)return;PanelVtable*v=self->bgPQ->vtable;v->draw((char*)self->bgPQ+v->draw_adj,0,-1.0f);register TextVtable*t asm("$2")=self->timeText->vtable;register void(*fn)(void*) asm("$3")=t->draw;fn((char*)self->timeText+t->draw_adj);t=self->attackText->vtable;fn=t->draw;fn((char*)self->attackText+t->draw_adj);t=self->scoreText->vtable;fn=t->draw;fn((char*)self->scoreText+t->draw_adj);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016CCD8)
// 0x0016CCD8 _$_16TimeAttackWidget
struct text_vtable{char padding[8];short adjustment;short reserved;void(*destroy)(void*,int);};struct text_layout{char padding[76];text_vtable*vtable;};struct widget_layout{char padding0[4];void*vtable;char padding1[12];text_layout*timeText;char padding2[8];text_layout*attackText;char padding3[4];text_layout*scoreText;};extern char target_vtable;extern "C" void base_dtor(widget_layout*,int)__asm__("_$_9IGOWidget");asm(".equ target_vtable,0x004DB250");asm(".equ _$_9IGOWidget,0x00164628");extern "C" void dtor(widget_layout*,int)__asm__("_$_16TimeAttackWidget");inline void destroy_text(text_layout*p){if(p){text_vtable*v=p->vtable;v->destroy((char*)p+v->adjustment,3);}}void dtor(widget_layout*self,int deleting){self->vtable=&target_vtable;destroy_text(self->timeText);destroy_text(self->attackText);destroy_text(self->scoreText);base_dtor(self,deleting);asm volatile("");}
#endif
