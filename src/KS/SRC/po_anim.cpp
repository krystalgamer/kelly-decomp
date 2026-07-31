// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0011A860)
// 0x0011A860 set_time__7po_animf
#include "KS/SRC/po_anim_shared.h"

void po_anim::set_time(float time)
{
    if (has_P())
        P->set_time(time);
    if (has_R())
        R->set_time(time);
    if (has_S())
        S->set_time(time);
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_0011A1C0)
// 0x0011A1C0 _$_7po_anim
struct po_anim{char pad[4];void*vptr;void*P;void*R;void*S;};extern void*po_vtable[];extern "C" void delP(void*)__asm__("__dl__t11linear_anim1Z8vector3dPv");extern "C" void delR(void*)__asm__("__dl__t11linear_anim1Z10quaternionPv");extern "C" void delS(void*)__asm__("__dl__t11linear_anim1ZfPv");extern "C" void delSelf(void*)__asm__("__dl__7po_animPv");__asm__(".equ po_vtable,0x004CA210");__asm__(".equ __dl__t11linear_anim1Z8vector3dPv,0x00119E58");__asm__(".equ __dl__t11linear_anim1Z10quaternionPv,0x00119C18");__asm__(".equ __dl__t11linear_anim1ZfPv,0x0011A098");__asm__(".equ __dl__7po_animPv,0x001199D8");extern "C" void dtor(po_anim*self,int deleting)__asm__("_$_7po_anim");void dtor(po_anim*self,int deleting){self->vptr=po_vtable;if(self->P)delP(self->P);if(self->R)delR(self->R);if(self->S)delS(self->S);if(deleting&1){delSelf(self);KELLY_DECOMP_COMPILER_BARRIER();}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119930)
// 0x00119930 __nw__7po_animUi
extern "C" void check()__asm__("check_alias");extern "C" void nglPrintf(const char*,...)__asm__("nglPrintf__FPCce");extern const char format_text[];extern const char class_text[];__asm__(".equ check_alias,0x00119810");__asm__(".equ nglPrintf__FPCce,0x003AC050");__asm__(".equ format_text,0x004C9050");__asm__(".equ class_text,0x004C9928");extern "C" void*allocate(unsigned)__asm__("__nw__7po_animUi");void*allocate(unsigned){check();register char*allocated_high asm("$7")=(char*)0x003e0000;register char*current_high asm("$8")=(char*)0x003e0000;register int one asm("$9")=1;register char*memory_high asm("$10")=(char*)0x003e0000;int i=0,offset=0;for(;i<1000;i++,offset+=88){asm volatile("" : : : "memory");int*slots=*(int**)(allocated_high+22424);if(!slots[i]){*(int*)(current_high+22440)=i;slots[i]=one;char*memory=*(char**)(memory_high+22428);return memory+offset;}}nglPrintf(format_text,class_text);return(void*)-1;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119A58)
// 0x00119A58 check_mem_init__t11linear_anim1Z10quaternion
#include "KS/SRC/linear_anim.h"
#include "KS/SRC/staticmem.h"

extern const char linear_quaternion_mem_description[];

__asm__(".equ _t11linear_anim1Z10quaternion$meminit, 0x003E57AC");
__asm__(".equ _t11linear_anim1Z10quaternion$allocated, 0x003E57B0");
__asm__(".equ _t11linear_anim1Z10quaternion$membuffer, 0x003E57B4");
__asm__(".equ _t11linear_anim1Z10quaternion$mem_init_func, 0x003E57B8");
__asm__(".equ _t11linear_anim1Z10quaternion$mem_free_func, 0x003E57BC");
__asm__(".equ _t11linear_anim1Z10quaternion$current_allocation, 0x003E57C0");
__asm__(".equ linear_quaternion_mem_description, 0x004C9930");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, linear_quaternion_mem_description, 0)

void linear_anim<quaternion>::check_mem_init(void)
{
	if ( !meminit )
	{
		membuffer=malloc(1000*sizeof(linear_anim<quaternion>));
		if ( membuffer==NULL ) return;
		memset(membuffer,0,1000*sizeof(linear_anim<quaternion>));
		allocated=(bool *) malloc(1000*sizeof(bool));
		if ( allocated==NULL ) return;
		memset(allocated,0,1000*sizeof(bool));
		meminit=true;
		if (mem_init_func)
		{ void (*func) () = (void (*) ()) mem_init_func; (*func) (); }
	}
}

#undef malloc
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119C98)
// 0x00119C98 check_mem_init__t11linear_anim1Z8vector3d
#include "KS/SRC/linear_anim.h"
#include "KS/SRC/staticmem.h"

extern const char linear_vector_mem_description[];

