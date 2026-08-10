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
    char data_before_meter_center[12];
    float meterCenterX;
    bool flashing;
    int balanceState;

public:
    HorizBalanceWidget();
    ~HorizBalanceWidget();
};

#endif
