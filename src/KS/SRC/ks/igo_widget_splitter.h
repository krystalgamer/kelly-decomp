#ifndef INCLUDED_IGO_WIDGET_SPLITTER_H
#define INCLUDED_IGO_WIDGET_SPLITTER_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class SplitterWidget : public IGOWidget {
    PanelQuad *barPQ;

public:
    SplitterWidget();
    virtual ~SplitterWidget();
    void Init(PanelFile &panel);
};

#endif
