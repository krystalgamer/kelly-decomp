class SurfBoardObjectClass {
    char padding_to_backwards[0xA54];
    float backwards_time;
    char padding_to_standing[0x8];
    float standing_time;
public:
    void ResetTimers();
};

void SurfBoardObjectClass::ResetTimers() {
    standing_time = 0;
    backwards_time = 0;
}
