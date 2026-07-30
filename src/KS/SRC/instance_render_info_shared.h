#ifndef KELLY_DECOMP_INSTANCE_RENDER_INFO_SHARED_H
#define KELLY_DECOMP_INSTANCE_RENDER_INFO_SHARED_H

typedef float rational_t;
typedef float time_value_t;
typedef unsigned char uint8;
typedef unsigned int uint32;

class vector3d {
public:
    rational_t x;
    rational_t y;
    rational_t z;

    vector3d() {}
    vector3d(const vector3d &value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
    }
    vector3d(rational_t x_value, rational_t y_value, rational_t z_value)
        : x(x_value), y(y_value), z(z_value)
    {
    }

    vector3d &operator=(const vector3d &value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        return *this;
    }
};

class vector4d {
public:
    rational_t x;
    rational_t y;
    rational_t z;
    rational_t w;

    vector4d() {}
    vector4d(const vector4d &value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    vector4d &operator=(const vector4d &value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.w;
        return *this;
    }
};

class matrix4x4 {
public:
    vector4d x __attribute__((aligned(16)));
    vector4d y;
    vector4d z;
    vector4d w;

    matrix4x4() {}
};

class po {
private:
    matrix4x4 m;

public:
    po() {}
};

class color32 {
public:
    union {
        struct {
            uint8 b;
            uint8 g;
            uint8 r;
            uint8 a;
        } c;
        uint32 i;
    };

    color32(uint32 value = 0) : i(value) {}

    const color32 &operator=(const color32 &value)
    {
        i = value.i;
        return *this;
    }
};

class frame_info {
private:
    time_value_t age;
    int ifl_frame_boost;
    int ifl_frame_locked;
    static float ifl_frame_rate;

public:
    frame_info();
    void operator=(const frame_info &source);
};

class instance_render_info {
public:
    instance_render_info()
        : render_scale(1.0f, 1.0f, 1.0f)
    {
        alt_materials = 0;
    }

    float number_of_faces_to_attempt;
    po local_to_world;
    unsigned int force_flags;
    color32 color_scale;
    rational_t camera_relative_rotation;
    frame_info frame_time_info;
    void *my_region;
    rational_t particle_scale;
    void *my_light_set;
    void *alt_materials;
    int frame;
    vector3d render_scale;

    bool operator<(const instance_render_info &value) const
    {
        return frame < value.frame;
    }

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

__asm__(".equ __as__10frame_infoRC10frame_info, 0x00338678");

#endif
