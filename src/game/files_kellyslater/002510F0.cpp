class SpecialMeter {
    char padding[0xC];
    bool isEnabled;
public:
    bool CanRegionLink() const;
};

bool SpecialMeter::CanRegionLink() const {
    return isEnabled;
}
