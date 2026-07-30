#ifndef KELLY_DECOMP_WDS_ADD_ENTITY_SHARED_H
#define KELLY_DECOMP_WDS_ADD_ENTITY_SHARED_H

#include "KS/SRC/entity_shared.h"
#include "KS/SRC/wds_shared.h"

class marker : public entity {};
class beam : public entity {};
class camera : public entity {};
class particle_generator : public entity {};
class lensflare : public entity {};
class sky : public entity {};

class entity_maker {
public:
    entity *create_entity(entity *value);
};

extern entity_maker *g_entity_maker;

__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");

#endif
