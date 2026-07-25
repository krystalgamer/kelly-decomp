#ifndef KELLY_DECOMP_SIGNAL_CALLBACK_SHARED_H
#define KELLY_DECOMP_SIGNAL_CALLBACK_SHARED_H

#include "KS/SRC/vm_thread_shared.h"

#pragma interface

class signaller;

class signal_callback {
public:
    inline signal_callback()
    {
        disabled = one_shot = false;
        id = id_counter++;
    }
    virtual ~signal_callback();

    virtual void spawn(signaller *source = 0) = 0;

    inline void disable() { disabled = true; }
    inline void enable() { disabled = false; }
    inline bool is_disabled() const { return disabled; }

    inline void set_one_shot(bool value) { one_shot = value; }
    inline bool is_one_shot() const { return one_shot; }
    inline unsigned int get_id() const { return id; }

    virtual inline bool is_code_callback() { return false; }
    virtual inline bool is_script_callback() { return false; }

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

    virtual inline bool is_script_callback() { return true; }
    virtual void spawn(signaller *source = 0);
};

void *operator new[](
    unsigned int size,
    unsigned int heap,
    const char *description,
    int line);
extern "C" void *memcpy(
    void *destination,
    const void *source,
    unsigned int size);

__asm__(".equ _15signal_callback$id_counter, 0x0046DB14");
__asm__(".equ _vt$15signal_callback, 0x005051A8");
__asm__(".equ _vt$15script_callback, 0x00505178");
__asm__(".equ __vn__FUiUiPCci, 0x002AC5A0");
__asm__(".equ memcpy, 0x003D171C");

#define NEW new(0, __PRETTY_FUNCTION__, 0)

#endif
