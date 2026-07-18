struct light_properties { char padding[0x30]; unsigned int lightcat; };
class light_source { char padding[0x200]; light_properties* properties; public: void set_lightcat(unsigned int value); };
void light_source::set_lightcat(unsigned int value) { properties->lightcat = value; }
