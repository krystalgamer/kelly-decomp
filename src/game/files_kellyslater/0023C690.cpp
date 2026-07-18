class KSReplay {
    char padding[0x10];
    int status;
public:
    void Record();
};

void KSReplay::Record() {
    status = 1;
}
