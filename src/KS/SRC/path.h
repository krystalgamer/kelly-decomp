#ifndef PATH_H
#define PATH_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/color.h"
#include "KS/SRC/graph.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_map.h"
#include "g++-2/stl_vector.h"

class camera;
class path_graph_edge;
class portal;
class region;

typedef graph<
    stringx,
    region *,
    portal *,
    less<stringx> > region_graph;
typedef region_graph::node region_node;

class path_graph_node {
protected:
    vector3d pt;
    region_node *my_region;
    unsigned short flags;
    vector<path_graph_edge *> edges;

    friend class path_graph_edge;
    friend class path_graph;
    friend class path;

public:
    path_graph_node();
    virtual ~path_graph_node();
    void clear();
    void sort_edges_weight();
    inline bool is_flagged(unsigned short flag) const {
        return (flags & flag) != 0;
    }
    inline void set_flag(
        unsigned short flag,
        bool enabled = true)
    {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
    inline bool is_weight_sorted() const {
        return is_flagged(0x0002);
    }
};

class path_graph_edge {
protected:
    path_graph_node *nodes[2];
    unsigned short flags;
    rational_t distance;
    rational_t weight_modifier;
    rational_t additional_weight_modifier;
    rational_t bias;
    vector3d direction;

    friend class path_graph;
    friend class path_graph_node;
    friend class path;

public:
    path_graph_edge();
    virtual ~path_graph_edge();
    void clear();
    inline bool is_flagged(unsigned short flag) const {
        return (flags & flag) != 0;
    }
    bool is_patrol_id(int id) const;
    void render(
        camera *camera_link,
        color32 color,
        rational_t thickness = 0.05f);
};

class path {
protected:
    vector<path_graph_node *> nodes;
    rational_t distance;
    rational_t weight;
    rational_t additional_weight_mod;
    int waypoint;

public:
    path();
    virtual ~path();
    void clear();
    void pop_way_point();
    bool get_cur_way_point(
        vector3d *point,
        region_node **destination) const;
    bool get_next_way_point(
        const vector3d &current_position,
        const vector3d &last_position,
        rational_t radius,
        vector3d *point,
        region_node **destination,
        bool force_xz = false);
};

class path_graph {
protected:
    stringx id;
    vector<path_graph_node *> nodes;
    vector<path_graph_edge *> edges;
    bool complexity_warning;
    bool no_find_warning;
    bool patrol_warning;
    bool warned;

public:
    path_graph();
    virtual ~path_graph();
    bool node_in_graph(const vector3d &point) const;
    bool edge_in_graph(
        const path_graph_node *first,
        const path_graph_node *second) const;
    void add_edge(
        int first,
        int second,
        unsigned short flags = 0,
        rational_t modifier = 1.0f);
    void add_edge(
        path_graph_node *first,
        path_graph_node *second,
        unsigned short flags = 0,
        rational_t modifier = 1.0f);
    path_graph_node *get_node(const vector3d &point) const;
    path_graph_edge *get_edge(
        const path_graph_node *first,
        const path_graph_node *second) const;
    int get_node_id(path_graph_node *node) const;
};

bool crossed_point(
    vector3d test_point,
    const vector3d &current_position,
    const vector3d &last_position,
    rational_t radius,
    bool force_xz);

#endif
