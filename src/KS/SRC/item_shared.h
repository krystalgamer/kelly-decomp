#ifndef KELLY_DECOMP_ITEM_SHARED_H
#define KELLY_DECOMP_ITEM_SHARED_H

#include "KS/SRC/entity_shared.h"

#pragma interface

class chunk_file;
class entity_id;

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

    virtual ~item();
    virtual void initialize();
    virtual bool is_an_item() const;
    virtual bool handle_enx_chunk(chunk_file &file, stringx &label);
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;

protected:
    virtual void copy_instance_data(const item &other);

public:
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
    virtual bool parse_instance(const stringx &flavor, chunk_file &file);

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

#endif
