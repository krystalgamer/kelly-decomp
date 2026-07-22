#ifndef KELLY_DECOMP_ENTITY_SHARED_H
#define KELLY_DECOMP_ENTITY_SHARED_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/visrep_shared.h"

typedef short anim_id_t;

class anim_id_manager {
public:
    anim_id_t anim_id(const char *label);
    anim_id_t anim_id(const stringx &label);
};

enum entity_extended_flags {
    EFLAG_EXT_IS_DOOR = 0x00000040
};

class entity {
    char entity_data[0x128];
    visual_rep *my_visrep;
    char entity_data_after_visrep[0x6c];
    unsigned int ext_flags;

public:
    time_value_t get_age() const;
    int get_max_polys() const;
    void set_door(bool door);
    void set_door_closed(bool closed);
};

#endif
