class hw_rasta {
public:
    enum poly_type_t {
        PT_NONE
    };

private:
    char padding[0x8];
    poly_type_t send_type;

public:
    void send_start(poly_type_t type);
};

void hw_rasta::send_start(poly_type_t type) {
    send_type = type;
}
