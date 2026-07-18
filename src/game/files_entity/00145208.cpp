class destroyable_info;

class entity {
    char padding[0x19C];
    destroyable_info* destroy_info;
public:
    bool has_destroy_info() const;
};

bool entity::has_destroy_info() const {
    return destroy_info != 0;
}
