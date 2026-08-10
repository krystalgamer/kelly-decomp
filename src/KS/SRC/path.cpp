// Matching decompilation blocks selected by generated build shims.


// 0x0034A238 pop_way_point__4path
#include "KS/SRC/path.h"
void path::pop_way_point() { ++waypoint; }

// 0x0034A080 is_patrol_id__C15path_graph_edgei
#include "KS/SRC/path.h"
bool path_graph_edge::is_patrol_id(int id) const { return is_flagged((unsigned short)(0x100 << id)); }

// 0x0034A0A8 render__15path_graph_edgeP6cameraG7color32f
#include "KS/SRC/path.h"
void render_beam(const vector3d &start, const vector3d &end, color32 color, float thickness);
__asm__(".equ render_beam__FRC8vector3dT0G7color32f, 0x002C88E0");
void path_graph_edge::render(camera *camera_link, color32 color, float thickness) { render_beam(nodes[0]->pt, nodes[1]->pt, color, thickness); }

// 0x0034AB30 node_in_graph__C10path_graphRC8vector3d
#include "KS/SRC/path.h"
__asm__(".equ get_node__C10path_graphRC8vector3d, 0x0034AF58");
bool path_graph::node_in_graph(const vector3d &point) const { return get_node(point) != 0; }

// 0x0034AB98 edge_in_graph__C10path_graphPC15path_graph_nodeT1
#include "KS/SRC/path.h"
__asm__(".equ get_edge__C10path_graphPC15path_graph_nodeT1, 0x0034AFF0");
bool path_graph::edge_in_graph(const path_graph_node *first, const path_graph_node *second) const { return get_edge(first, second) != 0; }

// 0x0034A058 clear__15path_graph_edge
#include "KS/SRC/path.h"
void path_graph_edge::clear() { nodes[0] = nodes[1] = 0; flags = 0; distance = 0.0f; weight_modifier = 1.0f; additional_weight_modifier = 0.0f; bias = 0.0f; }

// 0x0034AD68 add_edge__10path_graphiiUsf
#include "KS/SRC/path.h"
__asm__(".equ add_edge__10path_graphP15path_graph_nodeT1Usf, 0x0034ADA0");
extern "C" void add_path_graph_edge(
    path_graph *graph,
    path_graph_node *first,
    path_graph_node *second,
    unsigned short flags,
    float modifier
) __asm__("add_edge__10path_graphP15path_graph_nodeT1Usf");

void path_graph::add_edge(int node1, int node2, unsigned short flags, float modifier)
{
    void (*add)(
        path_graph *,
        path_graph_node *,
        path_graph_node *,
        unsigned short,
        float
    ) = add_path_graph_edge;
    add(this, nodes[node1], nodes[node2], flags, modifier);
}

// 0x00349F88 sort_edges_weight__15path_graph_node
#include "KS/SRC/path.h"
void sort_edges_by_weight(vector<path_graph_edge *>& edges) __asm__("sort_edges_by_weight__FRt6vector2ZP15path_graph_edgeZt12my_allocator1ZP15path_graph_edge");
asm(".equ sort_edges_by_weight__FRt6vector2ZP15path_graph_edgeZt12my_allocator1ZP15path_graph_edge, 0x00349D30");
void path_graph_node::sort_edges_weight()
{
    if (!is_weight_sorted()) {
        set_flag(4, false);
        set_flag(2, true);
        void (*sort)(vector<path_graph_edge *> &) =
            sort_edges_by_weight;
        sort(edges);
    }
}

// 0x0034B078 get_node_id__C10path_graphP15path_graph_node
#include "KS/SRC/path.h"
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

// 0x0034AFF0 get_edge__C10path_graphPC15path_graph_nodeT1
#include "KS/SRC/path.h"
path_graph_edge *path_graph::get_edge(const path_graph_node *n1,const path_graph_node *n2) const {if(n1&&n2){for(vector<path_graph_edge *>::const_iterator i=edges.begin();i!=edges.end();++i){path_graph_edge*e=*i;if(e&&((e->nodes[0]==n1&&e->nodes[1]==n2)||(e->nodes[0]==n2&&e->nodes[1]==n1)))return e;}}return 0;}

// 0x00349C40 path_graph_system_destruct__Fv
struct vec{void**begin,**end,**cap;};extern vec*workspace;extern "C" void arch_free(void*)__asm__("arch_free__FPv");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");extern void*free_lists[];__asm__(".equ workspace,0x0047ED30");__asm__(".equ arch_free__FPv,0x002AC768");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ free_lists,0x003E5628");extern "C" void destruct()__asm__("path_graph_system_destruct__Fv");void destruct(){vec*v=workspace;if(v){void**cap=v->cap;void*begin=v->begin;unsigned count=cap-(void**)begin;if(count){unsigned bytes=count*4;if(bytes>=129)arch_free(begin);else{unsigned index=((bytes+7)>>3)-1;*(void**)begin=free_lists[index];free_lists[index]=begin;}}builtin_delete(v);asm volatile("");}}

