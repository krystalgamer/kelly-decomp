struct light_properties { char padding[0x28]; float cutoff_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float terrain_radius() const; };
float light_source::terrain_radius() const { return properties->cutoff_range * 0.5f; }
