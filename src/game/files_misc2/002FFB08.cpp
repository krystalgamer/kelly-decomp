class cg_mesh { char padding[0x64]; int flags; public: bool is_entity_collision() const; };
bool cg_mesh::is_entity_collision() const { return (flags >> 2) & 1; }
