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

#if defined(KELLY_DECOMP_FUNCTION_001198D0)
// 0x001198D0 mem_cleanup__7po_anim
extern int allocated; extern void *data_a; extern void *data_b; extern void (*cleanup)();
void arch_free(void *memory);
__asm__(".equ allocated, 0x003E5794"); __asm__(".equ data_a, 0x003E579C");
__asm__(".equ data_b, 0x003E5798"); __asm__(".equ cleanup, 0x003E57A4");
__asm__(".equ arch_free__FPv, 0x002AC768");
class po_anim { public: static void mem_cleanup(); };
void po_anim::mem_cleanup() {
    if (allocated) { arch_free(data_a); arch_free(data_b); allocated=0; if (cleanup) cleanup(); }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119B10)
// 0x00119B10 mem_cleanup__t11linear_anim1Z10quaternion
class quaternion;
extern int allocated; extern void *data_a; extern void *data_b; extern void (*cleanup)();
void arch_free(void *memory);
__asm__(".equ allocated, 0x003E57AC"); __asm__(".equ data_a, 0x003E57B4");
__asm__(".equ data_b, 0x003E57B0"); __asm__(".equ cleanup, 0x003E57BC");
__asm__(".equ arch_free__FPv, 0x002AC768");
template <class T> class linear_anim { public: static void mem_cleanup(); };
template <> void linear_anim<quaternion>::mem_cleanup() {
    if (allocated) { arch_free(data_a); arch_free(data_b); allocated=0; if (cleanup) cleanup(); }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119D50)
// 0x00119D50 mem_cleanup__t11linear_anim1Z8vector3d
class vector3d;
extern int allocated; extern void *data_a; extern void *data_b; extern void (*cleanup)();
void arch_free(void *memory);
__asm__(".equ allocated, 0x003E57C4"); __asm__(".equ data_a, 0x003E57CC");
__asm__(".equ data_b, 0x003E57C8"); __asm__(".equ cleanup, 0x003E57D4");
__asm__(".equ arch_free__FPv, 0x002AC768");
template <class T> class linear_anim { public: static void mem_cleanup(); };
template <> void linear_anim<vector3d>::mem_cleanup() {
    if (allocated) { arch_free(data_a); arch_free(data_b); allocated=0; if (cleanup) cleanup(); }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119F90)
// 0x00119F90 mem_cleanup__t11linear_anim1Zf
extern int allocated; extern void *data_a; extern void *data_b; extern void (*cleanup)();
void arch_free(void *memory);
__asm__(".equ allocated, 0x003E57DC"); __asm__(".equ data_a, 0x003E57E4");
__asm__(".equ data_b, 0x003E57E0"); __asm__(".equ cleanup, 0x003E57EC");
__asm__(".equ arch_free__FPv, 0x002AC768");
template <class T> class linear_anim { public: static void mem_cleanup(); };
template <> void linear_anim<float>::mem_cleanup() {
    if (allocated) { arch_free(data_a); arch_free(data_b); allocated=0; if (cleanup) cleanup(); }
}
#endif
