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
