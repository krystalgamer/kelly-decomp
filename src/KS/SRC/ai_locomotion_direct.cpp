// Matching decompilation blocks selected by generated build shims.


// 0x001095C0 copy__20ai_locomotion_directP20ai_locomotion_direct
#include "KS/SRC/ai_locomotion.h"
__asm__(".equ copy__13ai_locomotionP13ai_locomotion, 0x00106F18");
void ai_locomotion_direct::copy(ai_locomotion_direct* other) {
    ai_locomotion::copy((ai_locomotion*)other);
    KELLY_DECOMP_COMPILER_BARRIER();
}

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

// 0x00109D88 handle_chunk__20ai_locomotion_directR10chunk_fileR7stringx
#include "KS/SRC/ai_locomotion.h"
__asm__(".equ handle_chunk__13ai_locomotionR10chunk_fileR7stringx, 0x00108158");
void ai_locomotion_direct::handle_chunk(chunk_file& file, stringx& label) {
    ai_locomotion::handle_chunk(file, label);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00109530 _$_20ai_locomotion_direct
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_13ai_locomotion");
extern const char derived_vtable[];
__asm__(".equ _$_13ai_locomotion, 0x00106E28");
__asm__(".equ derived_vtable, 0x004B82B8");
struct LocomotionLayout { char padding[0x144]; const void *vtable; };
extern "C" void DirectDtor(void *self, int deleting) __asm__("_$_20ai_locomotion_direct");
void DirectDtor(void *self, int deleting) { ((LocomotionLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00109CC8 going_out_of_service__20ai_locomotion_direct
#include "KS/SRC/ai_locomotion.h"
#include "KS/SRC/entity.h"

extern "C" void KillAnim(entity *self, int slot)
    __asm__("kill_anim__6entityi");

__asm__(".equ get_my_entity__C13ai_locomotion, 0x00106EA0");
__asm__(".equ going_out_of_service__13ai_locomotion, 0x00109278");
__asm__(".equ kill_anim__6entityi, 0x00134918");

void ai_locomotion_direct::going_out_of_service()
{
    register entity *target __asm__("$4") = get_my_entity();
    KELLY_DECOMP_COMPILER_BARRIER();
    register int slot __asm__("$5") = 1;
    KillAnim(target, slot);
    ai_locomotion::going_out_of_service();
    KELLY_DECOMP_COMPILER_BARRIER();
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
