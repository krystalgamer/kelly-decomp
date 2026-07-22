#ifndef KELLY_DECOMP_GAME_SHARED_H
#define KELLY_DECOMP_GAME_SHARED_H

#include "KS/SRC/commands_shared.h"
#include "KS/SRC/inputmgr_shared.h"

class game {
public:
    bool was_start_pressed() const;
    bool was_A_pressed() const;
    bool was_B_pressed() const;
    void advance_state_paused(float time_inc);
    void frame_advance_game_overlays(float time_inc);
};

__asm__(".equ frame_advance_game_overlays__4gamef, 0x00284568");

#endif
