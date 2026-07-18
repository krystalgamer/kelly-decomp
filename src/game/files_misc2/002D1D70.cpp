class particle_generator {
public:
    unsigned int render_passes_needed() const;
};

unsigned int particle_generator::render_passes_needed() const {
    return 2;
}
