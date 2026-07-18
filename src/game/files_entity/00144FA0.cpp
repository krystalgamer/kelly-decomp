class stringx {};

extern const stringx entity_empty_string;
__asm__(".equ entity_empty_string, 0x0046DB30");

class entity {
public:
    const stringx& get_dirname() const;
};

const stringx& entity::get_dirname() const {
    return entity_empty_string;
}
