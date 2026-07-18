class entity { char padding[0x78]; int flags; public: bool is_visible() const; };
bool entity::is_visible() const { return (flags >> 9) & 1; }
