// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00316D68)
// 0x00316D68 read_value__14slc_vector3d_tR10chunk_filePc
class chunk_file;
struct vector3d {
    float x;
    float y;
    float z;
};

extern void serial_in(chunk_file &, float *);
__asm__(".equ serial_in__FR10chunk_filePf, 0x00336998");

class slc_vector3d_t {
public:
    void read_value(chunk_file &fs, char *buf);
};

void slc_vector3d_t::read_value(chunk_file &fs, char *buf)
{
    vector3d *value = (vector3d *)buf;
    serial_in(fs, &value->x);
    serial_in(fs, &value->y);
    serial_in(fs, &value->z);
    // Preserve the released non-tail call after the inlined vector overload.
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00329148)
// 0x00329148 __cl__24slf_vector3d_construct_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_vector3d_construct_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_vector3d_construct_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003290D8)
// 0x003290D8 _$_24slf_vector3d_construct_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003290D8(void *self) __asm__("_$_24slf_vector3d_construct_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003290D8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329150)
// 0x00329150 _$_18slf_vector3d_add_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329150(void *self) __asm__("_$_18slf_vector3d_add_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329150(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329348)
// 0x00329348 _$_23slf_vector3d_subtract_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329348(void *self) __asm__("_$_23slf_vector3d_subtract_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329348(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329540)
// 0x00329540 _$_25slf_vector3d_mul_scalar_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329540(void *self) __asm__("_$_25slf_vector3d_mul_scalar_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329540(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329728)
// 0x00329728 _$_25slf_vector3d_div_scalar_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329728(void *self) __asm__("_$_25slf_vector3d_div_scalar_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329728(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329920)
// 0x00329920 _$_20slf_vector3d_equal_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329920(void *self) __asm__("_$_20slf_vector3d_equal_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329920(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329B58)
// 0x00329B58 _$_24slf_vector3d_not_equal_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329B58(void *self) __asm__("_$_24slf_vector3d_not_equal_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329B58(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329D98)
// 0x00329D98 _$_21slf_vector3d_length_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329D98(void *self) __asm__("_$_21slf_vector3d_length_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329D98(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329F98)
// 0x00329F98 _$_22slf_vector3d_length2_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00329F98(void *self) __asm__("_$_22slf_vector3d_length2_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00329F98(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A178)
// 0x0032A178 _$_22slf_vector3d_xy_norm_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032A178(void *self) __asm__("_$_22slf_vector3d_xy_norm_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032A178(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A368)
// 0x0032A368 _$_22slf_vector3d_xz_norm_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032A368(void *self) __asm__("_$_22slf_vector3d_xz_norm_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032A368(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A558)
// 0x0032A558 _$_16slf_vector3d_x_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032A558(void *self) __asm__("_$_16slf_vector3d_x_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032A558(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A720)
// 0x0032A720 _$_16slf_vector3d_y_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032A720(void *self) __asm__("_$_16slf_vector3d_y_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032A720(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A8E8)
// 0x0032A8E8 _$_16slf_vector3d_z_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032A8E8(void *self) __asm__("_$_16slf_vector3d_z_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032A8E8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032AAB0)
// 0x0032AAB0 _$_10slf_dot3_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032AAB0(void *self) __asm__("_$_10slf_dot3_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032AAB0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032ACA0)
// 0x0032ACA0 _$_12slf_cross3_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032ACA0(void *self) __asm__("_$_12slf_cross3_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032ACA0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032AEB8)
// 0x0032AEB8 _$_13slf_normal3_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032AEB8(void *self) __asm__("_$_13slf_normal3_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032AEB8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B120)
// 0x0032B120 _$_16slf_distance3d_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032B120(void *self) __asm__("_$_16slf_distance3d_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032B120(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032B340)
// 0x0032B340 _$_20slf_angle_between3_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_0032B340(void *self) __asm__("_$_20slf_angle_between3_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_0032B340(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003290F8)
// 0x003290F8 __tf24slf_vector3d_construct_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003290F8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003290F8[]
    __asm__("__ti24slf_vector3d_construct_t");
