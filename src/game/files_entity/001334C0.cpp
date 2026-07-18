class entity { char padding[0x78]; int flags; public: void deactivate_motion_trail(); };
void entity::deactivate_motion_trail() { flags &= -2049; }
