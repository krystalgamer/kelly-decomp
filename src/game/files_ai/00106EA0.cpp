class entity;

class ai_interface {
    char padding[0x4];
    entity* my_entity;
public:
    entity* get_my_entity() {
        return my_entity;
    }
};

class ai_locomotion {
    ai_interface* owner;
public:
    entity* get_my_entity() const;
};

entity* ai_locomotion::get_my_entity() const {
    return owner->get_my_entity();
}
