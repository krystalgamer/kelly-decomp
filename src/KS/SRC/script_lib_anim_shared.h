#ifndef KELLY_DECOMP_SCRIPT_LIB_ANIM_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_ANIM_SHARED_H

typedef float rational_t;
typedef float vm_num_t;

class vm_thread;

class vm_stack {
public:
    int salloc;
    char *buffer;
    char *SP;

private:
    vm_thread *my_thread;

public:
    char *get_SP() const { return SP; }
    void pop(int n) { SP -= n; }
};

class script_library_class {
public:
    class function {
    public:
        enum entry_t {
            FIRST_ENTRY,
            RECALL_ENTRY
        };
    };
};

class entity_anim {
public:
    int anim_state;
};

class entity_anim_tree : public entity_anim {
public:
    virtual void set_flag(int flag);
    void set_timescale_factor(rational_t timescale_factor);
};

class world_dynamics_system {
public:
    void kill_anim(entity_anim_tree *animation);
};

extern world_dynamics_system *g_world_ptr;

#define SLF_PARMS \
    stack.pop(sizeof(parms_t)); \
    parms_t *parms = (parms_t *)stack.get_SP()
#define SLF_DONE return true

#endif
