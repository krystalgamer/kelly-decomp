#ifndef KELLY_DECOMP_SIGNALS_SHARED_H
#define KELLY_DECOMP_SIGNALS_SHARED_H

class signal {
public:
    void raise();
};

class signal_list {
    char allocator_state[4];
    signal **start;
    signal **finish;
    signal **end_of_storage;

public:
    signal *&operator[](unsigned int index) { return start[index]; }
};

class signaller {
public:
    enum flags_t {
        DISABLED = 0x0001
    };

protected:
    unsigned int flags;
    signal_list *signals;

public:
    virtual ~signaller();
    bool is_flagged(flags_t value) const { return flags & value; }
    virtual bool is_an_entity() const { return false; }
    virtual bool is_a_trigger() const { return false; }
    virtual void raise_signal(unsigned int index) const;
};

__asm__(".equ raise__6signal, 0x0034C428");

#endif
