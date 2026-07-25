#ifndef KELLY_DECOMP_SIGNAL_MANAGER_SHARED_H
#define KELLY_DECOMP_SIGNAL_MANAGER_SHARED_H

#include "KS/SRC/singleton_shared.h"
#include "KS/SRC/stringx_shared.h"
#include "g++-2/stl_map_shared.h"
#include "g++-2/stl_vector_shared.h"

#pragma interface

class signal;

class signal_manager : public singleton {
public:
    typedef map<stringx, unsigned short> signal_id_map_t;
    typedef vector<signal *> signal_list;

private:
    signal_id_map_t signal_id_map;
    signal_list refresh_list;

public:
    signal_manager();
};

__asm__(".equ _vt$14signal_manager, 0x00505098");

#endif
