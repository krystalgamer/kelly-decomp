#include "KS/SRC/ai_actions.h"
#include "KS/SRC/ai_goals.h"

// 0x00105E68 get_ai_interface__C9ai_action
ai_interface *ai_action::get_ai_interface() const
{
    return owner->get_ai_interface();
}
