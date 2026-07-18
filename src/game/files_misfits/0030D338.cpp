class ini_parser {
    char padding[0x208];
    unsigned char token_ready;
public:
    void unget_token();
};
void ini_parser::unget_token() { token_ready = 1; }
