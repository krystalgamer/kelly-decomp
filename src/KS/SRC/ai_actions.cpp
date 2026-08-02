// Matching decompilation blocks selected by generated build shims.


// 0x00105E40 going_out_of_service__9ai_action
#include "KS/SRC/ai_actions.h"

void ai_action::going_out_of_service() {
    set_flag(IN_SERVICE, false);
}

#if defined(KELLY_DECOMP_FUNCTION_00105E78)
// 0x00105E78 get_my_entity__C9ai_action
class entity;
// Keep the owner call out of line to preserve the released wrapper.
class ai_goal { public: entity* get_my_entity() const; };
__asm__(".equ get_my_entity__C7ai_goal, 0x00106608");
class ai_action { ai_goal* owner; public: entity* get_my_entity() const; };
entity* ai_action::get_my_entity() const { return owner->get_my_entity(); }
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001061E8)
// 0x001061E8 going_out_of_service__14anim_ai_action
__asm__(".equ get_my_entity__C9ai_action, 0x00105E78");
__asm__(".equ kill_anim__6entityi, 0x00134918");
__asm__(".equ going_out_of_service__9ai_action, 0x00105E40");
class entity { public: void kill_anim(int); };
class ai_action {
public:
    entity* get_my_entity() const;
    void going_out_of_service();
};
class anim_ai_action : public ai_action {
    char padding[32 - sizeof(ai_action)];
    int anim_slot;
    bool looping;
public:
    void going_out_of_service();
};
void anim_ai_action::going_out_of_service()
{
    if (looping)
        get_my_entity()->kill_anim(anim_slot);
    ai_action::going_out_of_service();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

// Source implementation boundary.
// 0x00113070 _$_9ai_action
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern const char ai_action_vtable[];
__asm__(".equ ai_action_vtable, 0x004C8370");
struct ai_action_layout {
    char padding[0xc];
    const void *vtable;
};
extern "C" void AIActionDtor(void *self, int deleting)
    __asm__("_$_9ai_action");
void AIActionDtor(void *self, int deleting)
{
    ((ai_action_layout *)self)->vtable = ai_action_vtable;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00113030 __tf9ai_action
extern "C" void __rtti_user(void *info, const char *name);
__asm__(".equ __rtti_user, 0x003CE2F8");
extern unsigned int ai_action_typeinfo[];
extern const char ai_action_type_name[];
__asm__(".equ ai_action_typeinfo, 0x00511FA8");
__asm__(".equ ai_action_type_name, 0x004C8828");
extern "C" void *AIActionRtti() __asm__("__tf9ai_action");
void *AIActionRtti()
{
    if (!ai_action_typeinfo[0])
        __rtti_user(ai_action_typeinfo, ai_action_type_name);
    return ai_action_typeinfo;
}

// 0x001130B0 _$_14anim_ai_action
extern "C" void destroy_string(void *, int)
    __asm__("_$_7stringx");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char action_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ action_vtable, 0x004C8370");
struct anim_action_layout {
    char padding[0xc];
    const void *vtable;
    char first_string[8];
    char second_string[8];
};
extern "C" void destroy_anim_action(
    anim_action_layout *self,
    int flags) __asm__("_$_14anim_ai_action");
void destroy_anim_action(anim_action_layout *self, int flags)
{
    destroy_string(self->second_string, 2);
    destroy_string(self->first_string, 2);
    self->vtable = action_vtable;
    if (flags & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
