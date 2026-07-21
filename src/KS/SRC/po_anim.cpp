// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001199B8)
// 0x001199B8 __nw__7po_animUiUiPCci
class po_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__7po_animUi, 0x00119930");
void* po_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = po_anim::operator new(size); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011C170)
// 0x0011C170 get_unadjusted_value__C7po_animfP8vector3d
struct anim_control_t {};
struct vector3d { float x; float y; float z; };
struct track_flags { unsigned short flags; unsigned short padding; };
class po_track : public track_flags {
public:
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual void reserved4();
    virtual void get_value(const anim_control_t&, vector3d*) const;
    virtual void get_value(float, vector3d*) const;
};
class po_anim {
    char padding[8];
    po_track* P;
public:
    bool has_P() const { return P && (P->flags & 0x1000) != 0; }
    void get_unadjusted_value(float, vector3d*) const;
};
void po_anim::get_unadjusted_value(float time, vector3d* destination) const
{
    if (has_P())
        P->get_value(time, destination);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119BF8)
// 0x00119BF8 __nw__t11linear_anim1Z10quaternionUiUiPCci
class quaternion;
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1Z10quaternionUi, 0x00119B70");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<quaternion>::operator new(unsigned int, unsigned int, const char*, int);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119E38)
// 0x00119E38 __nw__t11linear_anim1Z8vector3dUiUiPCci
class vector3d;
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1Z8vector3dUi, 0x00119DB0");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<vector3d>::operator new(unsigned int, unsigned int, const char*, int);
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011A078)
// 0x0011A078 __nw__t11linear_anim1ZfUiUiPCci
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1ZfUi, 0x00119FF0");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<float>::operator new(unsigned int, unsigned int, const char*, int);
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0011C128)
// 0x0011C128 get_unadjusted_value__C7po_animRC14anim_control_tP8vector3d
struct anim_control_t {};
struct vector3d { float x; float y; float z; };
struct track_flags { unsigned short flags; unsigned short padding; };
class po_track : public track_flags {
public:
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual void reserved4();
    virtual void get_value(const anim_control_t&, vector3d*) const;
    virtual void get_value(float, vector3d*) const;
};
class po_anim {
    char padding[8];
    po_track* P;
public:
    bool has_P() const { return P && (P->flags & 0x1000) != 0; }
    void get_unadjusted_value(const anim_control_t&, vector3d*) const;
};
void po_anim::get_unadjusted_value(const anim_control_t& control, vector3d* destination) const
{
    if (has_P())
        P->get_value(control, destination);
}
#endif
