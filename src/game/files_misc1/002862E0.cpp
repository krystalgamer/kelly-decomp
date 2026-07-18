struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class TimeAttackMode { AttackPlayer players[2]; public: bool IsAttacking(int index) const; };
bool TimeAttackMode::IsAttacking(int index) const { return players[index].attacking; }
