struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class TimeAttackMode { AttackPlayer players[2]; public: float GetRemainingTime(int index) const; };
float TimeAttackMode::GetRemainingTime(int index) const { return players[index].time; }
