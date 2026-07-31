#ifndef INCLUDED_IGO_WIDGET_PHOTO_H
#define INCLUDED_IGO_WIDGET_PHOTO_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"
#include "NGL/PS2/ngl_ps2.h"

class PhotoWidget : public IGOWidget {
private:
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
    PhotoWidget();
    virtual ~PhotoWidget();
    virtual void SetDisplay(bool enabled = true);
    void Init(PanelQuad *quad, Font *font);
    void Reset();
    virtual void Update(float time_inc);
    virtual void Draw();
    void Show(nglTexture *texture, int *score, int photo_num);
    void Show(
        nglTexture *texture,
        int *score,
        int photo_num,
        float fade);
    void Hide();
    void SetPosition(int x, int y, int z);
    bool IsShown() const { return photoTexture != 0; }
};

#endif