extern "C" const char rtti_name_003290F8[];
extern "C" void *rtti_base_type_003290F8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti24slf_vector3d_construct_t, 0x005A4B50");
__asm__(".equ rtti_name_003290F8, 0x0050F8A8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003290F8() __asm__("__tf24slf_vector3d_construct_t");

void **Rtti_003290F8()
{
    if (!rtti_type_003290F8[0]) {
        RttiBase_003290F8();
        __rtti_si(rtti_type_003290F8, rtti_name_003290F8, rtti_base_type_003290F8);
    }
    return rtti_type_003290F8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329170)
// 0x00329170 __tf18slf_vector3d_add_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329170()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329170[]
    __asm__("__ti18slf_vector3d_add_t");
extern "C" const char rtti_name_00329170[];
extern "C" void *rtti_base_type_00329170[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti18slf_vector3d_add_t, 0x005A4B60");
__asm__(".equ rtti_name_00329170, 0x0050F8C8");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329170() __asm__("__tf18slf_vector3d_add_t");

void **Rtti_00329170()
{
    if (!rtti_type_00329170[0]) {
        RttiBase_00329170();
        __rtti_si(rtti_type_00329170, rtti_name_00329170, rtti_base_type_00329170);
    }
    return rtti_type_00329170;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329368)
// 0x00329368 __tf23slf_vector3d_subtract_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329368()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329368[]
    __asm__("__ti23slf_vector3d_subtract_t");
extern "C" const char rtti_name_00329368[];
extern "C" void *rtti_base_type_00329368[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti23slf_vector3d_subtract_t, 0x005A4B70");
__asm__(".equ rtti_name_00329368, 0x0050F8E0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329368() __asm__("__tf23slf_vector3d_subtract_t");

void **Rtti_00329368()
{
    if (!rtti_type_00329368[0]) {
        RttiBase_00329368();
        __rtti_si(rtti_type_00329368, rtti_name_00329368, rtti_base_type_00329368);
    }
    return rtti_type_00329368;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329560)
// 0x00329560 __tf25slf_vector3d_mul_scalar_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329560()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329560[]
    __asm__("__ti25slf_vector3d_mul_scalar_t");
extern "C" const char rtti_name_00329560[];
extern "C" void *rtti_base_type_00329560[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti25slf_vector3d_mul_scalar_t, 0x005A4B80");
__asm__(".equ rtti_name_00329560, 0x0050F900");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329560() __asm__("__tf25slf_vector3d_mul_scalar_t");

void **Rtti_00329560()
{
    if (!rtti_type_00329560[0]) {
        RttiBase_00329560();
        __rtti_si(rtti_type_00329560, rtti_name_00329560, rtti_base_type_00329560);
    }
    return rtti_type_00329560;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329748)
// 0x00329748 __tf25slf_vector3d_div_scalar_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329748()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329748[]
    __asm__("__ti25slf_vector3d_div_scalar_t");
extern "C" const char rtti_name_00329748[];
extern "C" void *rtti_base_type_00329748[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti25slf_vector3d_div_scalar_t, 0x005A4B90");
__asm__(".equ rtti_name_00329748, 0x0050F920");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329748() __asm__("__tf25slf_vector3d_div_scalar_t");

void **Rtti_00329748()
{
    if (!rtti_type_00329748[0]) {
        RttiBase_00329748();
        __rtti_si(rtti_type_00329748, rtti_name_00329748, rtti_base_type_00329748);
    }
    return rtti_type_00329748;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329940)
// 0x00329940 __tf20slf_vector3d_equal_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329940()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329940[]
    __asm__("__ti20slf_vector3d_equal_t");
extern "C" const char rtti_name_00329940[];
extern "C" void *rtti_base_type_00329940[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_vector3d_equal_t, 0x005A4BA0");
__asm__(".equ rtti_name_00329940, 0x0050F940");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329940() __asm__("__tf20slf_vector3d_equal_t");

void **Rtti_00329940()
{
    if (!rtti_type_00329940[0]) {
        RttiBase_00329940();
        __rtti_si(rtti_type_00329940, rtti_name_00329940, rtti_base_type_00329940);
    }
    return rtti_type_00329940;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329B78)
// 0x00329B78 __tf24slf_vector3d_not_equal_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329B78()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329B78[]
    __asm__("__ti24slf_vector3d_not_equal_t");
extern "C" const char rtti_name_00329B78[];
extern "C" void *rtti_base_type_00329B78[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti24slf_vector3d_not_equal_t, 0x005A4BB0");
__asm__(".equ rtti_name_00329B78, 0x0050F958");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329B78() __asm__("__tf24slf_vector3d_not_equal_t");

void **Rtti_00329B78()
{
    if (!rtti_type_00329B78[0]) {
        RttiBase_00329B78();
        __rtti_si(rtti_type_00329B78, rtti_name_00329B78, rtti_base_type_00329B78);
    }
    return rtti_type_00329B78;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329DB8)
// 0x00329DB8 __tf21slf_vector3d_length_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329DB8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329DB8[]
    __asm__("__ti21slf_vector3d_length_t");
extern "C" const char rtti_name_00329DB8[];
extern "C" void *rtti_base_type_00329DB8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti21slf_vector3d_length_t, 0x005A4BC0");
__asm__(".equ rtti_name_00329DB8, 0x0050F978");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329DB8() __asm__("__tf21slf_vector3d_length_t");

void **Rtti_00329DB8()
{
    if (!rtti_type_00329DB8[0]) {
        RttiBase_00329DB8();
        __rtti_si(rtti_type_00329DB8, rtti_name_00329DB8, rtti_base_type_00329DB8);
    }
    return rtti_type_00329DB8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00329FB8)
// 0x00329FB8 __tf22slf_vector3d_length2_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00329FB8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00329FB8[]
    __asm__("__ti22slf_vector3d_length2_t");
extern "C" const char rtti_name_00329FB8[];
extern "C" void *rtti_base_type_00329FB8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_vector3d_length2_t, 0x005A4BD0");
__asm__(".equ rtti_name_00329FB8, 0x0050F990");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00329FB8() __asm__("__tf22slf_vector3d_length2_t");

void **Rtti_00329FB8()
{
    if (!rtti_type_00329FB8[0]) {
        RttiBase_00329FB8();
        __rtti_si(rtti_type_00329FB8, rtti_name_00329FB8, rtti_base_type_00329FB8);
    }
    return rtti_type_00329FB8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A198)
// 0x0032A198 __tf22slf_vector3d_xy_norm_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032A198()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032A198[]
    __asm__("__ti22slf_vector3d_xy_norm_t");
extern "C" const char rtti_name_0032A198[];
extern "C" void *rtti_base_type_0032A198[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_vector3d_xy_norm_t, 0x005A4BE0");
__asm__(".equ rtti_name_0032A198, 0x0050F9B0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032A198() __asm__("__tf22slf_vector3d_xy_norm_t");

void **Rtti_0032A198()
{
    if (!rtti_type_0032A198[0]) {
        RttiBase_0032A198();
        __rtti_si(rtti_type_0032A198, rtti_name_0032A198, rtti_base_type_0032A198);
    }
    return rtti_type_0032A198;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A388)
// 0x0032A388 __tf22slf_vector3d_xz_norm_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032A388()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032A388[]
    __asm__("__ti22slf_vector3d_xz_norm_t");
extern "C" const char rtti_name_0032A388[];
extern "C" void *rtti_base_type_0032A388[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti22slf_vector3d_xz_norm_t, 0x005A4BF0");
__asm__(".equ rtti_name_0032A388, 0x0050F9D0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032A388() __asm__("__tf22slf_vector3d_xz_norm_t");

void **Rtti_0032A388()
{
    if (!rtti_type_0032A388[0]) {
        RttiBase_0032A388();
        __rtti_si(rtti_type_0032A388, rtti_name_0032A388, rtti_base_type_0032A388);
    }
    return rtti_type_0032A388;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A578)
// 0x0032A578 __tf16slf_vector3d_x_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032A578()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032A578[]
    __asm__("__ti16slf_vector3d_x_t");
extern "C" const char rtti_name_0032A578[];
extern "C" void *rtti_base_type_0032A578[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti16slf_vector3d_x_t, 0x005A4C00");
__asm__(".equ rtti_name_0032A578, 0x0050F9F0");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032A578() __asm__("__tf16slf_vector3d_x_t");

void **Rtti_0032A578()
{
    if (!rtti_type_0032A578[0]) {
        RttiBase_0032A578();
        __rtti_si(rtti_type_0032A578, rtti_name_0032A578, rtti_base_type_0032A578);
    }
    return rtti_type_0032A578;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A740)
// 0x0032A740 __tf16slf_vector3d_y_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032A740()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032A740[]
    __asm__("__ti16slf_vector3d_y_t");
extern "C" const char rtti_name_0032A740[];
extern "C" void *rtti_base_type_0032A740[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti16slf_vector3d_y_t, 0x005A4C10");
__asm__(".equ rtti_name_0032A740, 0x0050FA08");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032A740() __asm__("__tf16slf_vector3d_y_t");

void **Rtti_0032A740()
{
    if (!rtti_type_0032A740[0]) {
        RttiBase_0032A740();
        __rtti_si(rtti_type_0032A740, rtti_name_0032A740, rtti_base_type_0032A740);
    }
    return rtti_type_0032A740;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032A908)
// 0x0032A908 __tf16slf_vector3d_z_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032A908()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_0032A908[]
    __asm__("__ti16slf_vector3d_z_t");
extern "C" const char rtti_name_0032A908[];
extern "C" void *rtti_base_type_0032A908[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti16slf_vector3d_z_t, 0x005A4C20");
__asm__(".equ rtti_name_0032A908, 0x0050FA20");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_0032A908() __asm__("__tf16slf_vector3d_z_t");

void **Rtti_0032A908()
{
    if (!rtti_type_0032A908[0]) {
        RttiBase_0032A908();
        __rtti_si(rtti_type_0032A908, rtti_name_0032A908, rtti_base_type_0032A908);
    }
    return rtti_type_0032A908;
}
#endif
