#ifndef LENSFLARE_H
#define LENSFLARE_H

#pragma interface

#include "KS/SRC/entity.h"

class lensflare : public entity {
public:
    lensflare(
        const entity_id &id,
        unsigned int flags = 0);
    lensflare(
        chunk_file &file,
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_LENSFLARE,
        unsigned int flags = 0);
    virtual ~lensflare();
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    virtual void frame_advance(time_value_t time_inc);
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency);
    virtual render_flavor_t render_passes_needed() const;
    virtual bool possibly_active() const;
};

#endif
