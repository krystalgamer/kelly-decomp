class Career {
    char padding[0x14];
    int my_id;
public:
    int GetSurferIdx();
};

int Career::GetSurferIdx() {
    return my_id;
}
