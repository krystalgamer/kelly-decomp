#ifndef MIC_H
#define MIC_H

#pragma interface

#include "KS/SRC/entity.h"

class mic : public entity {
    vector3d last_position;

public:
    mic(
        entity *parent,
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_MIC);
    virtual ~mic();
    void adjust_listener();
    virtual void frame_advance(time_value_t time_inc);
};

#endif
