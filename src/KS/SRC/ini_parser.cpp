// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030D338)
// 0x0030D338 unget_token__10ini_parser
class ini_parser {
    char padding[0x208];
    unsigned char token_ready;
public:
    void unget_token();
};
void ini_parser::unget_token() { token_ready = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030D348)
// 0x0030D348 new_line__10ini_parserPc
class ini_parser {
    char padding[0x200];
    int line_pos;
    char* current_line;
public:
    void new_line(char* line);
};
void ini_parser::new_line(char* line) { line_pos = 0; current_line = line; }
#endif
