// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF4D8)
// 0x002FF4D8 get_type__C17collision_capsule
class collision_capsule {
public:
    unsigned int get_type() const;
};

unsigned int collision_capsule::get_type() const {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF578)
// 0x002FF578 get_core_radius__C17collision_capsule
class collision_capsule {
    char padding[0x40];
    float radius;
public:
    float get_core_radius() const;
};

float collision_capsule::get_core_radius() const {
    return radius;
}
#endif
