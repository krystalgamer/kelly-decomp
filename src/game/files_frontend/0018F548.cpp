class BeachFrontEnd {
    char padding[0xF18];
    bool sliding_in;
public:
    void OnLevelEnding();
};

void BeachFrontEnd::OnLevelEnding() {
    sliding_in = true;
}
