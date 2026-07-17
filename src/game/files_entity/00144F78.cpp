class nglMesh;

class entity {
    char padding[0x12C];
    nglMesh *shadow_mesh;

public:
    nglMesh *get_shadow_mesh() const;
};

nglMesh *entity::get_shadow_mesh() const {
    return shadow_mesh;
}
