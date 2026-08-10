#ifndef VM_THREAD_H
#define VM_THREAD_H

#pragma interface

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/script_object.h"
#include "KS/SRC/vm_executable.h"
#include "KS/SRC/vm_stack.h"
#include "g++-2/stl_vector.h"

class region;
class script_callback;
typedef float rational_t;

class vm_thread {
protected:
    union argument_t {
        vm_num_t val;
        vm_str_t str;
        short word;
        char *sdr;
        script_library_class::function *lfr;
        vm_executable *sfr;
        unsigned int binary;
    };

    enum flags_t {
        SUSPENDED = 0x0001,
        SUSPENDABLE = 0x0002
    };

    script_object::instance *inst;
    const vm_executable *ex;
    unsigned int flags;
    vm_stack dstack;
    const unsigned short *PC;
    vector<const unsigned short *> PC_stack;
    script_library_class::function::entry_t entry;
    script_callback *my_callback;
    region *local_region;
    rational_t camera_priority;
    static unsigned int id_counter;
    unsigned int thread_id;

public:
    vm_thread();
    vm_thread(
        script_object::instance *instance,
        const vm_executable *executable,
        int stack_allocation);
    vm_thread(
        script_object::instance *instance,
        const vm_executable *executable,
        int stack_allocation,
        script_callback *callback);
    ~vm_thread();
    inline const vm_executable *get_executable() const {
        return ex;
    }
    inline void set_flag(flags_t flag, bool enabled) {
        flags = enabled ? flags | flag : flags & ~flag;
    }
    inline bool is_flagged(flags_t flag) const {
        return flags & flag;
    }
    void set_suspended(bool suspended);
    inline bool is_suspended() const {
        return is_flagged(SUSPENDED);
    }
    void set_suspendable(bool suspendable);
    inline bool is_suspendable() const {
        return is_flagged(SUSPENDABLE);
    }
    void set_camera_priority(rational_t priority);
    inline rational_t get_camera_priority() const {
        return camera_priority;
    }
    inline region *get_local_region() const {
        return local_region;
    }
    void remove_from_local_region();
    void remove_from_local_character();
    float prof_runtime;
    unsigned int prof_opcount;

protected:
    void pop_PC();
    bool call_script_library_function(
        const argument_t &argument,
        const unsigned short *old_pc);
    void create_static_event_callback(
        const argument_t &argument,
        bool one_shot);
};

#endif
