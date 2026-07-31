#ifndef KELLY_DECOMP_IGO_WIDGET_GRID_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_GRID_SHARED_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

#pragma interface

class PanelFile;

class GridWidget : public IGOWidget {
public:
    enum {
        NUM_H_LINES = 15,
        NUM_V_LINES = 4
    };

private:
    PanelQuad *hLinePQs[NUM_H_LINES];
    PanelQuad *vLinePQs[NUM_V_LINES];

public:
    GridWidget();
    virtual void Init(PanelFile &panel);
    virtual void Draw();
    virtual void ShowHLines(int flags);
    virtual void ShowVLines(int flags);
    virtual void Hide();
};

#endif
