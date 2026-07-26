#ifndef KELLY_DECOMP_IGO_WIDGET_SPLITMETER_H
#define KELLY_DECOMP_IGO_WIDGET_SPLITMETER_H

#include "KS/SRC/ks/igo_widget_shared.h"
#include "KS/SRC/ks/specialmeter.h"

class PanelFile;

class SplitMeterWidget : public IGOWidget {
private:
    static const color COLOR_NORMAL;
    static const color COLOR_SPECIAL;

    SpecialMeter* meter;
    PanelQuad* colorPQ;
    PanelQuad* framePQs[3];

public:
    SplitMeterWidget();
    virtual ~SplitMeterWidget();
    virtual void SetDisplay(bool value = true);
    virtual void Init(PanelFile& panel, SpecialMeter* specialMeter, bool left);
    virtual void Update(float time);
    virtual void Draw();
    virtual void SetFillage(float amount);
};

#endif
