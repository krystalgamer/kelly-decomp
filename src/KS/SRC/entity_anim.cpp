// entity_anim definitions extracted by generated one-function shims.

// 0x001140D8 set_po_anim__11entity_animP7po_anim
#include "KS/SRC/entity_anim.h"

void entity_anim::set_po_anim(po_anim *pp)
{
    delete po_anim_ptr;
    po_anim_ptr = pp;
}

// 0x00113578 __nw__11entity_animUiUiPCci
#include "KS/SRC/entity_anim.h"

void* entity_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { return entity_anim::operator new(size); }

// 0x001137C0 __nw__16entity_anim_treeUiUiPCci
#include "KS/SRC/entity_anim.h"

void* entity_anim_tree::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { return entity_anim_tree::operator new(size); }

// 0x00114968 get_root__17entity_track_tree
#include "KS/SRC/entity_anim.h"

entity_track_node *entity_track_tree::get_root() {
    return root_nodes;
}

// 0x00114E60 binary_extension__17entity_track_tree
#include "KS/SRC/entity_anim.h"

extern const char binary_extension_literal[];

const char* entity_track_tree::binary_extension() {
    return binary_extension_literal;
}

// 0x00114E78 extension__17entity_track_tree
#include "KS/SRC/entity_anim.h"

const char* entity_track_tree::extension() { return binary_extension(); }

// 0x001177D0 set_timescale_factor__16entity_anim_treef
#include "KS/SRC/entity_anim.h"

void entity_anim_tree::set_timescale_factor(float value) {
    control.set_timescale_factor(value);
    control_b.set_timescale_factor(value);
}

// 0x00114DD8 __nw__17entity_track_treeUi
#include "KS/SRC/entity_anim.h"

void *arch_malloc(unsigned int size, const char *file, int line);
extern const char entity_track_tree_source_file[];
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
void *entity_track_tree::operator new(unsigned int size) { return arch_malloc(size, entity_track_tree_source_file, 0); }

// 0x00114128 __17entity_track_node
#include "KS/SRC/entity_anim.h"

entity_track_node::entity_track_node() : id(NO_ID), m_child(0), m_sibling(0), m_prs_track(0), m_signal_track(0) { owner = OWNS_DATA; }

// 0x00118598 is_root__C16entity_anim_treeP6entity
#include "KS/SRC/entity_anim.h"

bool entity_anim_tree::is_root(entity *value) const
{
    return !anims.empty() && (*anims.begin())->ent == value;
}

// 0x00117640 detach__16entity_anim_tree
struct anim_tree_vtable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*set_flag)(void *self, int flag, bool enabled);
};

class entity_anim_tree {
    char padding[4];
    anim_tree_vtable *vtable;

public:
    void detach();
};

void entity_anim_tree::detach() {
    anim_tree_vtable *table = vtable;
    table->set_flag((char *)this + table->adjustment, 16, false);
}


