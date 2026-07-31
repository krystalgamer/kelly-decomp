#ifndef CONGLOM_H
#define CONGLOM_H

#pragma interface

#include "KS/SRC/entity.h"
#include "KS/SRC/lightmgr.h"
#include "KS/SRC/refptr.h"
#include "g++-2/stl_vector.h"

typedef vector<entity *> pentity_vector;

class conglomerate : public entity {
private:
    pentity_vector members;
    vector<stringx> names;
    vector<char> parents;
    refptr<light_manager> lightmgr;

public:
    virtual void apply_destruction_fx();
    conglomerate(
        const entity_id &id,
        unsigned int flags);
    conglomerate(
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_CONGLOMERATE,
        unsigned int flags = 0);
    virtual ~conglomerate();
    virtual bool is_a_conglomerate() const;
    virtual void ifl_lock(int frame);
    virtual void ifl_pause();
    virtual void ifl_play();
    virtual void set_visible(bool visible);
    virtual bool is_still_visible() const;
    virtual rational_t terrain_radius() const;
    virtual void force_region(region_node *region);
    virtual void force_current_region();
    virtual void unforce_regions();
    virtual void frame_advance(time_value_t time);
    virtual light_manager *get_light_set() const;
    virtual void compute_sector(
        terrain &terrain_data,
        bool high_resolution = false);
    virtual void frame_done_including_members();
    virtual void acquire(unsigned int flags);
    virtual void release();
    virtual void set_ext_flag_recursive(
        unsigned int flag,
        bool enabled);
};

#endif
