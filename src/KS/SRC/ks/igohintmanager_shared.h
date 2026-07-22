#ifndef KELLY_DECOMP_IGO_HINT_MANAGER_SHARED_H
#define KELLY_DECOMP_IGO_HINT_MANAGER_SHARED_H

#include "KS/SRC/game_shared.h"
#include "KS/SRC/ks/FEPanel_shared.h"

class IGOHintManager {
    stringx hint_text;
    TextString *instruction_text;
    float current_hint_time;
    int current_hint;
    bool competition_help;
    int hint_use[15];

public:
    void Draw();
};

extern game *g_game_ptr;

#endif
