#ifndef PS2_RASTERIZE_H
#define PS2_RASTERIZE_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/color.h"
#include "KS/SRC/refptr.h"
#include "KS/SRC/singleton.h"

class hw_texture;
class hw_rasta_vert;

enum {
    MAX_TEXTURE_COORDS = 2,
    MAX_SKIN_BONES = 4
};

class hw_rasta_vert_xformed {
public:
    hw_rasta_vert_xformed() {}

    vector3d xyz;
    float rhw;
    color32 diffuse;
    color32 specular;
    unsigned char bone_ids[MAX_SKIN_BONES];
    float bone_weights[MAX_SKIN_BONES];
    vector2d tc[MAX_TEXTURE_COORDS];
};

enum lock_type_t {
    LOCK_CLEAR,
    LOCK_NOOVERWRITE,
    LOCK_OVERWRITE
};

class vert_buf : public ref {
    vert_buf(const vert_buf &);

public:
    vert_buf();
    vert_buf(int max_size);
    ~vert_buf();

    void deconstruct();
    void lock(int max_size, lock_type_t type = LOCK_CLEAR);
    void unlock();
    void optimize();

private:
    hw_rasta_vert *verts;
    int max_size;
    bool locked;
    bool optimized;

    friend class hw_rasta;
};

class vert_buf_xformed : public ref {
    vert_buf_xformed(const vert_buf_xformed &);

public:
    vert_buf_xformed();
    vert_buf_xformed(int max_size);
    ~vert_buf_xformed();

    void deconstruct();
    void lock(int max_size, lock_type_t type = LOCK_CLEAR);
    void unlock();

private:
    hw_rasta_vert_xformed *verts;
    int max_size;
    bool locked;

    friend class hw_rasta;
};

class vertex_context {
public:
    enum filter_mode_t {
        POINT_SAMPLE,
        BILINEAR,
        TRILINEAR,
        ANISOTROPIC
    };

    enum clamp_mode_t {
        NOCLAMP,
        CLAMP_V,
        CLAMP_U,
        CLAMP_UV
    };

    enum flip_mode_t {
        NOFLIP,
        FLIP_V,
        FLIP_U,
        FLIP_UV
    };

    enum alpha_mode_t {
        DESTALPHA,
        DESTCOLOR,
        INVDESTALPHA,
        INVDESTCOLOR,
        INVSRCALPHA,
        INVSRCCOLOR,
        SRCALPHA,
        SRCCOLOR,
        ONE,
        ZERO
    };

    enum shade_mode_t {
        FLAT,
        GOURAUD
    };

    enum cull_mode_t {
        CNONE,
        CCW,
        CW
    };

    vertex_context();
    ~vertex_context();

private:
    hw_texture *texture;
    filter_mode_t filter_mode;
    clamp_mode_t clamp_mode;
    flip_mode_t flip_mode;
    alpha_mode_t src_alpha;
    alpha_mode_t dst_alpha;
    shade_mode_t shade_mode;
    cull_mode_t cull_mode;
    bool fog;
    bool changed;
    bool punchthrough;

    void process();

    friend class hw_rasta;
};

class hw_rasta : public singleton {
public:
    enum video_mode_t {
        VM_320x240,
        VM_512x384,
        VM_640x480,
        VM_800x600
    };

    enum pal_refresh_t {
        PAL_50HZ,
        PAL_60HZ
    };

    enum bit_depth_t {
        BD_16,
        BD_24
    };

    enum poly_type_t {
        PT_NONE,
        PT_OPAQUE_POLYS,
        PT_TRANS_POLYS,
        PT_OPAQUE_MODIFIERS,
        PT_TRANS_MODIFIERS
    };

    pal_refresh_t pal_refresh;

private:
    hw_rasta();
    void init_ps2_gfx();
    poly_type_t send_type;

public:
    virtual ~hw_rasta();
    int get_screen_width() const;
    int get_screen_height() const;
    void send_start(poly_type_t type);
    void send_indexed_vertex_list(
        const vert_buf &buffer,
        int vertex_count,
        const unsigned short *indices,
        int index_count,
        unsigned int flags);
    void send_context(
        vertex_context &context,
        unsigned int flags,
        color32 color);
    void send_texture(hw_texture *texture, int stage = 0);
    void begin_scene();
    void end_scene();
    void flip();
    int get_poly_count();
    void set_cop(float x, float y, float min_z = 0.0f, float max_z = 1.0f);
    void set_fog_color(const color &value);
    void set_fog_dist(float start_dist, float end_dist);
};

void low_level_console_init();
void low_level_console_release();
void low_level_console_flush();

#endif
