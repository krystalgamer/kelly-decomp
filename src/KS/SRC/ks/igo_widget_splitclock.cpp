// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C740)
// 0x0016C740 Update__16SplitClockWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class SplitClockWidget : public IGOWidget { public: void Update(float time); };
void SplitClockWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C670)
// 0x0016C670 SetDisplay__16SplitClockWidgetb
class IGOWidget { bool display; public: void SetDisplay(bool value); };
asm(".equ SetDisplay__9IGOWidgetb, 0x00164658");
struct panel_vtable { char padding[0x18]; short adjustment; short padding2; void (*TurnOn)(void *self, bool value); };
struct PanelQuad { char padding[0x194]; panel_vtable *vtable; };
class SplitClockWidget : public IGOWidget { char padding[4]; PanelQuad *bgPQ; public: void SetDisplay(bool value); };
void SplitClockWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    panel_vtable *table = bgPQ->vtable;
    table->TurnOn((char *)bgPQ + table->adjustment, *(bool *)this);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C608)
// 0x0016C608 _$_16SplitClockWidget
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget,0x00164628");
__asm__(".equ derived_vtable,0x004DB2A8");
struct widget_layout { char padding[4]; const void *vtable; char padding2[4]; TextString *text; };
extern "C" void destroy_widget(widget_layout *self, int deleting) __asm__("_$_16SplitClockWidget");
void destroy_widget(widget_layout *self, int deleting)
{
    self->vtable = derived_vtable;
    TextString *text = self->text;
    if (text) {
        text_vtable *table = text->vtable;
        table->destroy((char *)text + table->adjustment, 3);
    }
    destroy_base(self, deleting);
    __asm__ __volatile__("" : : : "memory");
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
