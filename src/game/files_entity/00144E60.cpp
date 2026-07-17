class collision_capsule;

class entity {
public:
    collision_capsule *get_damage_capsule();
};

collision_capsule *entity::get_damage_capsule() {
    return 0;
}
