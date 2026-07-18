class vertex_context;

class color32 {
    unsigned int value;
};

class hw_rasta {
public:
    void send_context(vertex_context& context, unsigned int flags, color32 color);
};

void hw_rasta::send_context(vertex_context& context, unsigned int flags, color32 color) {
}
