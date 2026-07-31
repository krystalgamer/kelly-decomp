#ifndef SIGNALS_H
#define SIGNALS_H

#include "KS/SRC/singleton.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_map.h"
#include "g++-2/stl_vector.h"

#pragma interface

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
    inline signal *&operator[](unsigned int index) { return start[index]; }
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
    inline bool is_flagged(flags_t value) const { return flags & value; }
    virtual inline bool is_an_entity() const { return false; }
    virtual inline bool is_a_trigger() const { return false; }
    virtual void raise_signal(unsigned int index) const;
    virtual signal_list *construct_signal_list();
    virtual const char *get_signal_name(unsigned short index) const;
};

class signal_manager : public singleton {
public:
    typedef map<stringx, unsigned short> signal_id_map_t;
    typedef vector<signal *> managed_signal_list;

private:
    signal_id_map_t signal_id_map;
    managed_signal_list refresh_list;

public:
    signal_manager();
};

__asm__(".equ raise__6signal, 0x0034C428");
__asm__(".equ _vt$14signal_manager, 0x00505098");

#endif
