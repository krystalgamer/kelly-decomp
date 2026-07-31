#ifndef KELLY_DECOMP_FAN_METER_WIDGET_SHARED_H
#define KELLY_DECOMP_FAN_METER_WIDGET_SHARED_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

#pragma interface

class PanelFile;

class FanMeterWidget : public IGOWidget {
    int numSections;
    PanelQuad **sectionPQs;
    PanelQuad *arrowPQ;
    float size;
    int centerX;
    int centerY;
    float angle;

public:
    virtual ~FanMeterWidget();
    virtual void SetDisplay(bool display = true);
    virtual void Init(PanelFile &panel);
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual void Show(bool shown);
    virtual void SetArrowPos(float value);
    virtual void SetSize(float value);
};

#endif
