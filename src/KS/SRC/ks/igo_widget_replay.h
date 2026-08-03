#ifndef IGO_WIDGET_REPLAY_H
#define IGO_WIDGET_REPLAY_H

#pragma interface

#include "KS/SRC/ks/igo_widget.h"

class PanelQuad;
class TextString;
class PanelFile;
class Font;

class ReplayWidget : public IGOWidget {
public:
    enum VCRButtonState {
        VCR_RESTART,
        VCR_PAUSE,
        VCR_PLAY,
        VCR_SLOW,
        VCR_FASTFORWARD
    };

private:
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
    ReplayWidget();
    virtual ~ReplayWidget();
    virtual void SetDisplay(const bool value = true);
    virtual void Init(PanelFile &panel, Font *font);
    virtual void Update(const float time);
    virtual void Draw();
    virtual void Select(int button);
    virtual void SelectHighlight(int highlight);
    virtual void HighlightLeft();
    virtual void HighlightRight();
    virtual int GetButton();
    virtual int GetHighlight();
};

#endif
