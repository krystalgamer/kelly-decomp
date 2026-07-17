class entity {
public:
    const entity *get_colgeom_root() const;
};

const entity *entity::get_colgeom_root() const {
    return this;
}
