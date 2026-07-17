class nglMesh;

class entity {
    char padding[0x134];
    nglMesh *my_mesh;

public:
    nglMesh *get_mesh() const;
};

nglMesh *entity::get_mesh() const {
    return my_mesh;
}
