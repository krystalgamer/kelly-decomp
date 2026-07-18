class nglLightContext;

class world_dynamics_system {
    char padding[0x360];
    nglLightContext* current_light_context;
public:
    nglLightContext* set_current_light_context(nglLightContext* value);
};

nglLightContext* world_dynamics_system::set_current_light_context(nglLightContext* value) {
    nglLightContext* old = current_light_context;
    current_light_context = value;
    return old;
}
