// Matching decompilation blocks selected by generated build shims.


// 0x00105E40 going_out_of_service__9ai_action
#include "KS/SRC/ai_actions.h"

void ai_action::going_out_of_service() {
    set_flag(IN_SERVICE, false);
}

// 0x00105E78 get_my_entity__C9ai_action
#include "KS/SRC/ai_actions.h"
#include "KS/SRC/ai_goals.h"

entity* ai_action::get_my_entity() const { return owner->get_my_entity(); }
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001061E8)
// 0x001061E8 going_out_of_service__14anim_ai_action
#include "KS/SRC/ai_actions.h"
#include "KS/SRC/entity.h"

__asm__(".equ get_my_entity__C9ai_action, 0x00105E78");
__asm__(".equ kill_anim__6entityi, 0x00134918");
__asm__(".equ going_out_of_service__9ai_action, 0x00105E40");
extern "C" void release_ai_action(ai_action *action)
    __asm__("going_out_of_service__9ai_action");

void anim_ai_action::going_out_of_service()
{
    if (looping)
        get_my_entity()->kill_anim(anim_slot);
    void (*release)(ai_action *) = release_ai_action;
    release(this);
}
#endif

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
