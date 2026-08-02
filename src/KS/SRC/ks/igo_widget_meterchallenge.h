#ifndef INCLUDED_IGO_WIDGET_METERCHALLENGE_H
#define INCLUDED_IGO_WIDGET_METERCHALLENGE_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class MeterChallengeWidget : public IGOWidget {
    PanelQuad *objectRoot;
    TextString *Text;
    float hiliteTime;
    float fade;
    int fadeDir;

public:
    void Hide(bool fade_out = true);
};

#endif
