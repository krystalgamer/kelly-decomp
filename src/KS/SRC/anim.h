// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00121B58)
#include "KS/SRC/linear_anim_shared.h"

extern "C" void **key_quat_base_rtti() __asm__("__tft4anim1Z10quaternion");
extern "C" void *key_quat_base_type[] __asm__("__tit4anim1Z10quaternion");
extern "C" void *key_quat_type[]
    __asm__("__tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
extern "C" const char key_quat_name[];

__asm__(".equ __tft4anim1Z10quaternion, 0x00121C88");
__asm__(".equ __tit4anim1Z10quaternion, 0x00511FD8");
__asm__(".equ __tit8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion, 0x005A2728");
__asm__(".equ key_quat_name, 0x004CA538");

// 0x00121B58 key_anim<quaternion> RTTI
extern "C" void **key_quat_rtti()
    __asm__("__tft8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternion");
void **key_quat_rtti()
{
    if (!key_quat_type[0]) {
        key_quat_base_rtti();
        __rtti_si(key_quat_type, key_quat_name, key_quat_base_type);
    }
    return key_quat_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121BF8)
#include "KS/SRC/linear_anim_shared.h"

extern "C" void **key_float_base_rtti() __asm__("__tft4anim1Zf");
extern "C" void *key_float_base_type[] __asm__("__tit4anim1Zf");
extern "C" void *key_float_type[]
    __asm__("__tit8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf");
extern "C" const char key_float_name[];

__asm__(".equ __tft4anim1Zf, 0x00121CC8");
__asm__(".equ __tit4anim1Zf, 0x00511FE8");
__asm__(".equ __tit8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf, 0x005A2748");
__asm__(".equ key_float_name, 0x004CA5E0");

// 0x00121BF8 key_anim<float> RTTI
extern "C" void **key_float_rtti()
    __asm__("__tft8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zf");
void **key_float_rtti()
{
    if (!key_float_type[0]) {
        key_float_base_rtti();
        __rtti_si(key_float_type, key_float_name, key_float_base_type);
    }
    return key_float_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121BA8)
#include "KS/SRC/linear_anim_shared.h"

extern "C" void **key_vec_base_rtti() __asm__("__tft4anim1Z8vector3d");
extern "C" void *key_vec_base_type[] __asm__("__tit4anim1Z8vector3d");
extern "C" void *key_vec_type[]
    __asm__("__tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
extern "C" const char key_vec_name[];

__asm__(".equ __tft4anim1Z8vector3d, 0x00121C48");
__asm__(".equ __tit4anim1Z8vector3d, 0x00511FE0");
__asm__(".equ __tit8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d, 0x005A2738");
__asm__(".equ key_vec_name, 0x004CA590");

// 0x00121BA8 key_anim<vector3d> RTTI
extern "C" void **key_vec_rtti()
    __asm__("__tft8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3d");
void **key_vec_rtti()
{
    if (!key_vec_type[0]) {
        key_vec_base_rtti();
        __rtti_si(key_vec_type, key_vec_name, key_vec_base_type);
    }
    return key_vec_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00120A30)
// 0x00120A30 set_flag__t4anim1ZP6entity12anim_flags_t
class entity;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<entity*>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120A70)
// 0x00120A70 clear_flag__t4anim1ZP6entity12anim_flags_t
class entity;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<entity*>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120BA8)
// 0x00120BA8 set_flag__t4anim1Z2po12anim_flags_t
class po;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<po>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120BB8)
// 0x00120BB8 clear_flag__t4anim1Z2po12anim_flags_t
class po;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<po>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120C20)
// 0x00120C20 set_flag__t4anim1Z10signal_key12anim_flags_t
class signal_key;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<signal_key>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120C30)
// 0x00120C30 clear_flag__t4anim1Z10signal_key12anim_flags_t
class signal_key;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<signal_key>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120D88)
// 0x00120D88 set_flag__t4anim1Z8vector3d12anim_flags_t
class vector3d;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<vector3d>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120D98)
// 0x00120D98 clear_flag__t4anim1Z8vector3d12anim_flags_t
class vector3d;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<vector3d>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120E00)
// 0x00120E00 set_flag__t4anim1Z10quaternion12anim_flags_t
class quaternion;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<quaternion>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120E10)
// 0x00120E10 clear_flag__t4anim1Z10quaternion12anim_flags_t
class quaternion;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<quaternion>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120E78)
// 0x00120E78 set_flag__t4anim1Zf12anim_flags_t
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<float>::set_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120E88)
// 0x00120E88 clear_flag__t4anim1Zf12anim_flags_t
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<float>::clear_flag(anim_flags_t flag);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120EF0)
// 0x00120EF0 frame_advance__t4anim1Z10signal_keyRC14anim_control_tP10signal_key
class anim_control_t;
class signal_key {
};

template <class T>
class anim {
public:
    virtual void frame_advance(const anim_control_t &control, T *destination);
};

