struct light_properties { char padding[0x24]; float near_range; };
class light_source { char padding[0x200]; light_properties* properties; public: float get_near_range() const; };
float light_source::get_near_range() const { return properties->near_range; }
