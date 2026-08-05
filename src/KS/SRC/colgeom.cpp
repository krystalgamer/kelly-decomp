// Matching decompilation blocks selected by generated build shims.


// 0x002D8638 __18collision_geometry
#include "KS/SRC/capsule.h"

collision_geometry::collision_geometry()
  : valid(false)
{
}

#if defined(KELLY_DECOMP_FUNCTION_002D8658)
// 0x002D8658 _$_18collision_geometry
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F31E8");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_18collision_geometry");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002DBDB0)
// 0x002DBDB0 compare_cface__FPCvT0
struct vector3d { float x; float y; float z; };
class cface { char padding[0x2c]; vector3d raw_center; public: const vector3d& get_raw_center() const { return raw_center; } };
static int compare_cface(const void* x1, const void* x2)
{
    cface* cf1 = (cface*)x1;
    cface* cf2 = (cface*)x2;
    int result;
    if (cf1->get_raw_center().x < cf2->get_raw_center().x)
        result = -1;
    else if (cf1->get_raw_center().x > cf2->get_raw_center().x)
        result = 1;
    else
        return 0;
    __asm__ volatile("" : "+r"(result));
    return result;
}
#endif
