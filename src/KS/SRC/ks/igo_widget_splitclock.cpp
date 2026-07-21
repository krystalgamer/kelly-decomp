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
