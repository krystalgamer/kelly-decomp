struct light_properties { char padding[0x30]; unsigned int lightcat; };
class light_source { char padding[0x200]; light_properties* properties; public: unsigned int get_lightcat() const; };
unsigned int light_source::get_lightcat() const { return properties->lightcat; }
