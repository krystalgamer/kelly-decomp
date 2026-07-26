#ifndef KELLY_DECOMP_GAME_RETRY_SHARED_H
#define KELLY_DECOMP_GAME_RETRY_SHARED_H

class ScoringManager {
public:
    void Reset();
};

class retry_controller {
    char data_before_score_manager[0x10F8];
    ScoringManager score_manager;

public:
    inline ScoringManager &get_my_scoreManager() {
        return score_manager;
    }
};

class retry_world {
    char data_before_controllers[0xF8];
    retry_controller *controllers[2];

public:
    inline retry_controller *get_ks_controller(int player) {
        return controllers[player];
    }
};

class TimeAttackMode {
public:
    void Reset();
};

class MeterAttackMode {
public:
    void Reset();
};

class HeadToHeadMode {
public:
    void Reset();
};

struct RetryPlayMode {
    TimeAttackMode *timeAttack;
    MeterAttackMode *meterAttack;
    HeadToHeadMode *headToHead;
    void *push;
};

class game {
    char data_before_world[0xC];
    retry_world *the_world;
    char data_before_play_mode[0x68];
    RetryPlayMode play_mode;

public:
    void retry_mode(bool from_map);
    void retry_level(bool from_map);
};

class RetryIGO {
public:
    void OnModeReset() __asm__("OnModeReset__11IGOFrontEnd");
};

struct RetryFrontendManager {
    char data_before_igo[0x156D8];
    RetryIGO *IGO;
};

extern RetryFrontendManager frontendmanager;
extern RetryIGO *frontend_igo;

__asm__(".equ Reset__14ScoringManager, 0x00246FE8");
__asm__(".equ Reset__14TimeAttackMode, 0x002860D0");
__asm__(".equ Reset__15MeterAttackMode, 0x00286580");
__asm__(".equ Reset__14HeadToHeadMode, 0x00286900");
__asm__(".equ retry_level__4gameb, 0x002839D0");
__asm__(".equ OnModeReset__11IGOFrontEnd, 0x00175508");
__asm__(".equ frontendmanager, 0x003D2050");
__asm__(".equ frontend_igo, 0x003E7728");

#endif
