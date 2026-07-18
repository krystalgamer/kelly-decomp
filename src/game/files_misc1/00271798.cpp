class beam {
    char padding[0x204];
    float max_length;
public:
    void set_max_length(float value);
};

void beam::set_max_length(float value) {
    max_length = value;
}
