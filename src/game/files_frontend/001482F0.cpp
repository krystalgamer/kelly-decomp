class TextString {
    char padding[0x14];
    int z;

public:
    int getZ();
};

int TextString::getZ() {
    return z;
}
