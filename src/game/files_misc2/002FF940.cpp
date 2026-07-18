class color {};
struct light_properties { char padding[0x4]; color diffuse_color; };
class light_source { char padding[0x200]; light_properties* properties; public: const color& get_color() const; };
const color& light_source::get_color() const { return properties->diffuse_color; }
