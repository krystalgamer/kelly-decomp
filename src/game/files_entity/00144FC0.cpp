enum entity_flavor_t {
    ENTITY_FLAVOR_PLACEHOLDER
};

class entity {
    char padding[0x7C];
    entity_flavor_t flavor;

public:
    entity_flavor_t get_flavor() const;
};

entity_flavor_t entity::get_flavor() const {
    return flavor;
}
