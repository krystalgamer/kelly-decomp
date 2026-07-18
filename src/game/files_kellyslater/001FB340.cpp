class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void sprayed(entity* other);
};

void beach_object::sprayed(entity* other) {
    active = true;
}
