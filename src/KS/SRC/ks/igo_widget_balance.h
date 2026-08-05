#ifndef INCLUDED_IGO_WIDGET_BALANCE_H
#define INCLUDED_IGO_WIDGET_BALANCE_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class HorizBalanceWidget : public IGOWidget {
    PanelQuad *meterPQ;
    PanelQuad *arrowPQ;
    PanelQuad *leftKnobPQ;
    PanelQuad *rightKnobPQ;
    PanelQuad *colorLeftPQ;
    PanelQuad *colorRightPQ;
    float meterCenterX;
    bool flashing;

public:
    HorizBalanceWidget();
    ~HorizBalanceWidget();
};

#endif
