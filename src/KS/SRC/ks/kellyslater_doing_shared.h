#ifndef KELLY_DECOMP_KELLYSLATER_DOING_SHARED_H
#define KELLY_DECOMP_KELLYSLATER_DOING_SHARED_H

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

enum {
    SUPER_STATE_WIPEOUT = 3,
    SUPER_STATE_CPU_CONTROLLED = 8
};

class game {
    char data_before_game_mode[0x74];
    game_mode_t game_mode;

public:
    inline game_mode_t get_game_mode() const { return game_mode; }
};

class board_controller {
    char data_before_in_air[0x420];
    int in_air;

public:
    inline bool InAir() const { return in_air; }
};

class SpecialMeter {
public:
    bool CanRegionLink() const;
};

class kellyslater_controller {
    char data_before_super_state[0x38];
    int super_state;
    char data_before_board_controller[4];
    board_controller my_board_controller;
    char data_before_special_meter[0x1648 - 0x464];
    SpecialMeter special_meter;
    char data_before_doing_special[0x16b8 - 0x1649];
    int doing_special_trick;
    char data_before_did_celebration[0x1b7c - 0x16bc];
    int did_celebration;

public:
    bool IsDoingSomething();
    inline SpecialMeter *get_special_meter() { return &special_meter; }
    inline bool IsDoingSpecialTrick() const { return doing_special_trick; }
};

extern game *g_game_ptr;

__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ CanRegionLink__C12SpecialMeter, 0x002510F0");

#endif
