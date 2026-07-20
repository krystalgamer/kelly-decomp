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

#if defined(KELLY_DECOMP_FUNCTION_002D76D8)
// 0x002D76D8 _$_17collision_capsule
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_18collision_geometry");
extern const char base_vtable[];
__asm__(".equ _$_18collision_geometry, 0x002D8658");
__asm__(".equ base_vtable, 0x004F30A0");
struct object_layout { char padding[0x8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17collision_capsule");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
