// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D7040)
// 0x002D7040 render_skin__10visual_repUiPC20instance_render_infoPC2poi
class instance_render_info;
class po;

class visual_rep {
public:
    void render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count);
};

void visual_rep::render_skin(unsigned int flavor, const instance_render_info* info, const po* bones, int count) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70C0)
// 0x002D70C0 compute_xz_radius_rel_center__10visual_repRC2po
class po;

class visual_rep {
public:
    float compute_xz_radius_rel_center(const po& transform);
};

float visual_rep::compute_xz_radius_rel_center(const po& transform) {
    return 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70D0)
// 0x002D70D0 get_min_faces__C10visual_repf
class visual_rep {
public:
    int get_min_faces(float delta_t) const;
};

int visual_rep::get_min_faces(float delta_t) const {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70D8)
// 0x002D70D8 get_max_faces__C10visual_repf
class visual_rep {
public:
    int get_max_faces(float delta_t) const;
};

int visual_rep::get_max_faces(float delta_t) const {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70E0)
// 0x002D70E0 set_distance_fade_ok__10visual_repb
class visual_rep {
public:
    void set_distance_fade_ok(bool value);
};

void visual_rep::set_distance_fade_ok(bool value) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70E8)
// 0x002D70E8 get_distance_fade_ok__C10visual_rep
class visual_rep {
public:
    bool get_distance_fade_ok() const;
};

bool visual_rep::get_distance_fade_ok() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D70F0)
// 0x002D70F0 time_value_to_frame__10visual_repf
class visual_rep { public: float time_value_to_frame(float time); };
float visual_rep::time_value_to_frame(float time) { return time * 30.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7100)
// 0x002D7100 kill_me__10visual_rep
class visual_rep {
public:
    bool kill_me();
};

bool visual_rep::kill_me() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7108)
// 0x002D7108 set_light_method__10visual_rep14light_method_t
enum light_method_t {
    LIGHT_METHOD_DEFAULT
};

class visual_rep {
public:
    void set_light_method(light_method_t method);
};

void visual_rep::set_light_method(light_method_t method) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7110)
// 0x002D7110 get_anim_length__C10visual_rep
class visual_rep {
public:
    int get_anim_length() const;
};

int visual_rep::get_anim_length() const {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7118)
// 0x002D7118 render_passes_needed__C10visual_rep
class visual_rep {
public:
    unsigned int render_passes_needed() const;
};

unsigned int visual_rep::render_passes_needed() const {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7668)
// 0x002D7668 get_ending_time__C10visual_rep
class visual_rep { public: float get_ending_time() const; };
float visual_rep::get_ending_time() const { return 1.0e25f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7680)
// 0x002D7680 is_uv_animated__C10visual_rep
class visual_rep {
public:
    bool is_uv_animated() const;
};

bool visual_rep::is_uv_animated() const {
    return false;
}
#endif
