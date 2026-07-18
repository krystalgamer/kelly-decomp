class entity { char padding[0x78]; int flags; public: bool is_sticky() const; };
bool entity::is_sticky() const { return (flags >> 6) & 1; }
