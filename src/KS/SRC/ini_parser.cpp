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

#if defined(KELLY_DECOMP_FUNCTION_0030D030)
// 0x0030D030 despacify_token__10ini_parserPc
extern "C" unsigned strlen(const char*);extern unsigned char ctype_table[];__asm__(".equ strlen,0x003D40E0");__asm__(".equ ctype_table,0x00510C11");class ini_parser{public:void despacify_token(char*);};void ini_parser::despacify_token(char*curr_token){int i;for(i=strlen(curr_token)-1;i>=0;--i){if(ctype_table[(signed char)curr_token[i]]&8)curr_token[i]='\0';else break;}}
#endif
