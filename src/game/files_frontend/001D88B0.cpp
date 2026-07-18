class MultiLineString {
    char padding[0x54];
    int line_num;
public:
    int getLineNum();
};

int MultiLineString::getLineNum() {
    return line_num;
}
