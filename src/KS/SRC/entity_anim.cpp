// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001140D8)
#include "KS/SRC/entity_anim_shared.h"

// 0x001140D8 set_po_anim__11entity_animP7po_anim
void entity_anim::set_po_anim(po_anim *pp)
{
    delete po_anim_ptr;
    po_anim_ptr = pp;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00113578)
// 0x00113578 __nw__11entity_animUiUiPCci
class entity_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__11entity_animUi, 0x001134F0");
void* entity_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity_anim::operator new(size); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001137C0)
// 0x001137C0 __nw__16entity_anim_treeUiUiPCci
class entity_anim_tree { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__16entity_anim_treeUi, 0x00113738");
void* entity_anim_tree::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity_anim_tree::operator new(size); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114968)
// 0x00114968 get_root__17entity_track_tree
class entity_track_node {
};

class entity_track_tree {
    char padding[0x20];
    entity_track_node root_nodes[1];

public:
    entity_track_node *get_root();
};

entity_track_node *entity_track_tree::get_root() {
    return root_nodes;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114E60)
// 0x00114E60 binary_extension__17entity_track_tree
extern const char binary_extension_literal[];

__asm__(".equ binary_extension_literal, 0x004C92A8");

class entity_track_tree {
public:
    static const char* binary_extension();
};

const char* entity_track_tree::binary_extension() {
    return binary_extension_literal;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114E78)
// 0x00114E78 extension__17entity_track_tree
class entity_track_tree { public: static const char* binary_extension(); static const char* extension(); };
__asm__(".equ binary_extension__17entity_track_tree, 0x00114E60");
const char* entity_track_tree::extension() { const char* result = binary_extension(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00115DB0)
// 0x00115DB0 ett_free__11ett_managerPv
void mem_free(void* pointer);
__asm__(".equ mem_free__FPv, 0x002AC768");
class ett_manager { public: void ett_free(void* pointer); };
void ett_manager::ett_free(void* pointer) { mem_free(pointer); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001177D0)
// 0x001177D0 set_timescale_factor__16entity_anim_treef
class anim_control {
    char padding[0x18];
    float timescale;
    char trailing_padding[0x20];

public:
    void set_timescale_factor(float value) {
        timescale = value;
    }
};

class entity_anim_tree {
    char padding[0x3C];
    anim_control control;
    anim_control control_b;

public:
    void set_timescale_factor(float value);
};

void entity_anim_tree::set_timescale_factor(float value) {
    control.set_timescale_factor(value);
    control_b.set_timescale_factor(value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114DD8)
// 0x00114DD8 __nw__17entity_track_treeUi
void *arch_malloc(unsigned int size, const char *file, int line);
__asm__(".equ arch_malloc__FUiPCci, 0x002AC6F0");
class entity_track_tree { public: static void *operator new(unsigned int size); };
void *entity_track_tree::operator new(unsigned int size) { const char *file = (const char *)0x004C0000; __asm__ volatile("" : "+r"(file)); file -= 0x6d98; void *result = arch_malloc(size, file, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114128)
// 0x00114128 __17entity_track_node
class entity_track_node { int field0; int field4; char padding[0x18]; int field20; int field24; int field28; int field2c; public: entity_track_node(); };
entity_track_node::entity_track_node() { field0 = -1; field4 = 1; field20 = 0; field24 = 0; field28 = 0; field2c = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001185C8)
// 0x001185C8 set_blend__16entity_anim_treeff
class entity_anim_tree { char padding0[0x44]; float blend_a; char padding1[0x2c]; float blend_b; public: void set_blend(float first, float second); };
void entity_anim_tree::set_blend(float first, float second) { float sum = first + second; float one = 1.0f; __asm__ volatile("nop"); float reciprocal = one / sum; blend_a = first * reciprocal; blend_b = second * reciprocal; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00118598)
// 0x00118598 is_root__C16entity_anim_treeP6entity
class entity;
struct entity_anim { char padding[8]; entity *ent; };
struct anim_vector { entity_anim **begin; entity_anim **end; };
class entity_anim_tree { char padding[0x68]; anim_vector *anims; public: bool is_root(entity *value) const; };
bool entity_anim_tree::is_root(entity *value) const { return anims->begin != anims->end && (*anims->begin)->ent == value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00117640)
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
#endif


#if defined(KELLY_DECOMP_FUNCTION_00114090)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00113490)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001136D8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00114208)
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
#endif
