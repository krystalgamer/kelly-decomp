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

// 0x002866A8 BeginAttacking__15MeterAttackModei
#include "KS/SRC/ks/kellyslater_controller.h"
#include "KS/SRC/ks/mode_meterattack.h"

void MeterAttackMode::BeginAttacking(int player) {
    players[player].score =
        players[player].ks->get_my_scoreManager().GetScore();
    players[player].attacking = true;
}

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
