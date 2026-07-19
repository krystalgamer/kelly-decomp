// Matching decompilation blocks selected by generated build shims.


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
