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

#if defined(KELLY_DECOMP_FUNCTION_002610B8)
// 0x002610B8 Spawn__Q213IconChallenge4Task
class IconChallenge { public: class Icon { public: void Spawn(); }; class Task { Icon *icon; public: void Spawn(); }; };
__asm__(".equ Spawn__Q213IconChallenge4Icon, 0x00261BB0");
void IconChallenge::Task::Spawn() { if (icon) { icon->Spawn(); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002610E0)
// 0x002610E0 Despawn__Q213IconChallenge4Task
class IconChallenge { public: class Icon { public: void Despawn(); }; class Task { Icon *icon; public: void Despawn(); }; };
__asm__(".equ Despawn__Q213IconChallenge4Icon, 0x00261C10");
void IconChallenge::Task::Despawn() { if (icon) { icon->Despawn(); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260C90)
// 0x00260C90 Spawn__Q213IconChallenge11Arrangement
class IconChallenge { public: class Sequence { char storage[0xa8]; public: void Spawn(); }; class Arrangement { int field0; int currentSequence; Sequence sequences[1]; public: void Spawn(); }; };
__asm__(".equ Spawn__Q213IconChallenge8Sequence, 0x00260F08");
void IconChallenge::Arrangement::Spawn() { sequences[currentSequence].Spawn(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260D58)
// 0x00260D58 GetCurrentSequence__CQ213IconChallenge11Arrangement
class IconChallenge {
public:
    struct Sequence {
        char data[0xA8];
    };

    class Arrangement {
        int numSequences;
        int currSequenceIdx;
        Sequence sequences[1];

    public:
        const Sequence *GetCurrentSequence() const;
    };
};

const IconChallenge::Sequence *
IconChallenge::Arrangement::GetCurrentSequence() const
{
    if (currSequenceIdx >= 0 && currSequenceIdx < numSequences)
        return &sequences[currSequenceIdx];
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260A50)
// 0x00260A50 OnEvent__13IconChallenge5EVENTii
enum EVENT { EVT_SCORING_SERIES_END = 6 };
class kellyslater_controller { char padding[0x1674]; int player_num; public: int get_player_num() const { return player_num; } };
class IconChallenge {
public:
    class Arrangement { public: void OnEvent(EVENT event, kellyslater_controller *controller, int param); };
private:
    void *field0;
    kellyslater_controller *ksctrl;
    char padding[8];
    Arrangement arrangement;
public:
    void OnEvent(EVENT event, int param1, int param2);
};
asm(".equ OnEvent__Q213IconChallenge11Arrangement5EVENTP22kellyslater_controlleri, 0x00260CC8");
void IconChallenge::OnEvent(EVENT event, int param1, int param2)
{
    if (param1 != ksctrl->get_player_num())
        return;
    if (event == EVT_SCORING_SERIES_END)
        arrangement.OnEvent(event, ksctrl, param2);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260F08)
// 0x00260F08 Spawn__Q213IconChallenge8Sequence
class IconChallenge {
public:
    class Task { char data[16]; public: void Spawn(); };
    class Sequence {
        int numTasks;
        Task tasks[10];
        bool completed;
    public:
        void Spawn();
    };
};
__asm__(".equ Spawn__Q213IconChallenge4Task, 0x002610B8");
void IconChallenge::Sequence::Spawn() {
    for (int i=0;i<numTasks;i++) tasks[i].Spawn();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260F68)
// 0x00260F68 Despawn__Q213IconChallenge8Sequence
class IconChallenge {
public:
    class Task { char data[16]; public: void Despawn(); };
    class Sequence {
        int numTasks;
        Task tasks[10];
        bool completed;
    public:
        void Despawn();
    };
};
__asm__(".equ Despawn__Q213IconChallenge4Task, 0x002610E0");
void IconChallenge::Sequence::Despawn() {
    for (int i=0;i<numTasks;i++) tasks[i].Despawn();
}
#endif
