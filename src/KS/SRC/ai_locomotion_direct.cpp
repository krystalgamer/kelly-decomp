// Matching decompilation blocks selected by generated build shims.


// 0x001095E0 set_destination__20ai_locomotion_directRC8vector3dfbN23
#include "KS/SRC/ai_locomotion.h"

__asm__(
    ".equ set_destination__13ai_locomotionRC8vector3dfbN23, "
    "0x00106F38");
__asm__(".equ set_goto_path__13ai_locomotionfb, 0x00107F68");
__asm__(".equ clear_path__13ai_locomotion, 0x00107FD8");
__asm__(".equ ZEROVEC, 0x005124B0");

bool ai_locomotion_direct::set_destination(
    const vector3d &position,
    rational_t radius,
    bool fast,
    bool path_find,
    bool force_finish)
{
    if (ai_locomotion::set_destination(
            position,
            radius,
            fast,
            path_find,
            force_finish))
    {
        local_dest = target_pos;

        has_been_stuck_for_how_long = 0.0f;
        previous_pos = ZEROVEC;

        repulsion_timer = 0.0f;
        repulsion_local_dest = local_dest;

        path_tries = 0;
        if (path_find)
            set_goto_path(0.5f, false);
        else
        {
            clear_path();
            use_path = false;
        }

        return true;
    }
    else
        return false;
}

// 0x001094F0 __20ai_locomotion_directP12ai_interface
#include "KS/SRC/ai_locomotion.h"
asm(".equ __13ai_locomotionP12ai_interface, 0x00106C90");
asm(".equ _vt$20ai_locomotion_direct, 0x004C82B8");
ai_locomotion_direct::ai_locomotion_direct(ai_interface *owner)
    : ai_locomotion(owner)
{
    type = LOCOMOTION_DIRECT;
}
