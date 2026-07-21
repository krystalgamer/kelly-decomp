#ifndef INCLUDED_TUTORIALMANAGER_H
#define INCLUDED_TUTORIALMANAGER_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/eventmanager.h"
#include "KS/SRC/ks/trickdata.h"

class nglTexture;
class BoxText;

typedef unsigned int nslSoundId;

class IGOTutorialManager : public EventRecipient {
private:
    enum {
        ICON_BUTTON_ARROW,
        ICON_BUTTON_CROSS,
        ICON_BUTTON_CIRCLE,
        ICON_BUTTON_TRIANGLE,
        ICON_BUTTON_SQUARE,
        ICON_BUTTON_PLUS,
        ICON_BUTTON_COMMA,
        ICON_NUM_BUTTONS
    };

    nglTexture *buttonTexture[ICON_NUM_BUTTONS];
    bool finished;
    bool first_step;
    int current_step;
    float current_step_time;
    int last_step;
    bool air_trick_in_chain;
    bool face_trick_in_chain;
    nslSoundId current_VO;
    int current_trick;
    int current_gap;
    bool needs_to_be_in_tube;
    bool is_perfect;
    bool show_advancement_text;
    bool show_hint_text;
    stringx ins_text;

public:
    IGOTutorialManager();
    ~IGOTutorialManager();
    void Reset();
    void SetTutorialSection(int tutorial_level);
    void Update(float dt);
    void Draw();
    void process_help_string(stringx &dest, const char *source);
    void SetCurrentTrick(int trick_num);
    void SetCurrentGap(int gap_num);
    void EndChain();
    nslSoundId play_sound(const char *name);
    virtual void OnEvent(
        EVENT event,
        int param1 = 0,
        int param2 = 0
    );
    void SetAdvancementText(bool text_on);
    nslSoundId getCurrentSound();

    stringx help_text;
    stringx button_text;
    BoxText *instruction_text;

    bool Finished();
    bool AlmostFinished();
    void PlayCurrentVO(bool intro = false);
    void StopCurrentVO();
    int WaveIndicatorType();
};

#endif
