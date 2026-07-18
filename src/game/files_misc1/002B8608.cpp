class item {
    char padding[0x218];
    int count;
public:
    int get_number() const;
};

int item::get_number() const {
    return count;
}
