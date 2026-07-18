class ett_manager;

class world_dynamics_system {
    char padding[0x60];
    ett_manager* ett_mgr;
public:
    ett_manager* get_ett_manager();
};

ett_manager* world_dynamics_system::get_ett_manager() {
    return ett_mgr;
}
