class vr_billboard { char padding[0x134]; float width; float height; public: float get_radius(float delta_t) const; };
float vr_billboard::get_radius(float delta_t) const { return width + height; }
