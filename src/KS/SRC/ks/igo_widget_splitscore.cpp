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
