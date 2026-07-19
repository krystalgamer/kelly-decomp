// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00275740)
// 0x00275740 copy_instance_data__17entity_controllerRC17entity_controller
class entity_controller { bool active; bool deactivate; char padding[8]; int state; public: void copy_instance_data(const entity_controller &other); };
void entity_controller::copy_instance_data(const entity_controller &other) { active = other.active; deactivate = other.deactivate; state = other.state; }
#endif
