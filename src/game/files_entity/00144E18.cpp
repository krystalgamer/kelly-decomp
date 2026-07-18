class entity {
public:
    bool get_in_use() const;
};

bool entity::get_in_use() const {
    short flags;
    __asm__("lh %0, 0x7A(%1)" : "=r"(flags) : "r"(this));
    return flags & 1;
}
