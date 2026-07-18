class po;
class vr_billboard { char padding[0x134]; float width; float height; public: float compute_xz_radius_rel_center(const po& transform); };
float vr_billboard::compute_xz_radius_rel_center(const po& transform) { return width + height; }
