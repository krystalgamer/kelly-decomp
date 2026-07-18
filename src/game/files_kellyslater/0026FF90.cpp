class surfing_object {
    char padding[0x2E0];
    int my_type;
public:
    int get_type() const;
};

int surfing_object::get_type() const {
    return my_type;
}
