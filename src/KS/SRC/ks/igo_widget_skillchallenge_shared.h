#ifndef KELLY_DECOMP_IGO_WIDGET_SKILLCHALLENGE_SHARED_H
#define KELLY_DECOMP_IGO_WIDGET_SKILLCHALLENGE_SHARED_H

#include "KS/SRC/ks/FEPanel_shared.h"

class IGOWidget {
protected:
    bool display;

public:
    virtual ~IGOWidget();
    virtual void SetDisplay(bool enabled = true);
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual bool GetDisplay() const;
};

class SkillChallengeWidget : public IGOWidget {
private:
    static const float TIME_FADE;
    static const float TIME_ANIMATE;
    static const float SPEED_HILITE_FLASH;

    enum {
        STATE_NONE,
        STATE_FACE,
        STATE_FACE_SCORE,
        STATE_AIR,
        STATE_AIR_SCORE,
        STATE_TUBE,
        STATE_TUBE_SCORE,
        STATE_PHOTO1,
        STATE_PHOTO2,
        STATE_PHOTO3
    };

    PanelQuad *objectRoot;
    TextString *skillText;
    TextString *pointText;
    float hiliteTime;
    float fade;
    int fadeDir;
    int state;
    int num_photos_taken;
    float timer;
    int points;

public:
    SkillChallengeWidget(int type);
    virtual ~SkillChallengeWidget();
    virtual void SetDisplay(bool enabled = true);
    void Init(
        PanelFile &panel,
        Font *numberfont,
        Font *textfont,
        const color32 &textColor1,
        const color32 &textColor2
    );
    virtual void Update(float time_inc);
    virtual void Draw();
    void Hide(bool fade_out = true);
    void Show(bool fade_in = true);
    bool IsHiding() const { return fadeDir == -1; }
};

extern const char challenge_meter_name[];

__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");
__asm__(".equ challenge_meter_name, 0x004C0B08");

#endif
