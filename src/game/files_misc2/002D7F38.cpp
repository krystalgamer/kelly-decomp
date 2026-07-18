class collision_capsule { char padding_to_rel[0x24]; float rel_radius; char padding_to_abs[0x18]; float abs_radius; public: void apply_radius_scale(float scale); };
void collision_capsule::apply_radius_scale(float scale) { abs_radius = rel_radius * scale; }
