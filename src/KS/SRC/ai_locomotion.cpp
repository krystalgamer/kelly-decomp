// Matching decompilation blocks selected by generated build shims.


// 0x00106EA0 get_my_entity__C13ai_locomotion
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/ai_locomotion.h"

entity* ai_locomotion::get_my_entity() const {
    return owner->get_my_entity();
}

// 0x00106F18 copy__13ai_locomotionP13ai_locomotion
#include "KS/SRC/ai_locomotion.h"
void ai_locomotion::copy(ai_locomotion* other) { patrol_radius = other->patrol_radius; patrol_id = other->patrol_id; xz_movement = other->xz_movement; }

// 0x00109268 going_into_service__13ai_locomotion
#include "KS/SRC/ai_locomotion.h"
void ai_locomotion::going_into_service() { in_service = true; wait_for_facing = false; }

// 0x00109278 going_out_of_service__13ai_locomotion
#include "KS/SRC/ai_locomotion.h"
void ai_locomotion::going_out_of_service() { repulsion_wait_timer = 0.0f; repulsion_wait = false; in_service = false; }

// 0x00107F68 set_goto_path__13ai_locomotionfb
#include "KS/SRC/ai_locomotion.h"
__asm__(".equ clear_path__13ai_locomotion,0x00107FD8");
void ai_locomotion::set_goto_path(float mod,bool force){clear_path();use_path=set_path(target_pos,mod,force);path_tries++;}

// 0x00108418 stop_jockey__13ai_locomotion
#include "KS/SRC/ai_locomotion.h"
#include "KS/SRC/entity.h"
__asm__(".equ get_my_entity__C13ai_locomotion,0x00106EA0");__asm__(".equ kill_anim__6entityi,0x00134918");
void ai_locomotion::stop_jockey(){if(jockey){entity*e=get_my_entity();asm volatile("" : "+r"(e));e->kill_anim(4);jockey_anim_a=_JOCKEY_ANIMS;jockey_timer=-1.0f;jockey_anim_b=_JOCKEY_ANIMS;jockey=false;jockey_stuck_timer=0.0f;last_jockey_pos=get_my_entity()->get_abs_position();}}
