class entity { char padding[0x78]; int flags; public: bool is_walkable() const; };
bool entity::is_walkable() const { return (flags >> 3) & 1; }
