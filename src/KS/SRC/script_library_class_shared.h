#ifndef KELLY_DECOMP_SCRIPT_LIBRARY_CLASS_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIBRARY_CLASS_SHARED_H

typedef float vm_num_t;

class vm_thread {
public:
    void set_suspendable(bool value);
};

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
    vm_thread *get_thread() const { return my_thread; }
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

class slf_allow_suspend_thread_t {
public:
    struct parms_t {
        vm_num_t t;
    };

    bool operator()(vm_stack &stack, script_library_class::function::entry_t entry);
};

#define SLF_PARMS \
    stack.pop(sizeof(parms_t)); \
    parms_t *parms = (parms_t *)stack.get_SP()
#define SLF_DONE return true

#endif
