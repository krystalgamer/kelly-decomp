#ifndef KELLY_DECOMP_MODE_TIMEATTACK_SHARED_H
#define KELLY_DECOMP_MODE_TIMEATTACK_SHARED_H

class kellyslater_controller;

class TimeAttackMode {
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
    int score_attack_strength;
    int score_drop_speed;

    void Attack(int player_index, float delta_time);

public:
    TimeAttackMode();
    ~TimeAttackMode();
    bool IsDoneAttacking(int player_index) const;
};

#endif
