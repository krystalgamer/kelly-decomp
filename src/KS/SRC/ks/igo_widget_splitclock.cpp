// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C670)
// 0x0016C670 SetDisplay__16SplitClockWidgetb
#include "KS/SRC/ks/igo_widget_splitclock.h"

asm(".equ SetDisplay__9IGOWidgetb, 0x00164658");

void SplitClockWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    bgPQ->TurnOn(display);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C760)
// 0x0016C760 Draw__16SplitClockWidget
extern "C" void draw_base(void *) __asm__("Draw__9IGOWidget");
__asm__(".equ Draw__9IGOWidget,0x00164668");
struct panel_vtable { char padding[64]; short adjustment; short reserved; void (*draw)(void *, int, float); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
struct text_vtable { char padding[24]; short adjustment; short reserved; void (*draw)(void *); };
struct TextString { char padding[76]; text_vtable *vtable; };
struct widget_layout { int display; char pad0[4]; PanelQuad *panel; char pad1[0]; TextString *text; };
extern "C" void draw_widget(widget_layout *self) __asm__("Draw__16SplitClockWidget");
void draw_widget(widget_layout *self)
{
    draw_base(self);
    if (!self->display) return;
    register PanelQuad *panel __asm__("$6")=self->panel;
    panel_vtable *pt=panel->vtable;
    register int layer __asm__("$5")=0;
    register float alpha __asm__("$f12")=-1.0f;
    register void (*draw_panel)(void *,int,float) __asm__("$3")=pt->draw;
    draw_panel((char *)panel+pt->adjustment,layer,alpha);
    register TextString *text __asm__("$5")=self->text;
    text_vtable *tt=text->vtable;
    register void (*draw_text)(void *) __asm__("$3")=tt->draw;
    draw_text((char *)text+tt->adjustment);
}
#endif
