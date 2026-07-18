class beam_effect {
    char padding[0x8];
    unsigned short id;
public:
    unsigned short get_id() const;
};

unsigned short beam_effect::get_id() const {
    return id;
}
