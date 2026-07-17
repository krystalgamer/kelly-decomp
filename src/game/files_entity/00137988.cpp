class vector3d;

class entity {
public:
    void apply_damage(
        int damage,
        const vector3d &position,
        const vector3d &normal,
        int damage_type,
        entity *attacker,
        int damage_flags
    );
};

void entity::apply_damage(
    int damage,
    const vector3d &position,
    const vector3d &normal,
    int damage_type,
    entity *attacker,
    int damage_flags
) {
}
