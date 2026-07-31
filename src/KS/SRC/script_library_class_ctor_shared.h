#ifndef KELLY_DECOMP_SCRIPT_LIBRARY_CLASS_CTOR_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIBRARY_CLASS_CTOR_SHARED_H

#include "KS/SRC/stringx.h"
#include "g++-2/stl_set.h"

#pragma interface

class script_library_class {
public:
    class function;

    struct function_cptr_less {
        char state;
        inline function_cptr_less() : state(0) {}
    };

    typedef set<const function *, function_cptr_less> function_list;

protected:
    stringx name;
    int size;
    const char *parent_name;
    const script_library_class *parent;
    function_list funcs;

    script_library_class();

public:
    virtual ~script_library_class();
    virtual unsigned int find_instance(const stringx &name) const;
};

__asm__(".equ __7stringx, 0x0034D3E0");
__asm__(".equ _vt$20script_library_class, 0x00505280");

#endif
