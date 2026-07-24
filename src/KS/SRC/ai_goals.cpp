// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00106608)
// 0x00106608 get_my_entity__C7ai_goal
class entity;

class ai_interface {
    char padding[0x4];
    entity* my_entity;
public:
    entity* get_my_entity() {
        return my_entity;
    }
};

class ai_goal {
    ai_interface* owner;
public:
    entity* get_my_entity() const;
};

entity* ai_goal::get_my_entity() const {
    return owner->get_my_entity();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106618)
// 0x00106618 going_into_service__7ai_goal
class ai_goal {
    char padding[0xC];
    bool in_service;
public:
    void going_into_service();
};

void ai_goal::going_into_service() {
    in_service = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106AE8)
// 0x00106AE8 handle_chunk__7ai_goalR10chunk_fileR7stringx
class chunk_file;
class stringx;

class ai_goal {
public:
    void handle_chunk(chunk_file &file, stringx &label);
};

void ai_goal::handle_chunk(chunk_file &file, stringx &label) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106C80)
// 0x00106C80 set_str__7ai_goalRC7pstringRC7stringx
class pstring;
class stringx;

class ai_goal {
public:
    bool set_str(const pstring &att, const stringx &val);
};

bool ai_goal::set_str(const pstring &att, const stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106C88)
// 0x00106C88 get_str__7ai_goalRC7pstringR7stringx
class pstring;
class stringx;

class ai_goal {
public:
    bool get_str(const pstring &att, stringx &val);
};

bool ai_goal::get_str(const pstring &att, stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001069C8)
// 0x001069C8 going_out_of_service__7ai_goal
struct ai_goal_vtable { char padding[0x18]; short adjustment; short padding2; void (*dump_actions)(void *self); };
class ai_goal { char padding0[0x0c]; int in_service; char padding1[0x28]; ai_goal_vtable *vtable; public: void going_out_of_service(); };
void ai_goal::going_out_of_service() { in_service = 0; ai_goal_vtable *table = vtable; table->dump_actions((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106498)
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
#endif
