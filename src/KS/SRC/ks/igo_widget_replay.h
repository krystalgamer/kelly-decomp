#ifndef IGO_WIDGET_REPLAY_H
#define IGO_WIDGET_REPLAY_H

#pragma interface

#include "KS/SRC/ks/igo_widget.h"

class PanelQuad;
class TextString;

class ReplayWidget : public IGOWidget {
    int vcrButton;
    int vcrButtonHL;
    PanelQuad *vcrPQ;
    PanelQuad *vcrHLPQ;
    PanelQuad *vcrBGPQ;
    PanelQuad *restartPQ;
    PanelQuad *restartOffPQ;
    PanelQuad *restartHLPQ;
    PanelQuad *pausePQ;
    PanelQuad *pauseOffPQ;
    PanelQuad *pauseHLPQ;
    PanelQuad *playPQ;
    PanelQuad *playOffPQ;
    PanelQuad *playHLPQ;
    PanelQuad *slowPQ;
    PanelQuad *slowOffPQ;
    PanelQuad *slowHLPQ;
    PanelQuad *fastforwardPQ;
    PanelQuad *fastforwardOffPQ;
    PanelQuad *fastforwardHLPQ;
    TextString *pauseText;
    float highlight_intensity;
    float highlight_timer;

public:
    virtual int GetButton();
    virtual int GetHighlight();
};

#endif
