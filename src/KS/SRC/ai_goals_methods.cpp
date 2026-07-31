// AI goal definitions extracted by generated one-function shims.

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

// 0x00112FD8 compare__7ai_goalPCvT1
#include "KS/SRC/ai_goals.h"
int ai_goal::compare(const void *first, const void *second)
{
    float diff =
        (*((ai_goal **)first))->get_priority() -
        (*((ai_goal **)second))->get_priority();
    register int result __asm__("$2");
    if (diff < 0.0f) {
        result = 1;
        goto done;
    }
    if (diff > 0.0f) {
        result = -1;
        goto done;
    }
    result = 0;
    return result;

done:
    __asm__ __volatile__("" : "+r"(result));
    return result;
}
