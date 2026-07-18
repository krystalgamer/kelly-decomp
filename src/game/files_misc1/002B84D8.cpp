class beam_effect {
    char padding[0x8];
    unsigned short id;
public:
    void set_id(unsigned short value);
};

void beam_effect::set_id(unsigned short value) {
    id = value;
}
