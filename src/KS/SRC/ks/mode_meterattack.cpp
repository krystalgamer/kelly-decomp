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
