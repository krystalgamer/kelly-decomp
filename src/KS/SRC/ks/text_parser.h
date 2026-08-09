#ifndef TEXT_PARSER_H
#define TEXT_PARSER_H

enum {
    MAXTOKEN = 65
};

class text_parser {
public:
    text_parser();
    ~text_parser();
    void cleanup();

    char token[MAXTOKEN];

private:
    char *buffer;
    char *script_ptr;
    char last_val;
    char *last_val_pos;
    int script_line;
};

#endif
