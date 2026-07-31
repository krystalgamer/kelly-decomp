#ifndef VM_STACK_H
#define VM_STACK_H

class signal;
class stringx;
class vm_thread;

typedef float vm_num_t;
typedef const stringx *vm_str_t;
typedef signal *vm_signal_t;

class vm_stack {
public:
    int salloc;
    char *buffer;
    char *SP;

private:
    vm_thread *my_thread;

protected:
    void init(int allocation);
    inline void move_SP(int count) { SP += count; }

public:
    vm_stack()
      : salloc(0),
        buffer(0),
        SP(0),
        my_thread(0)
    {
    }
    vm_stack(int allocation, vm_thread *thread);
    ~vm_stack();
    inline char *get_SP() const { return SP; }
    inline int size() const { return SP - buffer; }
    inline int capacity() const { return salloc; }
    inline vm_thread *get_thread() const { return my_thread; }
    inline void pop(int count) { move_SP(-count); }
    vm_num_t pop_num();
    inline vm_signal_t pop_signal() {
        pop(sizeof(vm_signal_t));
        return *(vm_signal_t *)SP;
    }

    friend class vm_thread;
};

#endif
