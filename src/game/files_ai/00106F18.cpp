class ai_locomotion { char padding_to_patrol_id[0x68]; int patrol_id; bool xz_movement; float patrol_radius; public: void copy(ai_locomotion* other); };
void ai_locomotion::copy(ai_locomotion* other) { patrol_radius = other->patrol_radius; patrol_id = other->patrol_id; xz_movement = other->xz_movement; }
