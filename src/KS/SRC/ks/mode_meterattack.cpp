// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00286748)
// 0x00286748 GetScore__C15MeterAttackModei
struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: int GetScore(int index) const; };
int MeterAttackMode::GetScore(int index) const { return players[index].score; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286760)
// 0x00286760 GetLevelDuration__C15MeterAttackModei
struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: float GetLevelDuration(int index) const; };
float MeterAttackMode::GetLevelDuration(int index) const { return players[index].time; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286778)
// 0x00286778 GetRemainingTime__C15MeterAttackModei
struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: float GetRemainingTime(int index) const; };
float MeterAttackMode::GetRemainingTime(int index) const { return players[index].time; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286790)
// 0x00286790 IsAttacking__C15MeterAttackModei
struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: bool IsAttacking(int index) const; };
bool MeterAttackMode::IsAttacking(int index) const { return players[index].attacking; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286518)
// 0x00286518 _$_15MeterAttackMode
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void MeterAttackModeDtor(void *self, int deleting) __asm__("_$_15MeterAttackMode");
void MeterAttackModeDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002866A8)
// 0x002866A8 BeginAttacking__15MeterAttackModei
struct attack_controller { char padding[0x10fc]; int state; };
struct attack_player { attack_controller *controller; char padding[8]; int state; int attacking; char padding2[4]; };
class MeterAttackMode { attack_player players[2]; public: void BeginAttacking(int player); };
void MeterAttackMode::BeginAttacking(int player) { players[player].state = players[player].controller->state; players[player].attacking = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286580)
// 0x00286580 Reset__15MeterAttackMode
class MeterAttackMode {
public:
    static float TIME_INITIAL;
protected:
    struct PLAYER { void *ks; float time; int prevScore; int score; bool attacking; int attackScore; };
    PLAYER players[2];
    int gameNum;
    int setNum;
public:
    void Reset();
};
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002864C8)
#include "KS/SRC/ks/mode_meterattack_shared.h"
// 0x002864C8 __15MeterAttackMode
MeterAttackMode::MeterAttackMode()
{
    float initial_time = TIME_INITIAL;
    Player *player = players;
    do
    {
        player->controller = 0;
        player->time = initial_time;
        player->previous_score = 0;
        player->score = 0;
        player->attacking = false;
        player->attack_score = 0;
        ++player;
    } while ((int)player < (int)(players + 2));
    game_number = 0;
    set_number = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002865C0)
// 0x002865C0 Update__15MeterAttackModef
class MeterAttackMode {
public:
    void Attack(int player,float time);
    void Update(float time);
};
__asm__(".equ Attack__15MeterAttackModeif, 0x002867A8");
void MeterAttackMode::Update(float time) {
    for (int i=0;i<2;i++) Attack(i,time);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002866D8)
// 0x002866D8 FinishAttacking__15MeterAttackModei
struct player{char p0[16];int attacking;char p1[4];};struct mode{player players[2];};extern "C" void attack(mode*,int,float) __asm__("Attack__15MeterAttackModeif");__asm__(".equ Attack__15MeterAttackModeif,0x002867A8");extern "C" void finish(mode*self,int idx) __asm__("FinishAttacking__15MeterAttackModei");void finish(mode*self,int idx){while(self->players[idx].attacking)attack(self,idx,1.0f);}
#endif
