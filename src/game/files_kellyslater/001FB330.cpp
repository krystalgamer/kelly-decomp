class entity;

class beach_object {
    char padding[0x24];
    bool active;
public:
    void jumped_over(entity* other);
};

void beach_object::jumped_over(entity* other) {
    active = true;
}
