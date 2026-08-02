// Matching decompilation blocks selected by generated build shims.


// 0x00286748 GetScore__C15MeterAttackModei
#include "KS/SRC/ks/mode_meterattack.h"

int MeterAttackMode::GetScore(int index) const { return players[index].score; }

// 0x00286760 GetLevelDuration__C15MeterAttackModei
#include "KS/SRC/ks/mode_meterattack.h"

float MeterAttackMode::GetLevelDuration(int index) const { return players[index].time; }

// 0x00286778 GetRemainingTime__C15MeterAttackModei
#include "KS/SRC/ks/mode_meterattack.h"

float MeterAttackMode::GetRemainingTime(int index) const { return players[index].time; }

// 0x00286790 IsAttacking__C15MeterAttackModei
#include "KS/SRC/ks/mode_meterattack.h"

bool MeterAttackMode::IsAttacking(int index) const { return players[index].attacking; }

// 0x00286518 _$_15MeterAttackMode
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void MeterAttackModeDtor(void *self, int deleting) __asm__("_$_15MeterAttackMode");
void MeterAttackModeDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002866A8 BeginAttacking__15MeterAttackModei
struct attack_controller { char padding[0x10fc]; int state; };
struct attack_player { attack_controller *controller; char padding[8]; int state; int attacking; char padding2[4]; };
struct MeterAttackLayout { attack_player players[2]; };
extern "C" void begin_meter_attack(MeterAttackLayout *self, int player)
    __asm__("BeginAttacking__15MeterAttackModei");
void begin_meter_attack(MeterAttackLayout *self, int player) { self->players[player].state = self->players[player].controller->state; self->players[player].attacking = 1; }

// 0x00286580 Reset__15MeterAttackMode
#include "KS/SRC/ks/mode_meterattack.h"
asm(".equ _15MeterAttackMode$TIME_INITIAL, 0x00431980");
void MeterAttackMode::Reset()
{
    float initial = TIME_INITIAL;
    char *player = (char *)&players[0].attackScore;
    for (int i = 0; i < 2; i++, player += sizeof(PLAYER)) {
        *(float *)(player - 16) = initial;
        *(int *)(player - 12) = 0;
        *(int *)(player - 8) = 0;
        *(int *)(player - 4) = 0;
        *(int *)player = 0;
    }
    gameNum = 0;
    setNum = 0;
}

// 0x002864C8 __15MeterAttackMode
#include "KS/SRC/ks/mode_meterattack.h"
MeterAttackMode::MeterAttackMode()
{
    float initial_time = TIME_INITIAL;
    PLAYER *player = players;
    do
    {
        player->ks = 0;
        player->time = initial_time;
        player->prevScore = 0;
        player->score = 0;
        player->attacking = false;
        player->attackScore = 0;
        ++player;
    } while ((int)player < (int)(players + 2));
    gameNum = 0;
    setNum = 0;
}

// 0x002865C0 Update__15MeterAttackModef
#include "KS/SRC/ks/mode_meterattack.h"
__asm__(".equ Attack__15MeterAttackModeif, 0x002867A8");
void MeterAttackMode::Update(float time) {
    for (int i=0;i<2;i++) Attack(i,time);
}

// 0x002866D8 FinishAttacking__15MeterAttackModei
struct player{char p0[16];int attacking;char p1[4];};struct mode{player players[2];};extern "C" void attack(mode*,int,float) __asm__("Attack__15MeterAttackModeif");__asm__(".equ Attack__15MeterAttackModeif,0x002867A8");extern "C" void finish(mode*self,int idx) __asm__("FinishAttacking__15MeterAttackModei");void finish(mode*self,int idx){while(self->players[idx].attacking)attack(self,idx,1.0f);}

// 0x00286678 BeginCombat__15MeterAttackMode
struct controller_layout { char padding[0x10fc]; int score; };
struct player_layout { controller_layout *ks; char padding[8]; int score; char tail[8]; };
class MeterAttackMode { player_layout players[2]; public: void BeginCombat(); };
void MeterAttackMode::BeginCombat(){__asm__ __volatile__("addiu $5,$4,48\nlw $2,0($4)\n1:\nlw $3,4348($2)\nsw $3,12($4)\naddiu $4,$4,24\nslt $2,$4,$5\nnop\n.word 0x5440fffa\n.word 0x8c820000" : : : "$2","$3","$5","memory");}
