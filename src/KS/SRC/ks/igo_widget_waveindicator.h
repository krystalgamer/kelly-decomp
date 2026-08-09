#ifndef INCLUDED_IGO_WIDGET_WAVEINDICATOR_H
#define INCLUDED_IGO_WIDGET_WAVEINDICATOR_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class WaveIndicatorWidget : public IGOWidget {
    PanelQuad *wavePQ[2][3];
    PanelQuad *arrowPQ[2];
    PanelQuad *tonguePQ[2][6];
    PanelQuad *hilitePQ[2][3];
    PanelQuad *heightPQ;
    TextString *heightText;
    TextString *unitText;
    TextString *nextHeightText;
    TextString *nextUnitText;
    int dirIdx;
    float waveIdx;
    float tongueIdx;
    float hiliteTime;
    float fade;
    int fadeDir;
    int state;

public:
    void ShowSurge(bool fade_in);
    void ShowTongue(bool fade_in);
    void Hide(bool fade_out = true);
};

#endif
