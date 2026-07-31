#ifndef ITEM_H
#define ITEM_H

#pragma interface

#include "KS/SRC/entity.h"
#include "g++-2/stl_vector.h"

class light_manager;

class item : public entity {
public:
    enum usage_t {
        INVALID = -1,
        INSTANT,
        INVENTORY,
        UTILITY,
        GUN,
        THROWN,
        MELEE,
        AMMO,
        HEALTH,
        ARMOR,
        ENERGY,
        PERMANENT
    };

    item(const entity_id &id, unsigned int flags);
    item(
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_ITEM,
        unsigned int flags = 0);
    virtual ~item();
    virtual void initialize();
    virtual bool is_an_item() const;
    virtual bool handle_enx_chunk(
        chunk_file &file,
        stringx &label);
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;

protected:
    virtual void copy_instance_data(const item &other);

public:
    inline usage_t get_usage_type() const {
        return usage_type;
    }
    virtual int get_count() const;
    virtual void inc_count();
    virtual void dec_count();
    virtual void set_count(int count);
    virtual bool is_usable() const;
    virtual int get_number() const;
    virtual void frame_advance(time_value_t time);
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency);
    virtual bool give_to_entity(entity *target);
    virtual void preload();
    virtual void apply_effects(entity *target);
    virtual bool is_ammo() const;
    virtual bool is_health() const;
    virtual bool is_armor() const;
    virtual bool is_brain_weapon() const;
    virtual void holster(bool make_visible = true);
    virtual void draw(bool make_visible = true);
    virtual void hide();
    virtual void show();
    virtual bool parse_instance(
        const stringx &flavor,
        chunk_file &file);
    bool check_for_pickup();
    bool is_picked_up();
    void spawn_item_script();
    void spawn_preload_script();
    static unsigned short get_signal_id(const char *name);
    virtual const char *get_signal_name(
        unsigned short index) const;

protected:
    bool preload_script_called;
    bool item_script_called;
    bool linked;
    usage_t usage_type;
    stringx name;
    int count;
    int default_count;
    bool picked_up;
    rational_t pickup_timer;
    rational_t icon_scale;
    rational_t interface_orientation;
    int max_num;
};

class visual_item : public entity {
public:
    visual_item(const entity_id &id, unsigned int flags);
    virtual ~visual_item();
    virtual bool is_a_visual_item() const;
    virtual light_manager *get_light_set();
    virtual render_flavor_t render_passes_needed() const;
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency);

private:
    entity *owner;
};

class morphable_item_range {
    int low;
    int high;
    stringx vis_rep;
    friend class morphable_item;
};

class morphable_item : public item {
public:
    morphable_item(
        const entity_id &id,
        unsigned int flags);
    virtual ~morphable_item();
    virtual bool is_a_morphable_item() const;
    virtual void frame_advance(time_value_t time);

protected:
    vector<morphable_item_range *> ranges;
    int old_count;
    void set_range_visrep(int count);
    void dump_ranges();
};

#endif
