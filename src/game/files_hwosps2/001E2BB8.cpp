class vert_buf {
    char padding[0xC];
    bool locked;
public:
    void unlock();
};

void vert_buf::unlock() {
    locked = false;
}
