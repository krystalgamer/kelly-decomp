class IconChallenge { public: class Task { void* icon; bool completed; int type; bool watchChain; public: void Reset(); }; };
void IconChallenge::Task::Reset() { icon = 0; completed = false; type = 13; watchChain = false; }