// 0x00114090 reset_start__11entity_animRC14anim_control_t
struct anim_control_t {};
struct po {};
class po_anim {
    unsigned short flags;
public:
    bool is_flagged(int f) const { return (flags & f); }
    bool is_valid() const { return is_flagged(0x1000); }
    void reset_start(const anim_control_t&, const po&);
};
class entity {
    char padding[16];
public:
    const po& get_rel_po() const { return *(const po*)((const char*)this + 16); }
};
class entity_anim {
    char padding[8];
    entity* ent;
    po_anim* po_anim_ptr;
public:
    bool has_po_anim() const { return po_anim_ptr != 0 && po_anim_ptr->is_valid(); }
    void reset_start(const anim_control_t& ac);
};
__asm__(".equ reset_start__7po_animRC14anim_control_tRC2po, 0x0011BD80");
void entity_anim::reset_start(const anim_control_t& ac)
{
    if (has_po_anim())
    {
        po_anim_ptr->reset_start(ac, ent->get_rel_po());
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x00113490 mem_cleanup__11entity_anim
extern int entity_anim_allocated;
extern void *entity_anim_data_a;
extern void *entity_anim_data_b;
extern void (*entity_anim_cleanup)();
void arch_free(void *memory);
__asm__(".equ entity_anim_allocated, 0x003E572C");
__asm__(".equ entity_anim_data_a, 0x003E5734");
__asm__(".equ entity_anim_data_b, 0x003E5730");
__asm__(".equ entity_anim_cleanup, 0x003E573C");
__asm__(".equ arch_free__FPv, 0x002AC768");
class entity_anim { public: static void mem_cleanup(); };
void entity_anim::mem_cleanup() {
    if (entity_anim_allocated) {
        arch_free(entity_anim_data_a);
        arch_free(entity_anim_data_b);
        entity_anim_allocated=0;
        if (entity_anim_cleanup)
            entity_anim_cleanup();
    }
}

// 0x001136D8 mem_cleanup__16entity_anim_tree
extern int allocated; extern void *data_a; extern void *data_b; extern void (*cleanup)();
void arch_free(void *memory);
__asm__(".equ allocated, 0x003E5744"); __asm__(".equ data_a, 0x003E574C");
__asm__(".equ data_b, 0x003E5748"); __asm__(".equ cleanup, 0x003E5754");
__asm__(".equ arch_free__FPv, 0x002AC768");
class entity_anim_tree { public: static void mem_cleanup(); };
void entity_anim_tree::mem_cleanup() {
    if (allocated) { arch_free(data_a); arch_free(data_b); allocated=0; if (cleanup) cleanup(); }
}

// 0x00114208 compute_duration__C17entity_track_node
struct duration_track {
    float duration;
    float get_duration() const { return duration; }
};
template <class T> inline const T &maximum(const T &a,const T &b) { return a<b?b:a; }
class entity_track_node {
    char padding[0x28];
    duration_track *position_track;
    duration_track *signal_track;
public:
    float compute_duration() const;
};
float entity_track_node::compute_duration() const {
    float duration=0;
    if (position_track) duration=position_track->get_duration();
    if (signal_track)
        duration=maximum(duration,signal_track->get_duration());
    return duration;
}

// 0x00114E00 __dl__17entity_track_treePv
struct substash_layout {
    char padding0[0x24c]; void *stored_buffer;
    char padding1[0x74]; int stash_file_is_open;
    char tail[0x50];
};
extern int current_stash;
extern substash_layout substashes[];
void arch_free(void *memory);
__asm__(".equ current_stash, 0x0046D9C0");
__asm__(".equ substashes, 0x0046B7B8");
__asm__(".equ arch_free__FPv, 0x002AC768");
extern "C" void DeleteTrackTree(void *memory)
    __asm__("__dl__17entity_track_treePv");
void DeleteTrackTree(void *memory) {
    substash_layout &stash=substashes[current_stash];
    bool using_stash=
        stash.stash_file_is_open || stash.stored_buffer;
    if (!using_stash) {
        arch_free(memory);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x00113A50 detach__11entity_anim
struct anim_vtable { char padding[16]; short adjustment; short reserved; void (*clear_flag)(void *, unsigned short); };
struct entity_vtable { char padding[0x518]; short adjustment; short reserved; void (*detach_anim)(void *); };
class entity {
    char padding[8];
    entity_vtable *vtable;
public:
    void detach_anim() { entity_vtable *table = vtable; table->detach_anim((char *)this + table->adjustment); }
};
class entity_anim {
    unsigned short flags;
    unsigned short padding;
    anim_vtable *vtable;
    entity *ent;
public:
    bool is_attached() const { return (flags & 0x10) != 0; }
    void clear_flag(unsigned short flag) { anim_vtable *table = vtable; table->clear_flag((char *)this + table->adjustment, flag); }
    void detach();
};
void entity_anim::detach()
{
    if (flags & 0x10) {
        clear_flag(0x10);
        if (ent)
            ent->detach_anim();
    }
}

// 0x00118470 reset_root_position__16entity_anim_tree
struct anim_control_t{char p[32];};struct entity_anim{unsigned short flags;void reset_start(const anim_control_t&);};struct Vec{entity_anim**start;entity_anim**finish;entity_anim**end;};class entity_anim_tree{char p0[72];anim_control_t control;Vec*anims;float floor_offset;void*trackb;float blend_b;Vec anims_b;anim_control_t control_b;public:void reset_root_position();};asm(".equ reset_start__11entity_animRC14anim_control_t,0x00114090");void entity_anim_tree::reset_root_position(){if(anims->start!=anims->finish){entity_anim*a=*anims->start;if((a->flags&0x1000)&&(a->flags&1)&&(a->flags&0x10)){a->reset_start(control);if(trackb&&anims_b.start!=anims_b.finish){entity_anim*b=*anims_b.start;if((b->flags&0x1000)&&(b->flags&1)){b->reset_start(control_b);asm volatile("");}}}}}

// 0x001133D8 check_mem_init__11entity_anim
#include "KS/SRC/entity_anim.h"
#include "KS/SRC/staticmem.h"

extern const char entity_anim_mem_description[];

__asm__(".equ _11entity_anim$meminit, 0x003E572C");
__asm__(".equ _11entity_anim$allocated, 0x003E5730");
__asm__(".equ _11entity_anim$membuffer, 0x003E5734");
__asm__(".equ _11entity_anim$mem_init_func, 0x003E5738");
__asm__(".equ _11entity_anim$mem_free_func, 0x003E573C");
__asm__(".equ _11entity_anim$current_allocation, 0x003E5740");
__asm__(".equ entity_anim_mem_description, 0x004C9020");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, entity_anim_mem_description, 0)

void entity_anim::check_mem_init(void)
{
	if ( !meminit )
	{
		membuffer=malloc(1000*sizeof(entity_anim));
		if ( membuffer==NULL ) return;
		memset(membuffer,0,1000*sizeof(entity_anim));
		allocated=(bool *) malloc(1000*sizeof(bool));
		if ( allocated==NULL ) return;
		memset(allocated,0,1000*sizeof(bool));
		meminit=true;
		if (mem_init_func)
		{ void (*func) () = (void (*) ()) mem_init_func; (*func) (); }
	}
}

#undef malloc

// 0x001172E0 clear_anims__16entity_anim_tree
#include "KS/SRC/entity_anim.h"
// Uses the released GCC 2 vector resize/erase structure from shared context.

__asm__(".equ memmove, 0x003D17CC");
__asm__(
    ".equ insert__t6vector2ZP11entity_animZt12my_allocator1ZP11entity_anim"
    "PP11entity_animUiRCP11entity_anim, 0x0011ED10"
);

void entity_anim_tree::clear_anims()
{
//	if ( anims )
	{
	  register entity_anim_tree* self asm("$18") = this;
	  {
	  register pentity_anim_vector::const_iterator i asm("$16") = self->anims.begin();
	  register pentity_anim_vector::const_iterator i_end asm("$17") = self->anims.end();
	  for ( ; i!=i_end; ++i )
		{
		  delete *i;
		}
	  }
	  self->anims.resize(0); // reuse the memory (dc 04/25/02)
	}
}

// 0x00113618 check_mem_init__16entity_anim_tree
#include "KS/SRC/entity_anim.h"
#include "KS/SRC/staticmem.h"

extern const char entity_anim_tree_mem_description[];

__asm__(".equ _16entity_anim_tree$meminit, 0x003E5744");
__asm__(".equ _16entity_anim_tree$allocated, 0x003E5748");
__asm__(".equ _16entity_anim_tree$membuffer, 0x003E574C");
__asm__(".equ _16entity_anim_tree$mem_init_func, 0x003E5750");
__asm__(".equ _16entity_anim_tree$mem_free_func, 0x003E5754");
__asm__(".equ _16entity_anim_tree$current_allocation, 0x003E5758");
__asm__(".equ entity_anim_tree_mem_description, 0x004C90A8");
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
__asm__(".equ memset, 0x003D18D0");

#define malloc(size) arch_malloc(size, entity_anim_tree_mem_description, 0)

void entity_anim_tree::check_mem_init(void)
{
    if (!meminit)
    {
        membuffer = malloc(1000 * sizeof(entity_anim_tree));
        if (membuffer == NULL)
            return;
        memset(membuffer, 0, 1000 * sizeof(entity_anim_tree));
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

// Source implementation boundary.
// 0x00120868 __tf11entity_anim
#include "KS/SRC/entity_anim.h"

extern "C" void **entity_anim_base_rtti() __asm__("__tft4anim1ZP6entity");
extern "C" void *entity_anim_base_type[] __asm__("__tit4anim1ZP6entity");
extern "C" void *entity_anim_type[] __asm__("__ti11entity_anim");
extern "C" const char entity_anim_name[];

__asm__(".equ __tft4anim1ZP6entity, 0x00121B18");
__asm__(".equ __tit4anim1ZP6entity, 0x00511FD0");
__asm__(".equ __ti11entity_anim, 0x005A26D8");
__asm__(".equ entity_anim_name, 0x004CA468");

extern "C" void **entity_anim_rtti() __asm__("__tf11entity_anim");
void **entity_anim_rtti()
{
    if (!entity_anim_type[0]) {
        entity_anim_base_rtti();
        __rtti_si(entity_anim_type, entity_anim_name, entity_anim_base_type);
    }
    return entity_anim_type;
}


// 0x00120A40 set_flag__16entity_anim_tree12anim_flags_t
enum anim_flags_t {
    ANIM_ATTACHED = 16
};

struct anim_control {
    char padding0[0x18];
    unsigned int flags;
    char padding1[0x20];

    void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled) {
            flags |= flag;
        } else {
            flags &= ~flag;
        }
    }
};

class entity_anim {
    unsigned short flags;

public:
    void set_flag(anim_flags_t flag) {
        flags |= flag;
    }
};

class entity_anim_tree : public entity_anim {
    char padding[0x46];
    anim_control control;
    anim_control control_b;

public:
    void set_flag(anim_flags_t flag);
};

void entity_anim_tree::set_flag(anim_flags_t flag) {
    control.set_flag(flag, true);
    control_b.set_flag(flag, true);
    entity_anim::set_flag(flag);
}

// 0x00120950 set_time__11entity_animf
struct po_anim_vtable {
    char padding[0x20];
    short adjustment;
    short padding2;
    void (*set_time)(void *self, float time);
};

struct po_anim_layout {
    char padding[4];
    po_anim_vtable *vtable;
};

class entity_anim {
    char padding[0x0C];
    po_anim_layout *po_anim_ptr;

public:
    void set_time(float time);
};

void entity_anim::set_time(float time)
{
    po_anim_layout *animation = po_anim_ptr;
    if (animation) {
        po_anim_vtable *table = animation->vtable;
        table->set_time((char *)animation + table->adjustment, time);
    }
}

// 0x00120A88 clear_flag__16entity_anim_tree12anim_flags_t
enum anim_flags_t {
    ANIM_ATTACHED = 16
};

struct anim_control {
    char padding0[0x18];
    unsigned int flags;
    char padding1[0x20];

    void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
};

class entity_anim {
    unsigned short flags;

public:
    void clear_flag(anim_flags_t flag) {
        flags &= ~flag;
    }
};

class entity_anim_tree : public entity_anim {
    char padding[0x46];
    anim_control control;
    anim_control control_b;

public:
    void clear_flag(anim_flags_t flag);
};

void entity_anim_tree::clear_flag(anim_flags_t flag)
{
    control.set_flag(flag, false);
    control_b.set_flag(flag, false);
    entity_anim::clear_flag(flag);
}

// 0x001208B8 _$_11entity_anim
struct AnimVtable{char p[64];short adj;short z;void(*destroy)(void*,int);};struct SubAnim{char p[4];AnimVtable*vtable;};struct entity_anim{char p0[4];void*vtable;char p1[4];SubAnim*po_anim_ptr;SubAnim*signal_anim_ptr;};extern void*vt;extern "C" void detach(entity_anim*)__asm__("detach__11entity_anim");extern "C" void del(entity_anim*)__asm__("__dl__11entity_animPv");__asm__(".equ vt,0x004CA170");__asm__(".equ detach__11entity_anim,0x00113A50");__asm__(".equ __dl__11entity_animPv,0x00113598");extern "C" void destroy(entity_anim*,int)__asm__("_$_11entity_anim");void destroy(entity_anim*self,int flag){self->vtable=&vt;if(self->po_anim_ptr){SubAnim*a=self->po_anim_ptr;AnimVtable*v=a->vtable;v->destroy((char*)a+v->adj,3);}if(self->signal_anim_ptr){SubAnim*a=self->signal_anim_ptr;AnimVtable*v=a->vtable;v->destroy((char*)a+v->adj,3);}detach(self);if(flag&1){del(self);asm volatile("");}}

// 0x00120B10 set_flag__16entity_anim_tree12anim_flags_tb
struct BaseVtable{char p[8];short set_adj;short z0;void(*set)(void*,int);short clear_adj;short z1;void(*clear)(void*,int);};struct Control{char p[24];unsigned flags;char rest[32];void set_flag(int f,bool on){if(on)flags|=f;else flags&=~f;}};class entity_anim_tree{public:char p0[4];BaseVtable*vtable;char p1[64];Control control;Control control_b;void set_flag(int,bool)__asm__("set_flag__16entity_anim_tree12anim_flags_tb");};void entity_anim_tree::set_flag(int f,bool torf){control.set_flag(f,torf);control_b.set_flag(f,torf);if(torf){BaseVtable*v=vtable;v->set((char*)this+v->set_adj,f);}else{BaseVtable*v=vtable;v->clear((char*)this+v->clear_adj,f);}}
