enum force_active_t {
    FORCE_ACTIVE_NONE = 0
};

class entity {
public:
    force_active_t get_forced_active() const;
};

force_active_t entity::get_forced_active() const {
    return FORCE_ACTIVE_NONE;
}
