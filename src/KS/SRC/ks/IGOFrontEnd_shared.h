#ifndef KELLY_DECOMP_IGO_FRONT_END_SHARED_H
#define KELLY_DECOMP_IGO_FRONT_END_SHARED_H

#include "KS/SRC/ks/igo_widget_grid_shared.h"

class PanelFile;
class stringx;

class SimpleWidget : public IGOWidget {
    int numPQs;
    PanelQuad **pqs;

public:
    explicit SimpleWidget(int size);
    virtual ~SimpleWidget();
    virtual void Init(PanelFile &panel, const stringx *names);
    virtual void Draw();
    virtual void Show(bool enabled = true);
    virtual bool IsShown() const;
};

class IGOFrontEnd {
    char data_before_accomp_widget[0x588];
    SimpleWidget *accompWidget;
    char data_before_grid_widget[0x44];
    GridWidget *gridWidget;

public:
    void ShowAccompBackground(
        bool background_enabled,
        int horizontal_flags,
        int vertical_flags);
};

#endif
