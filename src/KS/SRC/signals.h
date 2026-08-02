#ifndef SIGNALS_H
#define SIGNALS_H

#include "KS/SRC/singleton.h"
#include "KS/SRC/script_object.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/vm_executable.h"
#include "g++-2/stl_map.h"
#include "g++-2/stl_vector.h"

#pragma interface

class signaller;

class signal_callback {
public:
    inline signal_callback() {
        disabled = one_shot = false;
        id = id_counter++;
    }
    virtual ~signal_callback();
    virtual void spawn(signaller *source = 0) = 0;
    inline void disable() { disabled = true; }
    inline void enable() { disabled = false; }
    inline bool is_disabled() const { return disabled; }
    inline void set_one_shot(bool value) {
        one_shot = value;
    }
    inline bool is_one_shot() const { return one_shot; }
    inline unsigned int get_id() const { return id; }
    virtual bool is_code_callback();
    virtual bool is_script_callback();

protected:
    char *parms;
    bool disabled;
    bool one_shot;
    unsigned int id;
    static unsigned int id_counter;
};

class script_callback : public signal_callback {
    script_object::instance *inst;
    const vm_executable *func;

public:
    script_callback(
        script_object::instance *instance,
        const vm_executable *function,
        const char *parameters);
    virtual ~script_callback();
    virtual bool is_script_callback();
    const stringx &get_func_name();
    virtual void spawn(signaller *source = 0);
};

class code_callback : public signal_callback {
public:
    code_callback(
        void (*function)(signaller *, const char *),
        const char *parameters);
    virtual ~code_callback();
    virtual void spawn(signaller *source = 0);
    virtual bool is_code_callback();

private:
    void (*func)(signaller *, const char *);
};

class signal {
public:
    enum flavor_t {
        SIGNAL,
        GATED_SIGNAL
    };
    enum flags_t {
        RAISED = 0x0001,
        NEEDS_REFRESH = 0x0002,
        DISABLED = 0x0004,
        CALLBACKS_DISABLED = 0x0008
    };

protected:
    flavor_t flavor;

private:
    unsigned int flags;

public:
    void raise();
    void refresh();
    unsigned int add_callback(
        script_object::instance *instance,
        vm_executable *function,
        char *parameters,
        bool one_shot = false);
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
    virtual bool is_an_entity() const;
    virtual bool is_a_trigger() const;
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
