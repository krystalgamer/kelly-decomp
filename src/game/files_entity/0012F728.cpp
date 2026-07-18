extern const char entity_signal_name_literal[];
__asm__(".equ entity_signal_name_literal, 0x004CA870");

class entity {
public:
    const char* get_signal_name(unsigned short index) const;
};

const char* entity::get_signal_name(unsigned short index) const {
    return entity_signal_name_literal;
}