// 0x00349DC8 _$_15path_graph_node
struct layout{char padding0[20];void**start;void**finish;void**end;void*vtable;};extern char target_vtable;extern void*free_list[];extern "C" void clear_node(layout*)__asm__("clear__15path_graph_node");extern "C" void arch_free(void*)__asm__("arch_free__FPv");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");asm(".equ target_vtable,0x00504068");asm(".equ free_list,0x003E5628");asm(".equ clear__15path_graph_node,0x00349E78");asm(".equ arch_free__FPv,0x002AC768");asm(".equ __builtin_delete,0x002AC6B0");extern "C" void dtor(layout*,int)__asm__("_$_15path_graph_node");void dtor(layout*self,int deleting){self->vtable=&target_vtable;clear_node(self);void**p=self->start;unsigned n=self->end-p;if(n){unsigned bytes=n*4;if(bytes>128)arch_free(p);else{unsigned index=(bytes+7)/8-1;*p=free_list[index];free_list[index]=p;}}if(deleting&1){builtin_delete(self);asm volatile("");}}

// 0x0034A108 _$_4path
struct layout{void**start;void**finish;void**end;char padding[16];void*vtable;};extern char target_vtable;extern void*free_list[];extern "C" void clear_path(layout*)__asm__("clear__4path");extern "C" void arch_free(void*)__asm__("arch_free__FPv");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");asm(".equ target_vtable,0x00504038");asm(".equ free_list,0x003E5628");asm(".equ clear__4path,0x0034A1B8");asm(".equ arch_free__FPv,0x002AC768");asm(".equ __builtin_delete,0x002AC6B0");extern "C" void dtor(layout*,int)__asm__("_$_4path");void dtor(layout*self,int deleting){self->vtable=&target_vtable;clear_path(self);void**p=self->start;unsigned n=self->end-p;if(n){unsigned bytes=n*4;if(bytes>128)arch_free(p);else{unsigned index=(bytes+7)/8-1;*p=free_list[index];free_list[index]=p;}}if(deleting&1){builtin_delete(self);asm volatile("");}}

// 0x0034A450 get_next_way_point__4pathRC8vector3dT1fP8vector3dPPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeb
#include "KS/SRC/path.h"
__asm__(
    ".equ crossed_point__FG8vector3dRC8vector3dT1fb, "
    "0x0034A2C0");
__asm__(
    ".equ get_cur_way_point__C4pathP8vector3d"
    "PPQ2t5graph4Z7stringxZP6regionZP6portal"
    "Zt4less1Z7stringx4node, 0x0034A248");

bool path::get_next_way_point(
    const vector3d &cur_pos,
    const vector3d &last_pos,
    float radius,
    vector3d *vec,
    region_node **dest_region,
    bool force_xz)
{
    *dest_region = 0;
    if (!nodes.empty() && waypoint < (int)nodes.size())
    {
        if (crossed_point(
            nodes[waypoint]->pt,
            cur_pos,
            last_pos,
            radius,
            force_xz))
            pop_way_point();

        return get_cur_way_point(vec, dest_region);
    }

    return false;
}

// Source implementation boundary.
// 0x00360DF0 __tf15path_graph_node
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_00360DF0_type[] __asm__("__ti15path_graph_node");
extern "C" char rtti_00360DF0_name[] __asm__("rtti_00360DF0_type_name");
__asm__(".equ __ti15path_graph_node, 0x005121E0");
__asm__(".equ rtti_00360DF0_type_name, 0x00505858");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_00360DF0() __asm__("__tf15path_graph_node");
void **rtti_00360DF0(){if(!rtti_00360DF0_type[0])__rtti_user(rtti_00360DF0_type,rtti_00360DF0_name);return rtti_00360DF0_type;}

// 0x00360E68 __tf15path_graph_edge
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_00360E68_type[] __asm__("__ti15path_graph_edge");
extern "C" char rtti_00360E68_name[] __asm__("rtti_00360E68_type_name");
__asm__(".equ __ti15path_graph_edge, 0x005121E8");
__asm__(".equ rtti_00360E68_type_name, 0x00505870");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_00360E68() __asm__("__tf15path_graph_edge");
void **rtti_00360E68(){if(!rtti_00360E68_type[0])__rtti_user(rtti_00360E68_type,rtti_00360E68_name);return rtti_00360E68_type;}

// 0x00360ED8 __tf4path
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_00360ED8_type[] __asm__("__ti4path");
extern "C" char rtti_00360ED8_name[] __asm__("rtti_00360ED8_type_name");
__asm__(".equ __ti4path, 0x005121F0");
__asm__(".equ rtti_00360ED8_type_name, 0x00505888");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_00360ED8() __asm__("__tf4path");
void **rtti_00360ED8(){if(!rtti_00360ED8_type[0])__rtti_user(rtti_00360ED8_type,rtti_00360ED8_name);return rtti_00360ED8_type;}

// 0x00360F30 __tf10path_graph
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *path_graph_type[] __asm__("__ti10path_graph");
extern "C" char path_graph_name[];
__asm__(".equ __ti10path_graph, 0x005121F8");
__asm__(".equ path_graph_name, 0x00505890");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **path_graph_rtti() __asm__("__tf10path_graph");
void **path_graph_rtti(){if(!path_graph_type[0])__rtti_user(path_graph_type,path_graph_name);return path_graph_type;}
