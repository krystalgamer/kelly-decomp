class fog_manager {
    char padding[0x14];
    float fog_start_distance;
    float fog_end_distance;
public:
    void set_fog_distance(float start, float end);
};
void fog_manager::set_fog_distance(float start, float end) { fog_start_distance = start; fog_end_distance = end; }
