// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FECE0)
// 0x002FECE0 is_a_camera__C6camera
class camera {
public:
    bool is_a_camera() const;
};

bool camera::is_a_camera() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FECE8)
// 0x002FECE8 Reset__6camera
class camera {
public:
    void Reset();
};

void camera::Reset() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEDA0)
// 0x002FEDA0 init__11game_camera
class game_camera {
public:
    void init();
};

void game_camera::init() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEDD0)
// 0x002FEDD0 is_a_game_camera__C11game_camera
class game_camera {
public:
    bool is_a_game_camera() const;
};

bool game_camera::is_a_game_camera() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEEB8)
// 0x002FEEB8 is_a_marky_camera__C12marky_camera
class marky_camera {
public:
    bool is_a_marky_camera() const;
};

bool marky_camera::is_a_marky_camera() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEEC0)
// 0x002FEEC0 camera_set_collide_with_world__12marky_camerab
class marky_camera {
    char padding[0x2E0];
    bool do_collide_with_world;
public:
    void camera_set_collide_with_world(bool value);
};

void marky_camera::camera_set_collide_with_world(bool value) {
    do_collide_with_world = value;
}
#endif
