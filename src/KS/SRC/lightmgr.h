#ifndef LIGHTMGR_H
#define LIGHTMGR_H

#include "KS/SRC/light.h"
#include "KS/SRC/refptr.h"
#include "KS/SRC/sphere.h"
#include "g++-2/stl_vector.h"

class region;
class use_light_context;

class light_manager : public ref {
public:
    class light_rec {
    public:
        light_source *source;
        vector3d dir_or_pos;
        light_properties props;
        float current_intensity;

        light_rec()
          : source(0),
            current_intensity(0.0f)
        {
        }
    };

    typedef vector<light_rec> light_list_t;

    light_list_t lights;
    color last_ambient;
    color goal_ambient;
    color my_ambient;
    unsigned int max_lights;
    unsigned int cur_max_lights;
    sphere bound;
    bool allow_omni;
    bool dynamic_only;

    explicit light_manager(bool is_terrain = false)
      : last_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        goal_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        my_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        max_lights(1),
        allow_omni(is_terrain),
        dynamic_only(is_terrain)
    {
    }

    inline void set_bound_sphere(const sphere &value) {
        bound = value;
    }
    inline const sphere &get_bound_sphere() const {
        return bound;
    }
    void frame_advance(
        region *region,
        time_value_t time,
        int player_id);
    void prepare_for_rendering(use_light_context *lights);
    static light_manager *get_static_light_set();

protected:
    int compare_light(int index);
};

#endif
