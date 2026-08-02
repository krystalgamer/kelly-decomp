// Matching decompilation blocks selected by generated build shims.


// 0x002860B8 SetDifficulty__14TimeAttackModei
#include "KS/SRC/ks/mode_timeattack.h"

void TimeAttackMode::SetDifficulty(int points) { score_attack_strength = points; score_drop_speed = score_attack_strength * 10; }

// 0x00286298 GetScore__C14TimeAttackModei
#include "KS/SRC/ks/mode_timeattack.h"

int TimeAttackMode::GetScore(int index) const { return players[index].score; }

// 0x002862B0 GetLevelDuration__C14TimeAttackModei
#include "KS/SRC/ks/mode_timeattack.h"

float TimeAttackMode::GetLevelDuration(int index) const { return players[index].time; }

// 0x002862C8 GetRemainingTime__C14TimeAttackModei
#include "KS/SRC/ks/mode_timeattack.h"

float TimeAttackMode::GetRemainingTime(int index) const { return players[index].time; }

// 0x002862E0 IsAttacking__C14TimeAttackModei
#include "KS/SRC/ks/mode_timeattack.h"

bool TimeAttackMode::IsAttacking(int index) const { return players[index].attacking; }

#if defined(KELLY_DECOMP_FUNCTION_00286050)
// 0x00286050 _$_14TimeAttackMode
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void TimeAttackModeDtor(void *self, int deleting) __asm__("_$_14TimeAttackMode");
void TimeAttackModeDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002861F8)
// 0x002861F8 BeginAttacking__14TimeAttackModei
struct attack_controller { char padding[0x10fc]; int state; };
struct attack_player { attack_controller *controller; char padding[8]; int state; int attacking; char padding2[4]; };
class TimeAttackMode { attack_player players[2]; public: void BeginAttacking(int player); };
void TimeAttackMode::BeginAttacking(int player) { players[player].state = players[player].controller->state; players[player].attacking = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285FF0)
// 0x00285FF0 __14TimeAttackMode
struct TimeAttackPlayer {
    void *ks;
    float time;
    int prevScore;
    int score;
    bool attacking;
    int attackScore;
};
extern float TIME_INITIAL;
__asm__(".equ TIME_INITIAL, 0x00431974");
class TimeAttackMode {
    TimeAttackPlayer players[2];
    int gameNum;
    int setNum;
    int scoreAttackStrength;
    int scoreDropSpeed;
public:
    TimeAttackMode();
};
TimeAttackMode::TimeAttackMode() {
    TimeAttackPlayer *player=players;
    TimeAttackPlayer *end=players+2;
    do {
        player->ks=0;
        player->time=TIME_INITIAL;
        player->prevScore=0;
        player->score=0;
        player->attacking=false;
        player->attackScore=0;
        ++player;
    } while ((int)player<(int)end);
    gameNum=0;
    setNum=0;
    scoreAttackStrength=1000;
    scoreDropSpeed=scoreAttackStrength*10;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286110)
// 0x00286110 Update__14TimeAttackModef
class TimeAttackMode {
public:
    void Attack(int player,float time);
    void Update(float time);
};
__asm__(".equ Attack__14TimeAttackModeif, 0x002863A0");
void TimeAttackMode::Update(float time) {
    for (int i=0;i<2;i++) Attack(i,time);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286228)
// 0x00286228 FinishAttacking__14TimeAttackModei
struct player{char p0[16];int attacking;char p1[4];};struct mode{player players[2];};extern "C" void attack(mode*,int,float) __asm__("Attack__14TimeAttackModeif");__asm__(".equ Attack__14TimeAttackModeif,0x002863A0");extern "C" void finish(mode*self,int idx) __asm__("FinishAttacking__14TimeAttackModei");void finish(mode*self,int idx){while(self->players[idx].attacking)attack(self,idx,1.0f);}
#endif
