// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0029B770)
// 0x0029B770 add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui
class entity;

// Released signature: entity* world_dynamics_system::add_box_trigger(entity_id, const po&, const convex_box&, const region_node_list*, unsigned int).
entity* add_box_trigger_stub() asm("add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui");

entity* add_box_trigger_stub() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0029FD58)
// 0x0029FD58 set_current_light_context__21world_dynamics_systemP15nglLightContext
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3770)
// 0x002A3770 get_ett_manager__21world_dynamics_system
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
#endif
