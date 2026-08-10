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
#include "KS/SRC/ks/igo_widget_splitter.h"

extern const char divider_line[];
__asm__(".equ GetPointer__9PanelFilePCc,0x00152F88");
__asm__(".equ divider_line,0x004C0E80");
void SplitterWidget::Init(PanelFile &panel)
{
    barPQ = panel.GetPointer(divider_line);
    barPQ->TurnOn(true);
    SetDisplay(true);
}
#endif
