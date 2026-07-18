class item {
    char padding[0x218];
    int count;
public:
    void set_count(int value);
};

void item::set_count(int value) {
    count = value;
}
