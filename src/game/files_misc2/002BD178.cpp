class mat_fac { char padding[0x38]; int blend_mode; public: bool is_translucent() const; };
bool mat_fac::is_translucent() const { return blend_mode != 0 && blend_mode != 1; }
