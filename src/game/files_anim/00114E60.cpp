extern const char binary_extension_literal[];

__asm__(".equ binary_extension_literal, 0x004C92A8");

class entity_track_tree {
public:
    static const char* binary_extension();
};

const char* entity_track_tree::binary_extension() {
    return binary_extension_literal;
}
