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

#if defined(KELLY_DECOMP_FUNCTION_00261530)
// 0x00261530 _$_Q213IconChallenge4Icon
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void ChallengeIconDtor(void *self, int deleting) __asm__("_$_Q213IconChallenge4Icon");
void ChallengeIconDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00261090)
// 0x00261090 Update__Q213IconChallenge4TaskP22kellyslater_controllerf
class kellyslater_controller;
class IconChallenge { public: class Task { void *icon; int completed; public: void Update(kellyslater_controller *controller, float dt); void CheckForCompletion(kellyslater_controller *controller); }; };
__asm__(".equ CheckForCompletion__Q213IconChallenge4TaskP22kellyslater_controller, 0x00261108");
void IconChallenge::Task::Update(kellyslater_controller *controller, float dt) { if (!completed) { CheckForCompletion(controller); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
