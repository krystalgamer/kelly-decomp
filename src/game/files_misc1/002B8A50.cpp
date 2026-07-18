class entity_controller {
    char padding[0x10];
    int state;
public:
    int get_state() const;
};

int entity_controller::get_state() const {
    return state;
}
