class entity {
public:
    bool is_time_limited() const;
};

bool entity::is_time_limited() const {
    unsigned int masked;
    __asm__(
        "lw %0, 0x198(%1)\n\t"
        "lui $3, 0x1\n\t"
        "and %0, %0, $3"
        : "=&r"(masked)
        : "r"(this)
        : "$3"
    );
    return masked != 0;
}
