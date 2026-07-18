class entity;

class water_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void water_object::jumped_over(entity* other) {
    active = true;
}
