#ifndef KELLY_DECOMP_IGO_WIDGET_PHOTO_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_PHOTO_SHARED_H

#include "KS/SRC/ks/igo_widget.h"
#include "NGL/PS2/ngl_ps2.h"

#pragma interface

class PanelQuad;
class TextString;

class PhotoWidget : public IGOWidget {
    static const float TIME_SHOWN;
    static const float TIME_FADE_IN;
    static const float TIME_FADE_OUT;

    PanelQuad *borderPQ;
    int borderCenterX;
    int borderCenterY;
    int borderZ;
    nglTexture *photoTexture;
    nglQuad photoQuad;
    nglQuad darkQuad;
    float darkFade;
    float fadeOutAlpha;
    float shownTimer;
    bool timed;
    int photoNum;
    TextString *pointText;
    int score;
    int *scorePtr;

    virtual void SetPointText();

public:
    virtual ~PhotoWidget();
    void Show(nglTexture *texture, int *score, int photo_num);
    void Show(
        nglTexture *texture,
        int *score,
        int photo_num,
        float fade
    );
    bool IsShown() const { return photoTexture != 0; }
};

#endif
