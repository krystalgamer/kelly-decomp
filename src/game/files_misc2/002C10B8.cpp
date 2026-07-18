class vr_billboard { public: float time_value_to_frame(float time); };
float vr_billboard::time_value_to_frame(float time) { return time * 30.0f; }
