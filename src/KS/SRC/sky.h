#ifndef SKY_H
#define SKY_H

#pragma interface

#include "KS/SRC/entity.h"

class sky : public entity {
public:
    sky(
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_SKY);
    sky(
        chunk_file &file,
        const entity_id &id,
        entity_flavor_t flavor,
        unsigned int flags);
    virtual ~sky();
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    virtual bool is_a_sky() const;
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency);
};

#endif
