class vector3d {
    float x;
    float y;
    float z;
};

struct entity_position_holder {
    char padding[0x30];
    vector3d position;
};

class entity {
    char padding[0x50];
    entity_position_holder* absolute;
public:
    const vector3d& terrain_position() const;
};

const vector3d& entity::terrain_position() const {
    return absolute->position;
}
