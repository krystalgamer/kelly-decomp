#ifndef MODE_TIMEATTACK_H
#define MODE_TIMEATTACK_H

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
    void SetDifficulty(int points);
    int GetScore(int player_index) const;
    float GetLevelDuration(int player_index) const;
    float GetRemainingTime(int player_index) const;
    bool IsAttacking(int player_index) const;
    bool IsDoneAttacking(int player_index) const;
    void BeginAttacking(int player_index);
    void Update(float time_inc);
};

#endif
