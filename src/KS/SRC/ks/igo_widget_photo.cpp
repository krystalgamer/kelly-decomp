// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016AA78)
// 0x0016AA78 SetDisplay__11PhotoWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class PhotoWidget : public IGOWidget { public: void SetDisplay(bool value); };
void PhotoWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016AB70)
// 0x0016AB70 Reset__11PhotoWidget
class PhotoWidget { char padding0[0x18]; void *photoTexture; char padding1[0xc8]; float darkFade; float fadeOutAlpha; float shownTimer; int timed; int photoNum; void *pointText; int score; int *scorePtr; public: void Reset(); };
void PhotoWidget::Reset() { photoTexture = 0; scorePtr = 0; score = 0; photoNum = 0; shownTimer = 0.0f; darkFade = 1.0f; fadeOutAlpha = 1.0f; timed = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016AA10)
// 0x0016AA10 _$_11PhotoWidget
struct text_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct TextString { char padding[76]; text_vtable *vtable; };
extern "C" void destroy_base(void *, int) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget,0x00164628");
__asm__(".equ derived_vtable,0x004DB3F0");
struct widget_layout { char padding[4]; const void *vtable; char padding2[240]; TextString *text; };
extern "C" void destroy_widget(widget_layout *self, int deleting) __asm__("_$_11PhotoWidget");
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
