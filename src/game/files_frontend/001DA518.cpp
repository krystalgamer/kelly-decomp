class FEMenuEntry {
    char padding[0x28];
    float highlight_intensity;
public:
    float GetHighlightIntensity();
};

float FEMenuEntry::GetHighlightIntensity() {
    return highlight_intensity;
}
