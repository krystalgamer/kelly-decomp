// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00275740)
// 0x00275740 copy_instance_data__17entity_controllerRC17entity_controller
class entity_controller { bool active; bool deactivate; char padding[8]; int state; public: void copy_instance_data(const entity_controller &other); };
void entity_controller::copy_instance_data(const entity_controller &other) { active = other.active; deactivate = other.deactivate; state = other.state; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002755B0)
// 0x002755B0 __17entity_controllerP6entity
class entity;
extern const char entity_controller_vtable[];
__asm__(".equ entity_controller_vtable, 0x004FB2C0");
class entity_controller { int active; int field_4; const void *vtable; entity *owner; int state; public: entity_controller(entity *ent); };
entity_controller::entity_controller(entity *ent) { active = 1; vtable = entity_controller_vtable; owner = ent; field_4 = 0; state = 0; }
#endif
