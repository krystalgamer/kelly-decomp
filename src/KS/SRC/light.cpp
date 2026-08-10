// light definitions extracted by generated one-function shims.


// 0x002CDD80 terrain_radius__C12light_source
#include "KS/SRC/light.h"

float light_source::terrain_radius() const { return properties->get_cutoff_range() * 0.5f; }

// 0x002CDEE8 frame_advance__12light_sourcef
#include "KS/SRC/light.h"

void light_source::frame_advance(float time) {
}

// 0x002CC8B0 __16light_properties
#include "KS/SRC/light.h"

light_properties::light_properties()
  : flavor(LIGHT_FLAVOR_POINT),
    diffuse_color(1.0f, 1.0f, 1.0f, 1.0f),
    near_range(1.0f),
    cutoff_range(16)
{
    additive_color = color(0, 0, 0, 0);
    recompute_range();
    flags = 0;
}

// 0x002CDE30 get_dist__C12light_sourceRC6sphere
#include "KS/SRC/light.h"

float light_source::get_dist(const sphere& abound) const
{
    if ((get_properties().get_flavor() ^ LIGHT_FLAVOR_DIRECTIONAL) != 0)
    {
        float d2 = (abound.get_center() - get_abs_position()).length2();
        if (d2 > abound.get_radius() * abound.get_radius())
            return sqrtf(d2) - abound.get_radius();
    }
    return 0.0f;
}

// Source implementation boundary.
// 0x002FF8E0 __tf12light_source
#include "KS/SRC/rtti.h"
extern "C" void **LightSourceBaseRtti() __asm__("__tf6entity");
extern "C" void *light_source_type[] __asm__("__ti12light_source");
extern "C" const char light_source_name[];
extern "C" void *light_source_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti12light_source, 0x005A3FD0");
__asm__(".equ light_source_name, 0x004F4C40");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **LightSourceRtti() __asm__("__tf12light_source");
void **LightSourceRtti()
{
    if (!light_source_type[0]) {
        LightSourceBaseRtti();
        __rtti_si(light_source_type, light_source_name, light_source_base_type);
    }
    return light_source_type;
}


// 0x002FF930 is_a_light_source__C12light_source
#include "KS/SRC/light.h"

bool light_source::is_a_light_source() const {
    return true;
}

// 0x002FF940 get_color__C12light_source
#include "KS/SRC/light.h"

const color& light_source::get_color() const {
    return properties->get_color();
}

// 0x002FF980 get_additive_color__C12light_source
#include "KS/SRC/light.h"

const color& light_source::get_additive_color() const {
    return properties->get_additive_color();
}

// 0x002FF9C0 get_near_range__C12light_source
#include "KS/SRC/light.h"

float light_source::get_near_range() const {
    return properties->get_near_range();
}

// 0x002FF9F0 get_lightcat__C12light_source
#include "KS/SRC/light.h"

unsigned int light_source::get_lightcat() const {
    return properties->get_lightcat();
}

// 0x002FFA00 set_lightcat__12light_sourceUi
#include "KS/SRC/light.h"

void light_source::set_lightcat(unsigned int value) {
    properties->set_lightcat(value);
}

// 0x002FFA10 get_cutoff_range__C12light_source
#include "KS/SRC/light.h"

float light_source::get_cutoff_range() const {
    return properties->get_cutoff_range();
}

// 0x002FF950 set_color__12light_sourceRC5color
#include "KS/SRC/light.h"

void light_source::set_color(const color &value) {
    properties->set_color(value);
}

// 0x002FF990 set_additive_color__12light_sourceRC5color
#include "KS/SRC/light.h"

void light_source::set_additive_color(const color &value) {
    properties->set_additive_color(value);
}
