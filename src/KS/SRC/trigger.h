#ifndef TRIGGER_H
#define TRIGGER_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/signals.h"
#include "KS/SRC/singleton.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector.h"

class chunk_file;
class entity;
class MenuSystem;
class region;

class trig_region_pset {
    void *header;
    char data_after_header[12];

public:
    inline void *end_node() const { return header; }
};

class trigger : public signaller {
    friend class trigger_manager;

public:
    enum SignalId {
        ENTER,
        LEAVE,
    };

    trigger(const stringx &id);
    virtual void read(chunk_file &file);
    virtual bool triggered(entity *);
    void update();
    virtual void update_region();
    virtual bool is_a_trigger() const;
    virtual const vector3d &get_abs_position() const;
    inline bool is_active() const { return active; }
    void set_active(bool active);
    inline void set_use_any_char(bool value) {
        use_any_char = value;
    }

protected:
    entity *whodunnit;
    stringx id;
    trigger *next;
    trig_region_pset in_regions;
    bool static_regions;
    bool active;
    bool occupied;
    bool use_any_char;
};

class trigger_manager : public singleton {
public:
    trigger_manager();
    trigger *find_instance(const stringx &name);
    trigger *new_box_trigger(entity *value);
    void update_regions();
    void purge();

    vector<region *> new_regions;

protected:
    void add(trigger *value);
    void remove(trigger *value);

    trigger *list;
};

extern trigger_manager *g_trigger_manager;

class point_trigger : public trigger {
    vector3d position;
    float radius;

public:
    point_trigger(const stringx &id);
    point_trigger(
        const stringx &id,
        const vector3d &position,
        float radius);
    virtual const vector3d &get_abs_position() const;
};

class region_trigger : public trigger {
public:
    region_trigger(const stringx &id);
    virtual bool triggered(entity *value);
    virtual void update_region();
};

class entity_trigger : public trigger {
    entity *ent;
    float radius;
    float last_compute_sector_position_hash;

public:
    entity_trigger(const stringx &id);
    entity_trigger(
        const stringx &id,
        entity *target,
        float radius);
    virtual const vector3d &get_abs_position() const;
    virtual void update_region();
};

#endif
