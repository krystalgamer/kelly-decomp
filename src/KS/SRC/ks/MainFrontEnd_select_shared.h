#ifndef KELLY_DECOMP_MAIN_FRONT_END_SELECT_SHARED_H
#define KELLY_DECOMP_MAIN_FRONT_END_SELECT_SHARED_H

#include "KS/SRC/ks/MainFrontEnd_shared.h"
#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"

enum game_mode_t {
    GAME_MODE_CAREER,
    GAME_MODE_FREESURF_INFINITE,
    GAME_MODE_FREESURF_HIGHSCORE,
    GAME_MODE_FREESURF_ICON,
    GAME_MODE_PRACTICE,
    GAME_MODE_TIME_ATTACK,
    GAME_MODE_METER_ATTACK,
    GAME_MODE_SEA_HORSE,
    GAME_MODE_HEAD_TO_HEAD,
    GAME_MODE_PUSH
};

class FEManager {
    char data_before_tmp_game_mode[0x1566c];

public:
    game_mode_t tmp_game_mode;
};

class MultiSubMenu : public FEMenu {
public:
    enum {
        SubEasyEntry,
        SubMediumEntry,
        SubHardEntry,
        SubEnd
    };

    GraphicalMenuSystem *sys;
    FEMenuEntry *entry[SubEnd];
    TextString *difficulty;
    int push[SubEnd];
    int time[SubEnd];
};

#endif
