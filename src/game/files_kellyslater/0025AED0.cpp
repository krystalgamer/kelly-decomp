class Career { char padding[0x80]; bool goal_passed[8]; public: void OnGoalReDone(int level, int goal); };
void Career::OnGoalReDone(int level, int goal) { goal_passed[goal] = true; }
