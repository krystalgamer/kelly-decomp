// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D7BA0)
// 0x002D7BA0 estimate_physical_properties__17collision_capsuleP6entityf
class entity;

class collision_capsule {
public:
    void estimate_physical_properties(entity* body, float density);
};

void collision_capsule::estimate_physical_properties(entity* body, float density) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7F38)
// 0x002D7F38 apply_radius_scale__17collision_capsulef
class collision_capsule { char padding_to_rel[0x24]; float rel_radius; char padding_to_abs[0x18]; float abs_radius; public: void apply_radius_scale(float scale); };
void collision_capsule::apply_radius_scale(float scale) { abs_radius = rel_radius * scale; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D7F48)
// 0x002D7F48 render__C17collision_capsule
class collision_capsule {
public:
    void render() const;
};

void collision_capsule::render() const {
}
#endif
