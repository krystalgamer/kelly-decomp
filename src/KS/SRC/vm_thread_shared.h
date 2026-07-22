#ifndef KELLY_DECOMP_VM_THREAD_SHARED_H
#define KELLY_DECOMP_VM_THREAD_SHARED_H

class signal;
typedef signal *vm_signal_t;

class script_object {
public:
    class instance;
};

class vm_executable {
    char executable_state[0x20];
    int parms_stacksize;

public:
    int get_parms_stacksize() const { return parms_stacksize; }
};

class vm_stack {
    int salloc;
    char *buffer;
    char *SP;
    class vm_thread *my_thread;

public:
    void pop(int size) { SP -= size; }
    char *get_SP() const { return SP; }
    vm_signal_t pop_signal()
    {
        pop(sizeof(vm_signal_t));
        return *(vm_signal_t *)SP;
    }
};

class signal {
public:
    unsigned int add_callback(
        script_object::instance *instance,
        vm_executable *function,
        char *parms,
        bool one_shot = false);
};

class vm_thread {
protected:
    union argument_t {
        float val;
        char *str;
        short word;
        char *sdr;
        void *lfr;
        vm_executable *sfr;
        unsigned int binary;
    };

    script_object::instance *inst;
    const vm_executable *ex;
    unsigned int flags;
    vm_stack dstack;

    void create_static_event_callback(const argument_t &arg, bool one_shot);
};

__asm__(".equ add_callback__6signalPQ213script_object8instanceP13vm_executablePcb, 0x0034C548");

#endif
