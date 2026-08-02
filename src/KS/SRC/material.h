#ifndef MATERIAL_H
#define MATERIAL_H

#include "KS/SRC/color.h"

enum map_e {
    MAP_DIFFUSE
};

class material {
    char data_to_flags[0x100];
    unsigned int mat_flags;

public:
    void send_context(
        int frame,
        map_e map,
        unsigned int flags,
        color32 color);
    unsigned int get_flags() const;
    void set_flags(unsigned int value);
};

#endif
