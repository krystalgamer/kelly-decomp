#ifndef INCLUDED_IGO_WIDGET_SIMPLE_H
#define INCLUDED_IGO_WIDGET_SIMPLE_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

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

#endif
