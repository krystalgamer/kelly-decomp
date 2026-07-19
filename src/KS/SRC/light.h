// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF930)
// 0x002FF930 is_a_light_source__C12light_source
class light_source {
public:
    bool is_a_light_source() const;
};

bool light_source::is_a_light_source() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF940)
// 0x002FF940 get_color__C12light_source
class color {};
struct light_properties { char padding[0x4]; color diffuse_color; };
class light_source { char padding[0x200]; light_properties* properties; public: const color& get_color() const; };
const color& light_source::get_color() const { return properties->diffuse_color; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF980)
// 0x002FF980 get_additive_color__C12light_source
class color {};
struct light_properties { char padding[0x14]; color additive_color; };
class light_source { char padding[0x200]; light_properties* properties; public: const color& get_additive_color() const; };
const color& light_source::get_additive_color() const { return properties->additive_color; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF9C0)
// 0x002FF9C0 get_near_range__C12light_source
struct light_properties { char padding[0x24]; float near_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float get_near_range() const; };
float light_source::get_near_range() const { return properties->near_range; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF9F0)
// 0x002FF9F0 get_lightcat__C12light_source
struct light_properties { char padding[0x30]; unsigned int lightcat; };
class light_source { char padding[0x200]; light_properties* properties; public: unsigned int get_lightcat() const; };
unsigned int light_source::get_lightcat() const { return properties->lightcat; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFA00)
// 0x002FFA00 set_lightcat__12light_sourceUi
struct light_properties { char padding[0x30]; unsigned int lightcat; };
class light_source { char padding[0x200]; light_properties* properties; public: void set_lightcat(unsigned int value); };
void light_source::set_lightcat(unsigned int value) { properties->lightcat = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFA10)
// 0x002FFA10 get_cutoff_range__C12light_source
struct light_properties { char padding[0x28]; float cutoff_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float get_cutoff_range() const; };
float light_source::get_cutoff_range() const { return properties->cutoff_range; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF9D0)
// 0x002FF9D0 set_near_range__12light_sourcef
class light_properties { public: void set_near_range(float range); };
__asm__(".equ set_near_range__16light_propertiesf, 0x002CC968");
class light_source { char padding[0x200]; light_properties *properties; public: void set_near_range(float range); };
void light_source::set_near_range(float range) { properties->set_near_range(range); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFA20)
// 0x002FFA20 set_cutoff_range__12light_sourcef
class light_properties { public: void set_cutoff_range(float range); };
__asm__(".equ set_cutoff_range__16light_propertiesf, 0x002CC9C0");
class light_source { char padding[0x200]; light_properties *properties; public: void set_cutoff_range(float range); };
void light_source::set_cutoff_range(float range) { properties->set_cutoff_range(range); __asm__ volatile(""); }
#endif
