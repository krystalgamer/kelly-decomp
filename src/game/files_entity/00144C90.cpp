class entity { char padding[0x78]; int flags; public: bool are_collisions_active() const; };
bool entity::are_collisions_active() const { return (flags >> 1) & 1; }
