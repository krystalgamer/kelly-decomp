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

// 0x002861F8 BeginAttacking__14TimeAttackModei
#include "KS/SRC/ks/kellyslater_controller.h"
#include "KS/SRC/ks/mode_timeattack.h"

void TimeAttackMode::BeginAttacking(int player) {
    players[player].score =
        players[player].controller->get_my_scoreManager().GetScore();
    players[player].attacking = true;
}

#if defined(KELLY_DECOMP_FUNCTION_00285FF0)
// 0x00285FF0 __14TimeAttackMode
#include "KS/SRC/ks/mode_timeattack.h"

extern float TIME_INITIAL;
__asm__(".equ TIME_INITIAL, 0x00431974");
TimeAttackMode::TimeAttackMode() {
    Player *player=players;
    Player *end=players+2;
    do {
        player->controller=0;
        player->time=TIME_INITIAL;
        player->previous_score=0;
        player->score=0;
        player->attacking=false;
        player->attack_score=0;
        ++player;
    } while ((int)player<(int)end);
    game_number=0;
    set_number=0;
    score_attack_strength=1000;
    score_drop_speed=score_attack_strength*10;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286110)
// 0x00286110 Update__14TimeAttackModef
#include "KS/SRC/ks/mode_timeattack.h"

__asm__(".equ Attack__14TimeAttackModeif, 0x002863A0");
void TimeAttackMode::Update(float time) {
    for (int i=0;i<2;i++) Attack(i,time);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286228)
// 0x00286228 FinishAttacking__14TimeAttackModei
struct player{char p0[16];int attacking;char p1[4];};struct mode{player players[2];};extern "C" void attack(mode*,int,float) __asm__("Attack__14TimeAttackModeif");__asm__(".equ Attack__14TimeAttackModeif,0x002863A0");extern "C" void finish(mode*self,int idx) __asm__("FinishAttacking__14TimeAttackModei");void finish(mode*self,int idx){while(self->players[idx].attacking)attack(self,idx,1.0f);}
#endif
