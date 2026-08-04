#ifndef INCLUDED_IGO_WIDGET_CAMERA_H
#define INCLUDED_IGO_WIDGET_CAMERA_H

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class CameraWidget : public IGOWidget {
private:
    enum {
        NUM_RETICLE_PQS = 28
    };

    PanelQuad *reticlePQs[NUM_RETICLE_PQS];
    float fade;
    float showTimer;
    float showTime;

    void FadeReticle();

public:
    void Show(float time);
    void Hide();
    void Reset();
    float GetFade() const { return fade; }
};

#endif
