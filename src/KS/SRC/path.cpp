// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034A238)
// 0x0034A238 pop_way_point__4path
class path { char padding[0x18]; int waypoint; public: void pop_way_point(); };
void path::pop_way_point() { ++waypoint; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A080)
// 0x0034A080 is_patrol_id__C15path_graph_edgei
class path_graph_edge { char padding[8]; unsigned short flags; bool is_flagged(unsigned short flag) const { return flags & flag; } public: bool is_patrol_id(int id) const; };
bool path_graph_edge::is_patrol_id(int id) const { return is_flagged((unsigned short)(0x100 << id)); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A0A8)
// 0x0034A0A8 render__15path_graph_edgeP6cameraG7color32f
class camera;
struct vector3d { float x; float y; float z; };
struct color32 { unsigned int value; };
void render_beam(const vector3d &start, const vector3d &end, color32 color, float thickness);
__asm__(".equ render_beam__FRC8vector3dT0G7color32f, 0x002C88E0");
class path_graph_node { public: vector3d point; };
class path_graph_edge { path_graph_node *nodes[2]; public: void render(camera *camera_link, color32 color, float thickness); };
void path_graph_edge::render(camera *camera_link, color32 color, float thickness) { render_beam(nodes[0]->point, nodes[1]->point, color, thickness); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034AB30)
// 0x0034AB30 node_in_graph__C10path_graphRC8vector3d
struct vector3d;
class path_graph_node;
class path_graph { public: path_graph_node *get_node(const vector3d &point) const; bool node_in_graph(const vector3d &point) const; };
__asm__(".equ get_node__C10path_graphRC8vector3d, 0x0034AF58");
bool path_graph::node_in_graph(const vector3d &point) const { return get_node(point) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034AB98)
// 0x0034AB98 edge_in_graph__C10path_graphPC15path_graph_nodeT1
class path_graph_node;
class path_graph_edge;
class path_graph { public: path_graph_edge *get_edge(const path_graph_node *first, const path_graph_node *second) const; bool edge_in_graph(const path_graph_node *first, const path_graph_node *second) const; };
__asm__(".equ get_edge__C10path_graphPC15path_graph_nodeT1, 0x0034AFF0");
bool path_graph::edge_in_graph(const path_graph_node *first, const path_graph_node *second) const { return get_edge(first, second) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A058)
// 0x0034A058 clear__15path_graph_edge
class path_graph_edge { void *nodes[2]; unsigned short flags; unsigned short padding; float distance; float weight_modifier; float additional_weight_modifier; float bias; public: void clear(); };
void path_graph_edge::clear() { nodes[0] = nodes[1] = 0; flags = 0; distance = 0.0f; weight_modifier = 1.0f; additional_weight_modifier = 0.0f; bias = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034AD68)
// 0x0034AD68 add_edge__10path_graphiiUsf
class path_graph_node;
template <class T> class vector {
    T *start;
    T *finish;
    T *end_of_storage;
public:
    T &operator[](int index) { return start[index]; }
};
class path_graph { char padding[8]; vector<path_graph_node *> nodes; public: void add_edge(int,int,unsigned short,float); void add_edge(path_graph_node*,path_graph_node*,unsigned short,float); };
__asm__(".equ add_edge__10path_graphP15path_graph_nodeT1Usf, 0x0034ADA0");
void path_graph::add_edge(int node1, int node2, unsigned short flags, float modifier)
{
    add_edge(nodes[node1], nodes[node2], flags, modifier);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00349F88)
// 0x00349F88 sort_edges_weight__15path_graph_node
class path_graph_edge;
struct edge_vector { path_graph_edge **start; path_graph_edge **finish; path_graph_edge **end; };
void sort_edges_by_weight(edge_vector& edges) __asm__("sort_edges_by_weight__FRt6vector2ZP15path_graph_edgeZt12my_allocator1ZP15path_graph_edge");
asm(".equ sort_edges_by_weight__FRt6vector2ZP15path_graph_edgeZt12my_allocator1ZP15path_graph_edge, 0x00349D30");
class path_graph_node {
    char padding[0x10];
    unsigned short flags;
    char padding2[2];
    edge_vector edges;
public:
    unsigned short is_weight_sorted() const { return flags & 2; }
    void set_flag(unsigned short flag, bool value) { if (value) flags |= flag; else flags &= ~flag; }
    void sort_edges_weight();
};
void path_graph_node::sort_edges_weight()
{
    if (!is_weight_sorted()) {
        set_flag(4, false);
        set_flag(2, true);
        sort_edges_by_weight(edges);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034B078)
// 0x0034B078 get_node_id__C10path_graphP15path_graph_node
class path_graph_node;
template <class T> class vector { T *start; T *finish; T *end_storage; public: typedef T *const_iterator; const_iterator begin() const { return start; } const_iterator end() const { return finish; } };
class path_graph { char id[8]; vector<path_graph_node *> nodes; public: int get_node_id(path_graph_node *node) const; };
int path_graph::get_node_id(path_graph_node *node) const
{
  vector<path_graph_node *>::const_iterator i = nodes.begin();
  int id = 0;
  while(i != nodes.end())
  {
    if(*i == node)
      return(id);
    ++id;
    ++i;
  }
  return(-1);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A008)
// 0x0034A008 _$_15path_graph_edge
#include "decomp_annotations.h"

extern "C" void ClearPathGraphEdge(void *self)
    __asm__("clear__15path_graph_edge");
extern "C" void BuiltinDelete(void *self)
    __asm__("__builtin_delete");

__asm__(".equ clear__15path_graph_edge, 0x0034A058");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char path_graph_edge_vtable[];
__asm__(".equ path_graph_edge_vtable, 0x00504050");

struct path_graph_edge_layout {
    char padding[0x28];
    const void *vtable;
};

extern "C" void PathGraphEdgeDtor(void *self, int deleting)
    __asm__("_$_15path_graph_edge");

void PathGraphEdgeDtor(void *self, int deleting)
{
    path_graph_edge_layout *edge = (path_graph_edge_layout *)self;
    edge->vtable = path_graph_edge_vtable;
    ClearPathGraphEdge(edge);
    if (deleting & 1) {
        BuiltinDelete(edge);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A508)
// 0x0034A508 __10path_graph
extern "C" void construct_string(void *) __asm__("__7stringx");
extern const char path_graph_vtable[];
__asm__(".equ __7stringx,0x0034D3E0");
__asm__(".equ path_graph_vtable,0x00504020");
struct path_graph_layout { char id[8]; void *nodes[3]; void *edges[3]; int warnings[4]; const void *vtable; };
extern "C" path_graph_layout *construct_path_graph(path_graph_layout *self) __asm__("__10path_graph");
path_graph_layout *construct_path_graph(path_graph_layout *self)
{
    char scratch[32];
    self->vtable = path_graph_vtable;
    construct_string(self);
    __asm__ __volatile__("" : "+m"(scratch));
    self->nodes[0] = 0;
    void *volatile *nodes = &self->nodes[0];
    nodes[2] = 0;
    void *volatile *edges = &self->edges[0];
    nodes[1] = 0;
    self->edges[0] = 0;
    edges[2] = 0;
    edges[1] = 0;
    self->warnings[0]=0; self->warnings[1]=0; self->warnings[2]=0; self->warnings[3]=0;
    return self;
}
#endif
