// marker inline definitions extracted by generated one-function shims.


// 0x002B91C8 is_a_marker__C6marker
#include "KS/SRC/marker.h"

bool marker::is_a_marker() const {
    return true;
}

// 0x002B91D0 possibly_active__C6marker
#include "KS/SRC/marker.h"

bool marker::possibly_active() const {
    return false;
}

// 0x002B91D8 possibly_aging__C6marker
#include "KS/SRC/marker.h"

bool marker::possibly_aging() const {
    return false;
}

// 0x002B9288 is_a_rectangle_marker__C16rectangle_marker
class rectangle_marker {
public:
    bool is_a_rectangle_marker() const;
};

bool rectangle_marker::is_a_rectangle_marker() const {
    return true;
}

// 0x002B9370 is_a_cube_marker__C11cube_marker
class cube_marker {
public:
    bool is_a_cube_marker() const;
};

bool cube_marker::is_a_cube_marker() const {
    return true;
}

// 0x002B9150 _$_6marker
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void MarkerDtor(void *self) __asm__("_$_6marker");
__asm__(".equ _$_6entity, 0x001298C8");
void MarkerDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002B91E0 _$_16rectangle_marker
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void RectangleMarkerDtor(void *self) __asm__("_$_16rectangle_marker");
__asm__(".equ _$_6entity, 0x001298C8");
void RectangleMarkerDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002B9170 __tf6marker
#include "KS/SRC/rtti.h"
extern "C" void **MarkerBaseRtti() __asm__("__tf6entity");
extern "C" void *marker_type[] __asm__("__ti6marker");
extern "C" const char marker_name[];
extern "C" void *marker_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti6marker, 0x005A3E60");
__asm__(".equ marker_name, 0x004FE5B8");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **MarkerRtti() __asm__("__tf6marker");
void **MarkerRtti()
{
    if (!marker_type[0]) {
        MarkerBaseRtti();
        __rtti_si(marker_type, marker_name, marker_base_type);
    }
    return marker_type;
}

// 0x002B9290 _$_11cube_marker
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void CubeMarkerDtor(void *self) __asm__("_$_11cube_marker");
__asm__(".equ _$_6entity, 0x001298C8");
void CubeMarkerDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
