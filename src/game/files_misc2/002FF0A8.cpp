class motion_object {
    bool active;
public:
    bool is_active() const;
};

bool motion_object::is_active() const {
    return active;
}
