class KSReplay { char padding[0xC]; unsigned int seed; int status; char padding_to_frames[0x40]; unsigned int numFrames; char padding_to_current_collision[0x74]; int current_collision; int num_collisions; public: void Clear(unsigned int value); };
void KSReplay::Clear(unsigned int value) { seed = value; numFrames = 0; num_collisions = 0; current_collision = 0; status = 0; }
