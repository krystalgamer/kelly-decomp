// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026F7A0)
// 0x0026F7A0 ResetPierEntities__22kellyslater_controller
class entity;
class kellyslater_controller { char padding[0x1b00]; entity *pier_entities[3]; int num_pier_entities; public: void ResetPierEntities(); };
void kellyslater_controller::ResetPierEntities() { int index = 2; entity **entry = &pier_entities[2]; loop: *entry = 0; --index; KELLY_DECOMP_COMPILER_BARRIER(); KELLY_DECOMP_COMPILER_BARRIER(); if (index >= 0) { --entry; goto loop; } --entry; num_pier_entities = 0; }
#endif
