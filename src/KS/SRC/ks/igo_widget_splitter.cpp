// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00168D28)
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

#pragma interface

class SplitterWidget : public IGOWidget {
    PanelQuad *barPQ;

public:
    virtual void Draw();
};

__asm__(".equ Draw__9IGOWidget, 0x00164668");

// 0x00168D28 Draw__14SplitterWidget
void SplitterWidget::Draw()
{
    IGOWidget::Draw();

    if (!display)
        return;

    barPQ->Draw(0);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168C20)
// 0x00168C20 __14SplitterWidget
#include "KS/SRC/ks/igo_widget_splitter.h"

__asm__(".equ __9IGOWidget, 0x00164608");
__asm__(".equ _vt$14SplitterWidget, 0x004DB4C0");

SplitterWidget::SplitterWidget()
{
    barPQ = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168CA0)
// 0x00168CA0 Init__14SplitterWidgetR9PanelFile
struct panel_vtable { char padding[24]; short turn_adjustment; short reserved0; void (*turn_on)(void *, bool); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
class PanelFile { public: PanelQuad *GetPointer(const char *name); };
extern const char divider_line[];
__asm__(".equ GetPointer__9PanelFilePCc,0x00152F88");
__asm__(".equ divider_line,0x004C0E80");
struct widget_vtable { char padding[16]; short display_adjustment; short reserved; void (*set_display)(void *, bool); };
class SplitterWidget {
    bool display;
    widget_vtable *vtable;
    PanelQuad *barPQ;
public:
    void Init(PanelFile &panel);
};
void SplitterWidget::Init(PanelFile &panel)
{
    barPQ = panel.GetPointer(divider_line);
    panel_vtable *panel_table = barPQ->vtable;
    panel_table->turn_on((char *)barPQ + panel_table->turn_adjustment, true);
    widget_vtable *table = vtable;
    table->set_display((char *)this + table->display_adjustment, true);
}
#endif
