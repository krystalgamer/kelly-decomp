class lensflare {
public:
    unsigned int render_passes_needed() const;
};

unsigned int lensflare::render_passes_needed() const {
    return 2;
}
