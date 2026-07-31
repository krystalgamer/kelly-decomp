#ifndef IRI_H
#define IRI_H

#include "KS/SRC/color.h"
#include "KS/SRC/forceflags.h"
#include "KS/SRC/frame_info.h"
#include "KS/SRC/po.h"
#include "g++-2/stl_vector.h"

class light_manager;
class material;
class region_node;

class instance_render_info {
public:
    instance_render_info()
      : render_scale(1.0f, 1.0f, 1.0f)
    {
        alt_materials = 0;
    }

    instance_render_info(
        float target_face_count,
        const po &local_to_world_value,
        time_value_t age,
        region_node *region,
        unsigned short ifl_frame_boost = 0,
        color32 color_scale_value = color32(255, 255, 255, 255),
        unsigned int force_flags_value = 0,
        rational_t camera_rotation = 0,
        float particle_scale_value = 1.0f,
        light_manager *light_set = 0,
        int locked_frame = -1,
        vector<material *> *materials = 0)
      : number_of_faces_to_attempt(target_face_count),
        local_to_world(local_to_world_value),
        force_flags(force_flags_value),
        color_scale(color_scale_value),
        camera_relative_rotation(camera_rotation),
        my_region(region),
        particle_scale(particle_scale_value),
        my_light_set(light_set),
        alt_materials(materials),
        render_scale(1.0f, 1.0f, 1.0f)
    {
        frame_time_info.set_age(age);
        frame_time_info.set_ifl_frame_boost(ifl_frame_boost);
        frame_time_info.set_ifl_frame_locked(locked_frame);
    }

    instance_render_info(
        float target_face_count,
        const po &local_to_world_value,
        frame_info &frame_time,
        region_node *region,
        color32 color_scale_value = color32(255, 255, 255, 255),
        unsigned int force_flags_value = 0,
        rational_t camera_rotation = 0,
        float particle_scale_value = 1.0f,
        light_manager *light_set = 0,
        vector<material *> *materials = 0)
      : number_of_faces_to_attempt(target_face_count),
        local_to_world(local_to_world_value),
        force_flags(force_flags_value),
        color_scale(color_scale_value),
        camera_relative_rotation(camera_rotation),
        frame_time_info(frame_time),
        my_region(region),
        particle_scale(particle_scale_value),
        my_light_set(light_set),
        alt_materials(materials),
        render_scale(1.0f, 1.0f, 1.0f)
    {
    }

    inline int time_to_frame_locked(int period) const {
        return frame_time_info.time_to_frame_locked(period);
    }
    inline float get_target_face_count() const {
        return number_of_faces_to_attempt;
    }
    inline const po &get_local_to_world() const {
        return local_to_world;
    }
    inline const color32 &get_color_scale() const {
        return color_scale;
    }
    inline rational_t get_camera_relative_rotation() const {
        return camera_relative_rotation;
    }
    inline time_value_t get_age() const {
        return frame_time_info.get_age();
    }
    inline void set_age(time_value_t age) {
        frame_time_info.set_age(age);
    }
    inline unsigned short get_ifl_frame_boost() {
        return frame_time_info.get_ifl_frame_boost();
    }
    inline void set_ifl_frame_boost(int boost) {
        frame_time_info.set_ifl_frame_boost(boost);
    }
    inline bool force_translucent() const {
        return force_flags & FORCE_TRANSLUCENCY;
    }
    inline bool force_unzbuffered() const {
        return force_flags & FORCE_UNZBUFFERED;
    }
    inline unsigned int get_force_flags() const {
        return force_flags;
    }
    inline region_node *get_region() const {
        return my_region;
    }
    inline bool get_skip_clip() const {
        return force_flags & FORCE_SKIP_CLIP;
    }
    inline light_manager *get_light_set() const {
        return my_light_set;
    }
    inline float get_particle_scale() const {
        return particle_scale;
    }
    inline bool operator<(const instance_render_info &value) const {
        return frame < value.frame;
    }
    inline vector<material *> *get_alt_materials() const {
        return alt_materials;
    }
    inline void set_alt_materials(vector<material *> *materials) {
        alt_materials = materials;
    }
    inline const vector3d &get_render_scale() const {
        return render_scale;
    }
    inline void set_render_scale(const vector3d &scale) {
        render_scale = scale;
    }

    float number_of_faces_to_attempt;
    po local_to_world;
    unsigned int force_flags;
    color32 color_scale;
    rational_t camera_relative_rotation;
    frame_info frame_time_info;
    region_node *my_region;
    rational_t particle_scale;
    light_manager *my_light_set;
    vector<material *> *alt_materials;
    int frame;
    vector3d render_scale;

    instance_render_info &operator=(const instance_render_info &value)
    {
        if (&value == this)
            return *this;

        number_of_faces_to_attempt = value.number_of_faces_to_attempt;
        local_to_world = value.local_to_world;
        force_flags = value.force_flags;
        color_scale = value.color_scale;
        camera_relative_rotation = value.camera_relative_rotation;
        frame_time_info = value.frame_time_info;
        my_region = value.my_region;
        particle_scale = value.particle_scale;
        my_light_set = value.my_light_set;
        alt_materials = value.alt_materials;
        frame = value.frame;
        render_scale = value.render_scale;
        return *this;
    }
};

#endif
