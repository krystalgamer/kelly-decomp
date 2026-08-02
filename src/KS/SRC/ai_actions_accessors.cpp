#include "KS/SRC/ai_actions.h"
#include "KS/SRC/ai_goals.h"

// 0x00105E58 going_into_service__9ai_action
void ai_action::going_into_service()
{
    set_flag(IN_SERVICE);
}

// 0x00105E68 get_ai_interface__C9ai_action
ai_interface *ai_action::get_ai_interface() const
{
    return owner->get_ai_interface();
}
