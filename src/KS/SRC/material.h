#ifndef MATERIAL_H
#define MATERIAL_H

#include "KS/SRC/color.h"

enum map_e {
    MAP_DIFFUSE
};

class material {
    static material *last_context_material;

    char data_to_flags[0x100];
    unsigned int mat_flags;

public:
    static void flush_last_context();
    void send_context(
        int frame,
        map_e map,
        unsigned int flags,
        color32 color);
    unsigned int get_flags() const;
    void set_flags(unsigned int value);
};

#endif
