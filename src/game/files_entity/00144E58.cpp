class collision_geometry;

class entity {
    char padding[0x148];
    collision_geometry *colgeom;

public:
    collision_geometry *get_colgeom() const;
};

collision_geometry *entity::get_colgeom() const {
    return colgeom;
}
