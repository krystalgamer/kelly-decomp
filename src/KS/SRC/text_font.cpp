// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0033C1E8)
// 0x0033C1E8 get_char_info__C8font_defc
struct char_info { char data[24]; };
class font_def { char_info characters[256]; public: char_info* get_char_info(char value) const; };
char_info* font_def::get_char_info(char value) const { return (char_info*)&characters[(int)value]; }
#endif
