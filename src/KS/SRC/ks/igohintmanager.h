#ifndef INCLUDED_HINTMANAGER_H
#define INCLUDED_HINTMANAGER_H

#include "KS/SRC/game.h"
#include "KS/SRC/ks/FEPanel.h"

class IGOHintManager {
    stringx hint_text;
    TextString *instruction_text;
    float current_hint_time;
    int current_hint;
    bool competition_help;
    int hint_use[15];

public:
    enum {
        StandUp,
        ObjectApproaching,
        CompetitionNeedFace,
        CompetitionNeedTube,
        CompetitionNeedAir,
        LandedSideways,
        SurfingBackwards,
        LostBalance,
        TooHighOnTubeWall,
        LandedDuringTrick,
        StoodTooFarOut,
        DidNotStand,
        TryPaddlingForward,
        HitTubeWall,
        SpunTooMuch,
        NUM_HINTS
    };

    IGOHintManager();
    ~IGOHintManager();
    void Reset();
    void Update(float time_inc);
    void Draw();
    void process_help_string(stringx &destination, const char *source);
    void SetHint(int hint);
};

extern game *g_game_ptr;

#endif
