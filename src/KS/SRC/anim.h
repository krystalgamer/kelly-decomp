// Matching decompilation blocks selected by generated build shims.


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
