class color {};
struct light_properties { char padding[0x14]; color additive_color; };
class light_source { char padding[0x200]; light_properties* properties; public: const color& get_additive_color() const; };
const color& light_source::get_additive_color() const { return properties->additive_color; }
