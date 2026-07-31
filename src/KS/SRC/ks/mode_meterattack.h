#ifndef INCLUDED_MODE_METERATTACK_H
#define INCLUDED_MODE_METERATTACK_H

class kellyslater_controller;

class MeterAttackMode {
public:
    static float TIME_INITIAL;

protected:
    struct PLAYER {
        kellyslater_controller *ks;
        float time;
        int prevScore;
        int score;
        bool attacking;
        int attackScore;
    };

    PLAYER players[2];
    int gameNum;
    int setNum;

    void Attack(int player_index, float time_inc);

public:
    MeterAttackMode();
    ~MeterAttackMode();
    void Update(float time_inc);
    void Reset();
    void BeginAttacking(int player_index);
    void FinishAttacking(int player_index);
    float GetLevelDuration(int player_index) const;
    float GetRemainingTime(int player_index) const;
    int GetScore(int player_index) const;
    bool IsAttacking(int player_index) const;
};

__asm__(".equ _15MeterAttackMode$TIME_INITIAL, 0x00431980");

#endif
