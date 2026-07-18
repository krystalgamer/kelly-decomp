class Career { public: class Level { char padding[0x10]; bool goals[8]; public: bool IsGoalDone(int index) const; }; };
bool Career::Level::IsGoalDone(int index) const { return goals[index]; }