__asm__(".equ _t11linear_anim1Z8vector3d$meminit, 0x003E57C4");
__asm__(".equ _t11linear_anim1Z8vector3d$allocated, 0x003E57C8");
__asm__(".equ _t11linear_anim1Z8vector3d$membuffer, 0x003E57CC");
__asm__(".equ _t11linear_anim1Z8vector3d$mem_init_func, 0x003E57D0");
__asm__(".equ _t11linear_anim1Z8vector3d$mem_free_func, 0x003E57D4");
__asm__(".equ _t11linear_anim1Z8vector3d$current_allocation, 0x003E57D8");
__asm__(".equ linear_vector_mem_description, 0x004C9990");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, linear_vector_mem_description, 0)

void linear_anim<vector3d>::check_mem_init(void)
{
	if ( !meminit )
	{
		membuffer=malloc(1000*sizeof(linear_anim<vector3d>));
		if ( membuffer==NULL ) return;
		memset(membuffer,0,1000*sizeof(linear_anim<vector3d>));
		allocated=(bool *) malloc(1000*sizeof(bool));
		if ( allocated==NULL ) return;
		memset(allocated,0,1000*sizeof(bool));
		meminit=true;
		if (mem_init_func)
		{ void (*func) () = (void (*) ()) mem_init_func; (*func) (); }
	}
}

#undef malloc
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119ED8)
// 0x00119ED8 check_mem_init__t11linear_anim1Zf
#include "KS/SRC/linear_anim.h"
#include "KS/SRC/staticmem.h"

extern const char linear_float_mem_description[];

__asm__(".equ _t11linear_anim1Zf$meminit, 0x003E57DC");
__asm__(".equ _t11linear_anim1Zf$allocated, 0x003E57E0");
__asm__(".equ _t11linear_anim1Zf$membuffer, 0x003E57E4");
__asm__(".equ _t11linear_anim1Zf$mem_init_func, 0x003E57E8");
__asm__(".equ _t11linear_anim1Zf$mem_free_func, 0x003E57EC");
__asm__(".equ _t11linear_anim1Zf$current_allocation, 0x003E57F0");
__asm__(".equ linear_float_mem_description, 0x004C99E8");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, linear_float_mem_description, 0)

void linear_anim<float>::check_mem_init(void)
{
	if ( !meminit )
	{
		membuffer=malloc(1000*sizeof(linear_anim<float>));
		if ( membuffer==NULL ) return;
		memset(membuffer,0,1000*sizeof(linear_anim<float>));
		allocated=(bool *) malloc(1000*sizeof(bool));
		if ( allocated==NULL ) return;
		memset(allocated,0,1000*sizeof(bool));
		meminit=true;
		if (mem_init_func)
		{ void (*func) () = (void (*) ()) mem_init_func; (*func) (); }
	}
}

#undef malloc
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119750)
// 0x00119750 _$_9PRS_track
#include "decomp_annotations.h"

struct track_layout
{
    int num_keys;
    void *keys;
};

struct PRS_track_layout
{
    float duration;
    unsigned int flags;
    track_layout *P;
    track_layout *R;
    track_layout *S;
};

extern "C" void delete_keys(void *memory)
    __asm__("__builtin_vec_delete");
extern "C" void delete_track(void *memory)
    __asm__("__builtin_delete");

__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern "C" void destroy_prs_track(PRS_track_layout *self, int deleting)
    __asm__("_$_9PRS_track");

void destroy_prs_track(PRS_track_layout *self, int deleting)
{
    track_layout *track = self->P;
    if (track)
    {
        if (track->keys)
            delete_keys(track->keys);
        delete_track(track);
    }

    track = self->R;
    if (track)
    {
        if (track->keys)
            delete_keys(track->keys);
        delete_track(track);
    }

    track = self->S;
    if (track)
    {
        if (track->keys)
            delete_keys(track->keys);
        delete_track(track);
    }

    if (deleting & 1)
    {
        delete_track(self);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119810)
// 0x00119810 check_mem_init__7po_anim
#include "KS/SRC/po_anim_shared.h"
#include "KS/SRC/staticmem.h"

extern const char po_anim_mem_description[];

__asm__(".equ _7po_anim$meminit, 0x003E5794");
__asm__(".equ _7po_anim$allocated, 0x003E5798");
__asm__(".equ _7po_anim$membuffer, 0x003E579C");
__asm__(".equ _7po_anim$mem_init_func, 0x003E57A0");
__asm__(".equ _7po_anim$mem_free_func, 0x003E57A4");
__asm__(".equ _7po_anim$current_allocation, 0x003E57A8");
__asm__(".equ po_anim_mem_description, 0x004C9900");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, po_anim_mem_description, 0)

void po_anim::check_mem_init(void)
{
    if (!meminit)
    {
        membuffer = malloc(1000 * sizeof(po_anim));
        if (membuffer == NULL)
            return;
        memset(membuffer, 0, 1000 * sizeof(po_anim));
        allocated = (bool *)malloc(1000 * sizeof(bool));
        if (allocated == NULL)
            return;
        memset(allocated, 0, 1000 * sizeof(bool));
        meminit = true;
        if (mem_init_func)
        {
            void (*func)() = (void (*)())mem_init_func;
            (*func)();
        }
    }
}

#undef malloc
#endif
