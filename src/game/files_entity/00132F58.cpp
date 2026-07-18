class entity { char padding[0x78]; int flags; public: void deactivate_motion_blur(); };
void entity::deactivate_motion_blur() { flags &= -1025; }
