// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00261060)
// 0x00261060 Reset__Q213IconChallenge4Task
class IconChallenge { public: class Task { void* icon; bool completed; int type; bool watchChain; public: void Reset(); }; };
void IconChallenge::Task::Reset() { icon = 0; completed = false; type = 13; watchChain = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00261078)
// 0x00261078 Init__Q213IconChallenge4TaskPQ213IconChallenge4IconQ313IconChallenge4Task4TYPE
class IconChallenge { public: class Icon; class Task { Icon* icon; bool completed; int type; bool watchChain; public: enum TYPE { TYPE_ZERO }; void Init(Icon* value, TYPE task_type); }; };
void IconChallenge::Task::Init(Icon* value, TYPE task_type) { icon = value; type = task_type; completed = false; watchChain = false; }
#endif
