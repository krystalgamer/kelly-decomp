class color32 {
public:
    unsigned int value;
};

class beam {
    char padding[0x208];
    color32 my_color;
public:
    void set_beam_color(const color32& value);
};

void beam::set_beam_color(const color32& value) {
    my_color = value;
}
