// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF108)
// 0x002FF108 _$_17gravity_generator
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17gravity_generator");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF188)
// 0x002FF188 _$_22linear_force_generator
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_22linear_force_generator");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF248)
// 0x002FF248 _$_8launcher
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_8launcher");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF0B8)
// 0x002FF0B8 __tf17gravity_generator
#include "KS/SRC/rtti_shared.h"
extern "C" void **GravityGeneratorBaseRtti() __asm__("__tf15force_generator");
extern "C" void *gravity_generator_type[] __asm__("__ti17gravity_generator");
extern "C" const char gravity_generator_name[];
extern "C" void *force_generator_type[] __asm__("__ti15force_generator");
__asm__(".equ __tf15force_generator, 0x00302B88");
__asm__(".equ __ti17gravity_generator, 0x005A3F20");
__asm__(".equ gravity_generator_name, 0x004F4B40");
__asm__(".equ __ti15force_generator, 0x005A4120");
extern "C" void **GravityGeneratorRtti() __asm__("__tf17gravity_generator");
void **GravityGeneratorRtti()
{
    if (!gravity_generator_type[0]) {
        GravityGeneratorBaseRtti();
        __rtti_si(gravity_generator_type, gravity_generator_name, force_generator_type);
    }
    return gravity_generator_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF138)
// 0x002FF138 __tf22linear_force_generator
#include "KS/SRC/rtti_shared.h"
extern "C" void **LinearForceGeneratorBaseRtti() __asm__("__tf15force_generator");
extern "C" void *linear_force_generator_type[] __asm__("__ti22linear_force_generator");
extern "C" const char linear_force_generator_name[];
extern "C" void *linear_force_generator_base_type[] __asm__("__ti15force_generator");
__asm__(".equ __tf15force_generator, 0x00302B88");
__asm__(".equ __ti22linear_force_generator, 0x005A3F30");
__asm__(".equ linear_force_generator_name, 0x004F4B58");
__asm__(".equ __ti15force_generator, 0x005A4120");
extern "C" void **LinearForceGeneratorRtti() __asm__("__tf22linear_force_generator");
void **LinearForceGeneratorRtti()
{
    if (!linear_force_generator_type[0]) {
        LinearForceGeneratorBaseRtti();
        __rtti_si(
            linear_force_generator_type,
            linear_force_generator_name,
            linear_force_generator_base_type
        );
    }
    return linear_force_generator_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302B88)
// 0x00302B88 __tf15force_generator
#include "KS/SRC/rtti_shared.h"
extern "C" void **ForceGeneratorBaseRtti() __asm__("__tf13motion_object");
extern "C" void *force_generator_rtti_type[] __asm__("__ti15force_generator");
extern "C" const char force_generator_name[];
extern "C" void *motion_object_type[] __asm__("__ti13motion_object");
__asm__(".equ __tf13motion_object, 0x002FF038");
__asm__(".equ __ti15force_generator, 0x005A4120");
__asm__(".equ force_generator_name, 0x004F4E20");
__asm__(".equ __ti13motion_object, 0x00512168");
extern "C" void **ForceGeneratorRtti() __asm__("__tf15force_generator");
void **ForceGeneratorRtti()
{
    if (!force_generator_rtti_type[0]) {
        ForceGeneratorBaseRtti();
        __rtti_si(force_generator_rtti_type, force_generator_name, motion_object_type);
    }
    return force_generator_rtti_type;
}
#endif
