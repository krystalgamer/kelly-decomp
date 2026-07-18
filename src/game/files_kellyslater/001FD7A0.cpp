class entity;
class vector3d;

class water_object {
    char padding[0x24];
    bool active;
public:
    void collide(entity* other, const vector3d& direction);
};

void water_object::collide(entity* other, const vector3d& direction) {
    active = true;
}
