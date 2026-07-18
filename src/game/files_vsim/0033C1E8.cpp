struct char_info { char data[24]; };
class font_def { char_info characters[256]; public: char_info* get_char_info(char value) const; };
char_info* font_def::get_char_info(char value) const { return (char_info*)&characters[(int)value]; }
