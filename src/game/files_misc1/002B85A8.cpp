class item {
    char padding[0x218];
    int count;
public:
    int get_count() const;
};

int item::get_count() const {
    return count;
}
