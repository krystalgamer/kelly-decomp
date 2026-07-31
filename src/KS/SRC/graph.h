#ifndef GRAPH_H
#define GRAPH_H

#include "g++-2/stl_list.h"
#include "g++-2/stl_map.h"

template <
    class NodeKey,
    class NodeData,
    class EdgeData,
    class KeyCompare = less<NodeKey> >
class graph {
public:
    class node;

    class edge {
        EdgeData data;
        node *destination;

    public:
        edge() : data(), destination(0) {}
        inline EdgeData &get_data() { return data; }
        inline node *get_dest() { return destination; }
    };

    class node : public list<edge> {
        NodeData data;

    public:
        node() : list<edge>(), data() {}
        explicit node(const NodeData &value)
          : list<edge>(), data(value)
        {
        }
        inline bool operator<(const node &other) const {
            return data < other.data;
        }
        inline NodeData &get_data() { return data; }
    };

    typedef map<NodeKey, node, KeyCompare> node_list;

private:
    node_list nodes;
};

#endif
