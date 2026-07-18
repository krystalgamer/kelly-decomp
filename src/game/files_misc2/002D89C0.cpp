class po;

class collision_geometry {
    char padding[0x4];
    bool valid;
public:
    void xform(const po& transform);
};

void collision_geometry::xform(const po& transform) {
    valid = true;
}
