// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002CDD80)
// 0x002CDD80 terrain_radius__C12light_source
struct light_properties { char padding[0x28]; float cutoff_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float terrain_radius() const; };
float light_source::terrain_radius() const { return properties->cutoff_range * 0.5f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002CDEE8)
// 0x002CDEE8 frame_advance__12light_sourcef
class light_source {
public:
    void frame_advance(float time);
};

void light_source::frame_advance(float time) {
}
#endif
