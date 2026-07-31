#ifndef KELLY_DECOMP_PATH_SHARED_H
#define KELLY_DECOMP_PATH_SHARED_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/algebra.h"
#include "g++-2/stl_map.h"

class path_graph_edge;
class region;
class portal;

template <class T>
class vector {
    T *start;
    T *finish;
    T *end_of_storage;

public:
    inline vector() : start(0), finish(0), end_of_storage(0) {}
    inline bool empty() const { return start == finish; }
    inline unsigned int size() const { return finish - start; }
    inline T &operator[](unsigned int index) { return start[index]; }
    inline const T &operator[](unsigned int index) const {
        return start[index];
    }
};

template<class Key, class Value, class Edge, class Compare>
class graph {
public:
    class node;
};

typedef graph<
    stringx,
    region *,
    portal *,
    less<stringx>
>::node region_node;

class path_graph_node {
public:
    vector3d pt;
    region_node *my_region;
};

class path {
    vector<path_graph_node *> nodes;
    float distance;
    float weight;
    float additional_weight_mod;
    int waypoint;

public:
    void pop_way_point();
    bool get_cur_way_point(
        vector3d *point,
        region_node **destination) const;
    bool get_next_way_point(
        const vector3d &current_position,
        const vector3d &last_position,
        float radius,
        vector3d *point,
        region_node **destination,
        bool force_xz = false);
};

bool crossed_point(
    vector3d test_point,
    const vector3d &current_position,
    const vector3d &last_position,
    float radius,
    bool force_xz);

extern vector<path_graph_edge *> *patrol_edges_workspace;
extern const char path_graph_construct_desc[];

void *operator new(
    unsigned int size,
    unsigned int flags,
    const char *description,
    int line);

__asm__(".equ crossed_point__FG8vector3dRC8vector3dT1fb, 0x0034A2C0");
__asm__(".equ pop_way_point__4path, 0x0034A238");
__asm__(".equ get_cur_way_point__C4pathP8vector3dPPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node, 0x0034A248");

#endif
