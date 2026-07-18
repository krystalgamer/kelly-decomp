struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: float GetLevelDuration(int index) const; };
float MeterAttackMode::GetLevelDuration(int index) const { return players[index].time; }
