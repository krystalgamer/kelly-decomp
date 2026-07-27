#ifndef KELLY_DECOMP_MAIN_FRONT_END_SELECT_SHARED_H
#define KELLY_DECOMP_MAIN_FRONT_END_SELECT_SHARED_H

#include "KS/SRC/ks/MainFrontEnd_shared.h"
#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"
#include "KS/SRC/ks/game_mode_shared.h"

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
