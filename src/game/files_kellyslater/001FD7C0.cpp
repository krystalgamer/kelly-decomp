class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void water_object::sprayed(entity* other) {
    active = true;
}
