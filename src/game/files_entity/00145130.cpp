class region_node;

class entity {
    char padding[0x15C];
    region_node *center_region;

public:
    region_node *get_region() const;
};

region_node *entity::get_region() const {
    return center_region;
}
