class vert_buf_xformed {
    char padding[0xC];
    bool locked;
public:
    void unlock();
};

void vert_buf_xformed::unlock() {
    locked = false;
}
