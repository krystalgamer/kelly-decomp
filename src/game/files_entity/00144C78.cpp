class entity { char padding[0x78]; int flags; public: bool is_active() const; };
bool entity::is_active() const { return (flags >> 17) & 1; }
