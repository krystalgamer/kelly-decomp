#ifndef KELLY_DECOMP_IGO_WIDGET_TIMEATTACK_H
#define KELLY_DECOMP_IGO_WIDGET_TIMEATTACK_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/igo_widget.h"

class PanelQuad;
class TextString;
class PanelFile;
class Font;

class TimeAttackWidget : public IGOWidget {
private:
    PanelQuad* bgPQ;
    float clockSec;
    int clockMin;
    TextString* timeText;
    float attackClockSec;
    int attackClockMin;
    TextString* attackText;
    int score;
    TextString* scoreText;

    stringx GetTimeText(int minutes, float seconds) const;
    stringx GetScoreText(int score) const;

public:
    TimeAttackWidget();
    virtual ~TimeAttackWidget();
    virtual void SetDisplay(bool value = true);
    virtual void Init(PanelFile& panel, Font* numberFont, Font* clockFont);
    virtual void Update(float time);
    virtual void Draw();
    virtual void SetTime(int minutes, float seconds);
    virtual void SetAttackTime(int minutes, float seconds);
    virtual void SetScore(int score);
};

#endif
