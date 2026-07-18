class partition3 {
    char padding[0x10];
    void* my_sector;
public:
    partition3();
};

partition3::partition3() {
    my_sector = 0;
}
