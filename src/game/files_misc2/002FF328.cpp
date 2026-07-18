class vector3d { float x; float y; float z; };
struct entity_position_holder { char padding[0x30]; vector3d position; };
struct entity { char padding[0x50]; entity_position_holder* absolute; };
class collision_geometry { entity* owner; public: const vector3d& get_abs_position() const; };
const vector3d& collision_geometry::get_abs_position() const { return owner->absolute->position; }
