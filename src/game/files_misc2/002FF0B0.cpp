class motion_object {
    bool active;
public:
    void set_active(bool value);
};

void motion_object::set_active(bool value) {
    active = value;
}
