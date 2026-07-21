// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00105570)
// 0x00105570 pop_disable__12ai_interface
class ai_interface { char padding[0x30]; int disable_count; public: void pop_disable(); };
void ai_interface::pop_disable() { --disable_count; if (disable_count < 0) disable_count = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105A18)
// 0x00105A18 render__12ai_interfacec
class ai_interface {
public:
    void render(char level);
};

void ai_interface::render(char level) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105E00)
// 0x00105E00 get_ifc_str__12ai_interfaceRC7pstringR7stringx
class pstring;
class stringx;

class ai_interface {
public:
    bool get_ifc_str(const pstring &att, stringx &val);
};

bool ai_interface::get_ifc_str(const pstring &att, stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105E08)
// 0x00105E08 set_ifc_str__12ai_interfaceRC7pstringRC7stringx
class pstring;
class stringx;

class ai_interface {
public:
    bool set_ifc_str(const pstring &att, const stringx &val);
};

bool ai_interface::set_ifc_str(const pstring &att, const stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001058A0)
// 0x001058A0 set_current_path_graph__12ai_interfaceP10path_graph
asm(".equ clear_path__13ai_locomotion, 0x00107FD8");
class path_graph;
class ai_locomotion {
    char padding[0x64];
    path_graph *current_path_graph;
public:
    void clear_path();
    void set_current_path_graph(path_graph *g) { clear_path(); current_path_graph = g; }
};
class ai_interface {
    char padding[0x14];
    ai_locomotion *locomotion;
public:
    void set_current_path_graph(path_graph *g);
};
void ai_interface::set_current_path_graph(path_graph *g)
{
    if (locomotion)
        locomotion->set_current_path_graph(g);
}
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00105528)
// 0x00105528 push_disable__12ai_interface
__asm__(".equ goto_position__12ai_interfaceRC8vector3dfbbb, 0x00105688");
struct vector3d { float x; float y; float z; };
struct po { char padding[48]; vector3d position; };
struct entity {
    char padding[80];
    po* my_po;
    const vector3d& get_abs_position() const { return my_po->position; }
};
class ai_interface {
    char padding0[4];
    entity* my_entity;
    char padding1[40];
    int disable_count;
public:
    void goto_position(const vector3d&, float, bool, bool, bool);
    void push_disable();
};
void ai_interface::push_disable()
{
    ++disable_count;
    goto_position(my_entity->get_abs_position(), 25.0f, true, false, true);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
