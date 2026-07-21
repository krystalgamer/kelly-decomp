#ifndef KELLY_DECOMP_IGO_WIDGET_ANALOGCLOCK_H
#define KELLY_DECOMP_IGO_WIDGET_ANALOGCLOCK_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/igo_widget.h"

class PanelQuad;
class PanelQuad4;
class TextString;
class PanelFile;
class Font;

class AnalogClockWidget : public IGOWidget {
private:
    int clockMin;
    float clockSec;
    float elapsedInterval;
    PanelQuad* clockHandPQ;
    PanelQuad* clockFramePQ;
    PanelQuad* clockFacePQ;
    PanelQuad* num1PQ;
    PanelQuad* num2PQ;
    PanelQuad* num3PQ;
    PanelQuad* num4PQ;
    PanelQuad* num5PQ;
    PanelQuad* infPQ;
    PanelQuad4* timeSegs[60];
    float handCenterX;
    float handCenterY;
    int score;
    TextString* scoreText;

    stringx GetScoreText(int score) const;

public:
    AnalogClockWidget();
    virtual ~AnalogClockWidget();
    virtual void SetDisplay(bool value = true);
    virtual void Init(PanelFile& panel, Font* numberFont);
    virtual void Update(float time);
    virtual void Draw();
    virtual void SetScore(int score);
    virtual void ShowElapsedTime(float time);
    virtual void HideElapsedTime();
};

#endif
