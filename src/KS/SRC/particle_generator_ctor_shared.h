#ifndef KELLY_DECOMP_PARTICLE_GENERATOR_CTOR_SHARED_H
#define KELLY_DECOMP_PARTICLE_GENERATOR_CTOR_SHARED_H

#include "KS/SRC/entity_shared.h"

enum entity_flavor_t {
    ENTITY_PARTICLE_GENERATOR = 5
};

enum particle_entity_flags {
    EFLAG_MISC_RAW_NONSTATIC = 0x00800000,
    EFLAG_MISC_NONSTATIC = 0x08000000
};

class particle_generator : public entity {
    char particle_generator_data[0x2D0 - sizeof(entity)];

public:
    particle_generator(
        const stringx &filename,
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_PARTICLE_GENERATOR,
        unsigned int flags = 0);
    virtual void set_visible(bool visible);
};

__asm__(".equ __18particle_generatorRC7stringxRC9entity_id15entity_flavor_tUi, 0x002CF560");

#endif
