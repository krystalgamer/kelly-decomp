#ifndef KELLY_DECOMP_PAUSE_MENU_SYSTEM_SHARED_H
#define KELLY_DECOMP_PAUSE_MENU_SYSTEM_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PausePlayerDisplay {
    char state[76];

public:
    virtual ~PausePlayerDisplay();
    virtual void Update(float time_inc);
    virtual void Draw();
};

class PauseGame {
    char state_to_active_players[184];
    int active_players;

public:
    inline int get_num_active_players() const {
        return active_players;
    }
};

class PauseMenuSystem : public FEMenuSystem {
    bool draw;
    char state_to_pause_player[12];
    int pause_player;
    char state_to_player[4];
    PausePlayerDisplay *player;

public:
    virtual void Draw();
};

extern PauseGame *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");

#endif
