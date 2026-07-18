class frame_info { float age; float frame_rate; int ifl_frame_locked; public: frame_info(); };
frame_info::frame_info() { age = 0.0f; frame_rate = 0.0f; ifl_frame_locked = -1; }
