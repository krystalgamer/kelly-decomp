class entity { char padding[0x78]; int flags; public: bool is_repulsion() const; };
bool entity::is_repulsion() const { return (flags >> 12) & 1; }
