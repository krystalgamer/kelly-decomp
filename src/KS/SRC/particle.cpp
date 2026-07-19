// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002D1D70)
// 0x002D1D70 render_passes_needed__C18particle_generator
class particle_generator {
public:
    unsigned int render_passes_needed() const;
};

unsigned int particle_generator::render_passes_needed() const {
    return 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2DB8)
// 0x002D2DB8 get_visual_radius__C18particle_generator
class particle_generator {
    char padding[0x2B4];
    float visual_radius;
public:
    float get_visual_radius() const;
};

float particle_generator::get_visual_radius() const {
    return visual_radius * 2.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002D2E20)
// 0x002D2E20 destroy_particles__18particle_generator
class particle_generator {
public:
    void destroy_particles();
};

void particle_generator::destroy_particles() {
}
#endif
