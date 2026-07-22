#ifndef KELLY_DECOMP_ENTITY_SHARED_H
#define KELLY_DECOMP_ENTITY_SHARED_H

#include "KS/SRC/stringx.h"

typedef short anim_id_t;

class anim_id_manager {
public:
    anim_id_t anim_id(const char *label);
    anim_id_t anim_id(const stringx &label);
};

#endif
