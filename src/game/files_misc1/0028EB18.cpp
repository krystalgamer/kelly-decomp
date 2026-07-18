class vector3d { float x; float y; float z; };
struct entity_position_holder { char padding[0x30]; vector3d position; };
struct entity { char padding[0x50]; entity_position_holder* absolute; };
class entity_trigger { char padding[0x38]; entity* ent; public: const vector3d& get_abs_position() const; };
const vector3d& entity_trigger::get_abs_position() const { return ent->absolute->position; }
