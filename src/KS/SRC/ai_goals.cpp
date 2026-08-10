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

// 0x00106498 _$_7ai_goal
struct action_node { action_node *next; action_node *previous; };
extern "C" void clear_actions(void *) __asm__("clear__t10_List_base2ZP9ai_actionZt12my_allocator1ZP9ai_action");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char ai_goal_vtable[];
__asm__(".equ clear__t10_List_base2ZP9ai_actionZt12my_allocator1ZP9ai_action,0x00111A20");
__asm__(".equ __builtin_delete,0x002AC6B0");
__asm__(".equ ai_goal_vtable,0x004C83A0");
struct list_pool { int unused; action_node *free; };
extern list_pool action_pool;
__asm__(".equ action_pool,0x003E5628");
struct ai_goal_layout { char padding[16]; action_node *actions; char padding2[36]; const void *vtable; };
extern "C" void destroy_goal(ai_goal_layout *self, int deleting) __asm__("_$_7ai_goal");
void destroy_goal(ai_goal_layout *self, int deleting)
{
    self->vtable = ai_goal_vtable;
    clear_actions((char *)self + 16);
    action_node *node = self->actions;
    node->next = action_pool.free;
    action_pool.free = node;
    if (deleting & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
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
