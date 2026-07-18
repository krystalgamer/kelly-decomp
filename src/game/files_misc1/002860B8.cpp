class TimeAttackMode { char padding[0x38]; int scoreAttackStrength; int scoreDropSpeed; public: void SetDifficulty(int points); };
void TimeAttackMode::SetDifficulty(int points) { scoreAttackStrength = points; scoreDropSpeed = scoreAttackStrength * 10; }
