class nglMesh;

class entity {
    char padding[0x130];
    nglMesh *lores_mesh;

public:
    nglMesh *get_lores_mesh() const;
};

nglMesh *entity::get_lores_mesh() const {
    return lores_mesh;
}
