struct light_properties { char padding[0x28]; float cutoff_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float get_cutoff_range() const; };
float light_source::get_cutoff_range() const { return properties->cutoff_range; }
