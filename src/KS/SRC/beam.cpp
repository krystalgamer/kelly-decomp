// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00271790)
// 0x00271790 set_thickness__4beamf
class beam {
    char padding[0x200];
    float thickness;
public:
    void set_thickness(float value);
};

void beam::set_thickness(float value) {
    thickness = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271798)
// 0x00271798 set_max_length__4beamf
class beam {
    char padding[0x204];
    float max_length;
public:
    void set_max_length(float value);
};

void beam::set_max_length(float value) {
    max_length = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002717A0)
// 0x002717A0 set_beam_color__4beamRC7color32
class color32 {
public:
    unsigned int value;
};

class beam {
    char padding[0x208];
    color32 my_color;
public:
    void set_beam_color(const color32& value);
};

void beam::set_beam_color(const color32& value) {
    my_color = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002721E8)
// 0x002721E8 set_texture__4beamRC7stringx
class stringx;

class beam {
public:
    void set_texture(const stringx& file);
};

void beam::set_texture(const stringx& file) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002721F0)
// 0x002721F0 frame_advance__4beamf
class beam {
public:
    void frame_advance(float time);
};

void beam::frame_advance(float time) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272240)
// 0x00272240 render__4beamP6camerafUif
class camera;

class beam {
public:
    void render(camera* camera_link, float detail, unsigned int flavor, float entity_translucency_pct);
};

void beam::render(camera* camera_link, float detail, unsigned int flavor, float entity_translucency_pct) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272670)
// 0x00272670 set_visible__4beamb
class beam {
public:
    void set_visible(bool visible);
};

void beam::set_visible(bool visible) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00274768)
// 0x00274768 compute_sector__4beamR7terrainb
class terrain;

class beam {
public:
    void compute_sector(terrain& value, bool use_high_res_intersect);
};

void beam::compute_sector(terrain& value, bool use_high_res_intersect) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00272DE8)
// 0x00272DE8 set_active__11beam_effect
class beam_effect {
    char padding[0xa];
    signed char mode;

public:
    void set_active();
};

void beam_effect::set_active() {
    if (mode == 1) {
        mode = 2;
    } else if (mode == -1) {
        mode = -2;
    }
}
#endif
