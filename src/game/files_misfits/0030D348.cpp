class ini_parser {
    char padding[0x200];
    int line_pos;
    char* current_line;
public:
    void new_line(char* line);
};
void ini_parser::new_line(char* line) { line_pos = 0; current_line = line; }
