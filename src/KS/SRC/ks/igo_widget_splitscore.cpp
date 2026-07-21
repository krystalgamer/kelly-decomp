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
