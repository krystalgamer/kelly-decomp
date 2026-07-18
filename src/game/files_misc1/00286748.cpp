struct AttackPlayer { void* controller; float time; int previous_score; int score; bool attacking; char trailing[4]; };
class MeterAttackMode { AttackPlayer players[2]; public: int GetScore(int index) const; };
int MeterAttackMode::GetScore(int index) const { return players[index].score; }
