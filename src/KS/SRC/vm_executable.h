#ifndef VM_EXECUTABLE_H
#define VM_EXECUTABLE_H

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector.h"

class script_object;

class vm_executable {
public:
    typedef vector<script_library_class *> parms_list;

protected:
    script_object *owner;
    stringx name;
    stringx fullname;
    parms_list parameters;
    int parms_stacksize;
    bool static_func;
    bool linked;
    unsigned short *buffer;
    int buffer_len;
    vector<const stringx *> strings;
    void _destroy();

public:
    explicit vm_executable(script_object *owner);
    vm_executable(const vm_executable &other);
    ~vm_executable();
    inline script_object *get_owner() const { return owner; }
    inline const stringx &get_name() const { return name; }
    inline const stringx &get_fullname() const { return fullname; }
    inline const parms_list &get_parameters() const {
        return parameters;
    }
    inline bool is_static() const { return static_func; }
    inline bool is_linked() const { return linked; }
    inline int get_parms_stacksize() const {
        return parms_stacksize;
    }
    inline const unsigned short *get_start() const {
        return buffer;
    }
    inline int get_size() const { return buffer_len; }
};

#endif
