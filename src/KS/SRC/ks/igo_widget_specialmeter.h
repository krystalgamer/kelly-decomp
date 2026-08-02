#ifndef INCLUDED_IGO_WIDGET_SPECIALMETER_H
#define INCLUDED_IGO_WIDGET_SPECIALMETER_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class SpecialMeter;

class SpecialMeterWidget : public IGOWidget {
    SpecialMeter *meter;
    PanelQuad *bgPQ;
    PanelQuad *colorPQ;
    PanelQuad *fgPQ;
    int flashDir;
    float flashAmt;

public:
    virtual ~SpecialMeterWidget();
    virtual void SetFillage(float amount);
};

#endif
