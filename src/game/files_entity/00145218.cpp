class destroyable_info;

class entity {
    char padding[0x19C];
    destroyable_info *destroy_info;

public:
    destroyable_info *get_destroy_info() const;
};

destroyable_info *entity::get_destroy_info() const {
    return destroy_info;
}
