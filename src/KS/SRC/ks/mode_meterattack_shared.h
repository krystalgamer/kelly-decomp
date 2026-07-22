#ifndef KELLY_DECOMP_MODE_METERATTACK_SHARED_H
#define KELLY_DECOMP_MODE_METERATTACK_SHARED_H

class kellyslater_controller;

class MeterAttackMode {
public:
    static float TIME_INITIAL;

protected:
    struct Player {
        kellyslater_controller *controller;
        float time;
        int previous_score;
        int score;
        bool attacking;
        int attack_score;
    };

    Player players[2];
    int game_number;
    int set_number;

public:
    MeterAttackMode();
    ~MeterAttackMode();
};

__asm__(".equ _15MeterAttackMode$TIME_INITIAL, 0x00431980");

#endif
