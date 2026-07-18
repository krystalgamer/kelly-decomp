class collision_capsule {
public:
    unsigned int get_type() const;
};

unsigned int collision_capsule::get_type() const {
    return 1;
}
