// Matching decompilation blocks selected by generated build shims.


// 0x00261060 Reset__Q213IconChallenge4Task
#include "KS/SRC/ks/challenge_icon.h"

void IconChallenge::Task::Reset() { icon = 0; completed = false; type = TYPE_NONE; watchChain = false; }

// 0x00261078 Init__Q213IconChallenge4TaskPQ213IconChallenge4IconQ313IconChallenge4Task4TYPE
#include "KS/SRC/ks/challenge_icon.h"

void IconChallenge::Task::Init(Icon* value, TYPE task_type) { icon = value; type = task_type; completed = false; watchChain = false; }

// 0x00261090 Update__Q213IconChallenge4TaskP22kellyslater_controllerf
#include "KS/SRC/ks/challenge_icon.h"

void check_task(IconChallenge::Task *task, kellyslater_controller *controller)
    __asm__("CheckForCompletion__Q213IconChallenge4TaskP22kellyslater_controller");
__asm__(".equ CheckForCompletion__Q213IconChallenge4TaskP22kellyslater_controller, 0x00261108");
void IconChallenge::Task::Update(kellyslater_controller *controller, float dt) { if (!completed) { void (*check)(IconChallenge::Task *, kellyslater_controller *) = check_task; check(this, controller); } }

// 0x002610B8 Spawn__Q213IconChallenge4Task
#include "KS/SRC/ks/challenge_icon.h"

void spawn_icon(IconChallenge::Icon *icon)
    __asm__("Spawn__Q213IconChallenge4Icon");
__asm__(".equ Spawn__Q213IconChallenge4Icon, 0x00261BB0");
void IconChallenge::Task::Spawn() { if (icon) { void (*spawn)(IconChallenge::Icon *) = spawn_icon; spawn(icon); } }

// 0x002610E0 Despawn__Q213IconChallenge4Task
#include "KS/SRC/ks/challenge_icon.h"

void despawn_icon(IconChallenge::Icon *icon)
    __asm__("Despawn__Q213IconChallenge4Icon");
__asm__(".equ Despawn__Q213IconChallenge4Icon, 0x00261C10");
void IconChallenge::Task::Despawn() { if (icon) { void (*despawn)(IconChallenge::Icon *) = despawn_icon; despawn(icon); } }

// 0x00260C90 Spawn__Q213IconChallenge11Arrangement
#include "KS/SRC/ks/challenge_icon.h"

void spawn_sequence(IconChallenge::Sequence *sequence)
    __asm__("Spawn__Q213IconChallenge8Sequence");
__asm__(".equ Spawn__Q213IconChallenge8Sequence, 0x00260F08");
void IconChallenge::Arrangement::Spawn() {
    void (*spawn)(IconChallenge::Sequence *) = spawn_sequence;
    spawn(&sequences[currSequenceIdx]);
}

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

#if defined(KELLY_DECOMP_FUNCTION_00261BB0)
// 0x00261BB0 Spawn__Q213IconChallenge4Icon
struct entity_vtable {
    char padding[0xf8]; short active_adjustment; short reserved0;
    void (*set_active)(void *,bool);
    char padding2[0x60]; short visible_adjustment; short reserved1;
    void (*set_visible)(void *,bool);
};
struct entity_layout {
    char padding[8]; entity_vtable *vtable;
    void set_visible(bool visible) {
        entity_vtable *table=vtable;
        table->set_visible((char *)this+table->visible_adjustment,visible);
    }
    void set_active(bool active) {
        entity_vtable *table=vtable;
        table->set_active((char *)this+table->active_adjustment,active);
    }
};
class IconChallenge {
public:
    class Icon {
        entity_layout *parentEnt;
    public:
        void Spawn();
    };
};
void IconChallenge::Icon::Spawn() {
    if (parentEnt) {
        parentEnt->set_visible(true);
        parentEnt->set_active(true);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00261C10)
// 0x00261C10 Despawn__Q213IconChallenge4Icon
struct entity_vtable {
    char padding[0xf8]; short active_adjustment; short reserved0;
    void (*set_active)(void *,bool);
    char padding2[0x60]; short visible_adjustment; short reserved1;
    void (*set_visible)(void *,bool);
};
struct entity_layout {
    char padding[8]; entity_vtable *vtable;
    void set_visible(bool visible) {
        entity_vtable *table=vtable;
        table->set_visible((char *)this+table->visible_adjustment,visible);
    }
    void set_active(bool active) {
        entity_vtable *table=vtable;
        table->set_active((char *)this+table->active_adjustment,active);
    }
};
class IconChallenge {
public:
    class Icon {
        entity_layout *parentEnt;
    public:
        void Despawn();
    };
};
void IconChallenge::Icon::Despawn() {
    if (parentEnt) {
        parentEnt->set_active(false);
        parentEnt->set_visible(false);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002609D0)
// 0x002609D0 Update__13IconChallengef
struct Controller;struct Icon{char data[44];void Update(float)__asm__("Update__Q213IconChallenge4Iconf");};struct Arrangement{char data[1];void Update(Controller*,float)__asm__("Update__Q213IconChallenge11ArrangementP22kellyslater_controllerf");};struct IconChallenge{char pad[4];Controller*ksctrl;int numIcons;Icon*icons;Arrangement arrangement;void Update(float)__asm__("Update__13IconChallengef");};__asm__(".equ Update__Q213IconChallenge11ArrangementP22kellyslater_controllerf,0x00260BE8");__asm__(".equ Update__Q213IconChallenge4Iconf,0x00261558");void IconChallenge::Update(float dt){arrangement.Update(ksctrl,dt);for(int i=0;i<numIcons;i++)icons[i].Update(dt);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260CC8)
// 0x00260CC8 OnEvent__Q213IconChallenge11Arrangement5EVENTP22kellyslater_controlleri
struct controller;struct Sequence{char data[168];void OnEvent(int,controller*,int)__asm__("OnEvent__Q213IconChallenge8Sequence5EVENTP22kellyslater_controlleri");};class Arrangement{public:int numSequences;int current;Sequence sequences[10];void OnEvent(int,controller*,int)__asm__("OnEvent__Q213IconChallenge11Arrangement5EVENTP22kellyslater_controlleri");};__asm__(".equ OnEvent__Q213IconChallenge8Sequence5EVENTP22kellyslater_controlleri,0x00260FC8");void Arrangement::OnEvent(int event,controller*ksctrl,int param2){for(int i=0;i<numSequences;i++)sequences[i].OnEvent(event,ksctrl,param2);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00260FC8)
// 0x00260FC8 OnEvent__Q213IconChallenge8Sequence5EVENTP22kellyslater_controlleri
struct controller;struct Task{char data[16];void OnEvent(int,controller*,int)__asm__("OnEvent__Q213IconChallenge4Task5EVENTP22kellyslater_controlleri");};class Sequence{public:int numTasks;Task tasks[10];void OnEvent(int,controller*,int)__asm__("OnEvent__Q213IconChallenge8Sequence5EVENTP22kellyslater_controlleri");};__asm__(".equ OnEvent__Q213IconChallenge4Task5EVENTP22kellyslater_controlleri,0x00261358");void Sequence::OnEvent(int event,controller*ksctrl,int param2){for(int i=0;i<numTasks;i++)tasks[i].OnEvent(event,ksctrl,param2);}
#endif
