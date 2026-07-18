unsigned char ReadChar(unsigned char* buffer, int& index) {
    unsigned char result = buffer[index];
    ++index;
    return result;
}
