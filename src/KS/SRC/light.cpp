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

#if defined(KELLY_DECOMP_FUNCTION_002CDD30)
// 0x002CDD30 add_me_to_region__12light_sourceP6region
class light_source;
class region { public: void add(light_source *value); };
__asm__(".equ add__6regionP12light_source, 0x002E7C40");
class light_source { public: void add_me_to_region(region *value); };
void light_source::add_me_to_region(region *value) { value->add(this); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002CDD58)
// 0x002CDD58 remove_me_from_region__12light_sourceP6region
class light_source;
class region { public: void remove(light_source *value); };
__asm__(".equ remove__6regionP12light_source, 0x002E7D20");
class light_source { public: void remove_me_from_region(region *value); };
void light_source::remove_me_from_region(region *value) { value->remove(this); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002CD0C8)
// 0x002CD0C8 _$_12light_source
extern "C" void remove_terrain(void *)
    __asm__("remove_from_terrain__6entity");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern "C" void destroy_entity(void *,int)
    __asm__("_$_6entity");
extern const char light_vtable[];
__asm__(".equ remove_from_terrain__6entity, 0x0012FF48");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ _$_6entity, 0x001298C8");
__asm__(".equ light_vtable, 0x004F1FD0");
struct light_layout {
    char padding[8];
    const void *vtable;
    char padding2[0x1f4];
    void *properties;
};
extern "C" void destroy_light(
    light_layout *self,int flags
) __asm__("_$_12light_source");
void destroy_light(light_layout *self,int flags) {
    self->vtable=light_vtable;
    remove_terrain(self);
    if (self->properties) object_delete(self->properties);
    destroy_entity(self,flags);
    __asm__ __volatile__("" : : : "memory");
}
#endif
