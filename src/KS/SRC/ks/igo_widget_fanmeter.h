#ifndef INCLUDED_IGO_WIDGET_FANMETER_H
#define INCLUDED_IGO_WIDGET_FANMETER_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class FanMeterWidget : public IGOWidget {
private:
    int numSections;
    PanelQuad4 **sectionPQs;
    PanelQuad *arrowPQ;
    float size;
    int centerX;
    int centerY;
    float angle;

public:
    FanMeterWidget();
    virtual ~FanMeterWidget();
    virtual void SetDisplay(bool enabled = true);
    virtual void Init(PanelFile &panel);
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual void Show(bool shown);
    virtual void SetArrowPos(float position);
    virtual void SetSize(float size);
};

#endif
