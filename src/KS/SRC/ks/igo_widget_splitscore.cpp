// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016C418)
// 0x0016C418 Update__16SplitScoreWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class SplitScoreWidget : public IGOWidget { public: void Update(float time); };
void SplitScoreWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C2B0)
// 0x0016C2B0 SetDisplay__16SplitScoreWidgetb
class IGOWidget { bool display; public: void SetDisplay(bool value); };
asm(".equ SetDisplay__9IGOWidgetb, 0x00164658");
struct panel_vtable { char padding[0x18]; short adjustment; short padding2; void (*TurnOn)(void *self, bool value); };
struct PanelQuad { char padding[0x194]; panel_vtable *vtable; };
class SplitScoreWidget : public IGOWidget { char padding[8]; PanelQuad *bgPQ; public: void SetDisplay(bool value); };
void SplitScoreWidget::SetDisplay(bool value)
{
    IGOWidget::SetDisplay(value);
    panel_vtable *table = bgPQ->vtable;
    table->TurnOn((char *)bgPQ + table->adjustment, *(bool *)this);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016C248)
// 0x0016C248 _$_16SplitScoreWidget
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget,0x00164628");
__asm__(".equ derived_vtable,0x004DB338");
struct widget_layout { char padding[4]; const void *vtable; char padding2[8]; TextString *text; };
extern "C" void destroy_widget(widget_layout *self, int deleting) __asm__("_$_16SplitScoreWidget");
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

#if defined(KELLY_DECOMP_FUNCTION_0016C438)
// 0x0016C438 Draw__16SplitScoreWidget
extern "C" void draw_base(void *) __asm__("Draw__9IGOWidget");
__asm__(".equ Draw__9IGOWidget,0x00164668");
struct panel_vtable { char padding[64]; short adjustment; short reserved; void (*draw)(void *, int, float); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
struct text_vtable { char padding[24]; short adjustment; short reserved; void (*draw)(void *); };
struct TextString { char padding[76]; text_vtable *vtable; };
struct widget_layout { int display; char pad0[8]; PanelQuad *panel; char pad1[0]; TextString *text; };
extern "C" void draw_widget(widget_layout *self) __asm__("Draw__16SplitScoreWidget");
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

#if defined(KELLY_DECOMP_FUNCTION_0016C4A0)
// 0x0016C4A0 SetScore__16SplitScoreWidgeti
struct stringx { char data[8]; };
extern "C" void string_from_int(stringx *, int) __asm__("__7stringxi");
extern "C" void copy_string(stringx *, const stringx *) __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(stringx *, int) __asm__("_$_7stringx");
__asm__(".equ __7stringxi,0x0034D5C0"); __asm__(".equ __7stringxRC7stringx,0x0034D4D0"); __asm__(".equ _$_7stringx,0x0034D6E0");
struct text_vtable { char padding[72]; short adjustment; short reserved; void (*change)(void *, stringx *); };
struct TextString { char padding[76]; text_vtable *vtable; };
struct score_layout { char padding[16]; TextString *text; };
extern "C" void set_score(score_layout *self,int score) __asm__("SetScore__16SplitScoreWidgeti");
void set_score(score_layout *self,int score)
{
    __asm__ __volatile__("" : : : "$31");
    stringx source;
    string_from_int(&source,score);
    stringx copy;
    copy_string(&copy,&source);
    text_vtable *table=self->text->vtable;
    table->change((char *)self->text+table->adjustment,&copy);
    destroy_string(&source,2);
}
#endif