template <>
void anim<signal_key>::frame_advance(
    const anim_control_t &control,
    signal_key *destination
) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A70)
// 0x00121A70 frame_advance__t4anim1ZP6entityRC14anim_control_tPP6entity
class anim_control_t;
class entity;

template <class T>
class anim {
public:
    virtual void frame_advance(const anim_control_t &control, T *destination);
};

template <>
void anim<entity *>::frame_advance(
    const anim_control_t &control,
    entity **destination
) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A78)
// 0x00121A78 get_value__Ct4anim1ZP6entityRC14anim_control_tPP6entity
class anim_control_t;
class entity;

template <class T>
class anim {
public:
    virtual void get_value(
        const anim_control_t &control,
        T *destination
    ) const;
};

template <>
void anim<entity *>::get_value(
    const anim_control_t &control,
    entity **destination
) const {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A80)
// 0x00121A80 get_value__Ct4anim1ZP6entityfPP6entity
class entity;

template <class T>
class anim {
public:
    virtual void get_value(float time, T *destination) const;
};

template <>
void anim<entity *>::get_value(float time, entity **destination) const {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A88)
// 0x00121A88 get_value__Ct4anim1Z10signal_keyRC14anim_control_tP10signal_key
class anim_control_t;
class signal_key {
};

template <class T>
class anim {
public:
    virtual void get_value(
        const anim_control_t &control,
        T *destination
    ) const;
};

template <>
void anim<signal_key>::get_value(
    const anim_control_t &control,
    signal_key *destination
) const {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A90)
// 0x00121A90 get_value__Ct4anim1Z10signal_keyfP10signal_key
class signal_key {
};

template <class T>
class anim {
public:
    virtual void get_value(float time, T *destination) const;
};

template <>
void anim<signal_key>::get_value(float time, signal_key *destination) const {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121A98)
// 0x00121A98 __tft4anim1Z2po
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FC0"); asm(".equ type_name, 0x004CA4F8");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z2po");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121AD8)
// 0x00121AD8 __tft4anim1Z10signal_key
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FC8"); asm(".equ type_name, 0x004CA508");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z10signal_key");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121B18)
// 0x00121B18 __tft4anim1ZP6entity
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FD0"); asm(".equ type_name, 0x004CA520");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1ZP6entity");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121C48)
// 0x00121C48 __tft4anim1Z8vector3d
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FE0"); asm(".equ type_name, 0x004CA618");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z8vector3d");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121C88)
// 0x00121C88 __tft4anim1Z10quaternion
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FD8"); asm(".equ type_name, 0x004CA630");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Z10quaternion");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121CC8)
// 0x00121CC8 __tft4anim1Zf
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FE8"); asm(".equ type_name, 0x004CA648");
extern "C" void *GetTypeInfo() __asm__("__tft4anim1Zf");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120AC0)
// 0x00120AC0 set_flag__t4anim1ZP6entity12anim_flags_tb
#include "KS/SRC/anim_shared.h"
class entity;
template void anim<entity *>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120BD0)
// 0x00120BD0 set_flag__t4anim1Z2po12anim_flags_tb
#include "KS/SRC/anim_shared.h"
class po;
template void anim<po>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120C48)
// 0x00120C48 set_flag__t4anim1Z10signal_key12anim_flags_tb
#include "KS/SRC/anim_shared.h"
class signal_key;
template void anim<signal_key>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120DB0)
// 0x00120DB0 set_flag__t4anim1Z8vector3d12anim_flags_tb
#include "KS/SRC/anim_shared.h"
class vector3d;
template void anim<vector3d>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120E28)
// 0x00120E28 set_flag__t4anim1Z10quaternion12anim_flags_tb
#include "KS/SRC/anim_shared.h"
class quaternion;
template void anim<quaternion>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120EA0)
// 0x00120EA0 set_flag__t4anim1Zf12anim_flags_tb
#include "KS/SRC/anim_shared.h"
template void anim<float>::set_flag(anim_flags_t flag, bool enabled);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00120F38)
// 0x00120F38 set_time__t8key_anim3ZfZt10linear_key1ZfZt12linear_track1Zff
struct linear_key_float
{
    float timestamp;
    float value;
};

struct linear_track_float
{
    int num_keys;
    linear_key_float *m_keys;
};

struct key_anim_float_layout
{
    char base[8];
    linear_track_float *track;
    linear_key_float *current_key;
};

extern "C" void SetTime(
    key_anim_float_layout *self, float time
) __asm__(
    "set_time__t8key_anim3ZfZt10linear_key1Zf"
    "Zt12linear_track1Zff"
);

void SetTime(key_anim_float_layout *self, float time)
{
    self->current_key = self->track->m_keys;
    linear_key_float *next_key = self->current_key;
    ++next_key;
    while (next_key !=
               self->track->m_keys + self->track->num_keys &&
           time >= next_key->timestamp)
    {
        ++self->current_key;
        ++next_key;
    }
}
#endif
