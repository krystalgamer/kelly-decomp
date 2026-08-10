// Matching decompilation blocks selected by generated build shims.

// 0x00106608 get_my_entity__C7ai_goal
#include "KS/SRC/ai_goals.h"
#include "KS/SRC/ai_interface.h"

entity* ai_goal::get_my_entity() const {
    return owner->get_my_entity();
}

// 0x00106618 going_into_service__7ai_goal
#include "KS/SRC/ai_goals.h"

void ai_goal::going_into_service() {
    in_service = true;
}

// 0x00106AE8 handle_chunk__7ai_goalR10chunk_fileR7stringx
#include "KS/SRC/ai_goals.h"

void ai_goal::handle_chunk(chunk_file &file, stringx &label) {
}

// 0x00106C80 set_str__7ai_goalRC7pstringRC7stringx
#include "KS/SRC/ai_goals.h"

bool ai_goal::set_str(const pstring &att, const stringx &val) {
    return false;
}

// 0x00106C88 get_str__7ai_goalRC7pstringR7stringx
#include "KS/SRC/ai_goals.h"

bool ai_goal::get_str(const pstring &att, stringx &val) {
    return false;
}

// 0x001069C8 going_out_of_service__7ai_goal
#include "KS/SRC/ai_goals.h"
void ai_goal::going_out_of_service() {
    in_service = false;
    dump_actions();
}

// Source implementation boundary.
// 0x00112F90 __tf7ai_goal
extern "C" void __rtti_user(void *info, const char *name);
__asm__(".equ __rtti_user, 0x003CE2F8");
extern unsigned int ai_goal_typeinfo[];
extern const char ai_goal_type_name[];
__asm__(".equ ai_goal_typeinfo, 0x00511FA0");
__asm__(".equ ai_goal_type_name, 0x004C8818");
extern "C" void *AIGoalRtti() __asm__("__tf7ai_goal");
void *AIGoalRtti()
{
    if (!ai_goal_typeinfo[0])
        __rtti_user(ai_goal_typeinfo, ai_goal_type_name);
    return ai_goal_typeinfo;
}
