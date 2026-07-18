class item { char padding[0x20C]; int usage_type; public: bool is_ammo() const; };
bool item::is_ammo() const { return usage_type == 6; }
