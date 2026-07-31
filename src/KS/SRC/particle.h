#ifndef PARTICLE_H
#define PARTICLE_H

#pragma interface

#include "KS/SRC/entity.h"
#include "g++-2/stl_vector.h"

class particle;
class particle_generator;

class particle_force {
public:
    enum force_flavor_t {
        CONSTANT,
        RESISTANCE,
        TOWARDS_POINT
    };

    particle_force();
    particle_force(
        force_flavor_t flavor,
        const vector3d &multipurpose,
        rational_t delta_speed,
        rational_t terminal_speed);
    vector3d get_new_v(
        const particle &particle,
        particle_generator &generator,
        time_value_t time_delta);

    force_flavor_t flavor;
    vector3d multipurpose;
    vector3d utility;
    rational_t delta_speed;
    rational_t terminal_speed;
    rational_t recip_terminal_speed;
};

class particle {
    vector3d my_pos;
    vector3d my_velocity;
    vector3d rot_axis;
    rational_t scale;
    rational_t rotation;
    rational_t rotation_speed;
    time_value_t life_remaining;
    time_value_t total_life;

    friend class particle_generator;
    friend class particle_force;
};

class particle_generator : public entity {
public:
    bool always_render;

private:
    bool disable_for_sony_booth;
    stringx filename;
    particle *particles;
    int start_particle;
    int end_particle;
    int max_particles;
    time_value_t particle_life_span;
    rational_t life_variation;
    int birthrate;
    rational_t rate_variation;
    rational_t base_speed;
    rational_t speed_variation;
    rational_t spread_off_axis;
    rational_t spread_off_plane;
    rational_t scale_variation;
    time_value_t grow_for;
    time_value_t shrink_for;
    time_value_t fade_in;
    time_value_t fade_out;
    rational_t motion_inheritance;
    rational_t generation_radius;
    rational_t generation_height;
    time_value_t rotation_period;
    rational_t recip_rotation_period;
    rational_t rotational_speed_variation;
    rational_t rotational_start_variation;
    time_value_t on_for;
    time_value_t off_for;
    unsigned int flags;
    float time_to_next_particle;
    rational_t rh_grow_for;
    rational_t rh_shrink_for;
    rational_t rh_fade_in;
    rational_t rh_fade_out;
    vector<particle_force> force_list;
    vector3d abs_visual_center;
    vector3d visual_center;
    rational_t visual_radius;
    vector3d last_position;
    bool last_position_valid;

    // The released class rounds to 0x2d0; the reconstructed vector3d does not.
    char particle_trailing_data[8];

public:
    particle_generator(
        const entity_id &id,
        unsigned int flags);
    particle_generator(
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_PARTICLE_GENERATOR,
        unsigned int flags = 0);
    particle_generator(
        const stringx &filename,
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_PARTICLE_GENERATOR,
        unsigned int flags = 0)
        __asm__(
            "__18particle_generatorRC7stringxRC9entity_id"
            "15entity_flavor_tUi");
    virtual ~particle_generator();

    void initialize_variables();
    void load();
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    void copy_instance_data(const particle_generator &other);
    virtual bool is_a_particle_generator() const;
    virtual bool get_distance_fade_ok() const;
    virtual void acquire(unsigned int flags);
    virtual void frame_advance(time_value_t time);
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency);
    virtual void set_created_entity_default_active_status();
    virtual vector3d get_visual_center() const;
    virtual rational_t get_visual_radius() const;
    virtual rational_t get_visual_xz_radius_rel_center() const;
    virtual void po_changed();
    virtual void set_visible(bool visible);
    virtual bool is_still_visible() const;
    virtual render_flavor_t render_passes_needed() const;
    virtual bool is_active() const;
    virtual bool possibly_active() const;
    virtual bool possibly_aging() const;
    bool is_on() const;
    void destroy_particles();
    void frame_done();
    vector3d get_last_position() const;
    rational_t get_base_visual_radius() const;
};

__asm__(
    ".equ __18particle_generatorRC7stringxRC9entity_id"
    "15entity_flavor_tUi, 0x002CF560");

#endif
