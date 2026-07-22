// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00120C98)
#include "KS/SRC/linear_anim_shared.h"

extern "C" void **linear_quat_base_rtti()
    __asm__("__tft8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
extern "C" void *linear_quat_base_type[]
    __asm__("__tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
extern "C" void *linear_quat_type[] __asm__("__tit11linear_anim1Z10quaternion");
extern "C" const char linear_quat_name[];

__asm__(".equ __tft8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion, 0x00121B58");
__asm__(".equ __tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion, 0x005A2728");
__asm__(".equ __tit11linear_anim1Z10quaternion, 0x005A26F8");
__asm__(".equ linear_quat_name, 0x004CA490");

// 0x00120C98 __tft11linear_anim1Z10quaternion
extern "C" void **linear_quat_rtti() __asm__("__tft11linear_anim1Z10quaternion");
void **linear_quat_rtti()
{
    if (!linear_quat_type[0]) {
        linear_quat_base_rtti();
        __rtti_si(linear_quat_type, linear_quat_name, linear_quat_base_type);
    }
    return linear_quat_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120CE8)
#include "KS/SRC/linear_anim_shared.h"

extern "C" void **linear_vec_base_rtti()
    __asm__("__tft8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
extern "C" void *linear_vec_base_type[]
    __asm__("__tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
extern "C" void *linear_vec_type[] __asm__("__tit11linear_anim1Z8vector3d");
extern "C" const char linear_vec_name[];

__asm__(".equ __tft8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d, 0x00121BA8");
__asm__(".equ __tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d, 0x005A2738");
__asm__(".equ __tit11linear_anim1Z8vector3d, 0x005A2708");
__asm__(".equ linear_vec_name, 0x004CA4B0");

// 0x00120CE8 __tft11linear_anim1Z8vector3d
extern "C" void **linear_vec_rtti() __asm__("__tft11linear_anim1Z8vector3d");
void **linear_vec_rtti()
{
    if (!linear_vec_type[0]) {
        linear_vec_base_rtti();
        __rtti_si(linear_vec_type, linear_vec_name, linear_vec_base_type);
    }
    return linear_vec_type;
}
#endif
