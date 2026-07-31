#ifndef INI_PARSER_H
#define INI_PARSER_H

#include "KS/SRC/osfile.h"
#include "KS/SRC/singleton.h"
#include "KS/SRC/stringx.h"

class os_developer_options : public singleton {
public:
    os_developer_options();

    enum flags_t {
        NUM_FLAGS = 105
    };
    enum strings_t {
        NUM_STRINGS = 29
    };
    enum ints_t {
        NUM_INTS = 26
    };

private:
    bool flags[NUM_FLAGS];
    stringx strings[NUM_STRINGS];
    int ints[NUM_INTS];
    stringx exe_name;

    friend class ini_parser;
};

class ini_parser {
private:
    enum TokenType {
        NO_TOKEN,
        TOKEN_GROUP,
        TOKEN_STRING,
        TOKEN_EQUALS
    };
    enum GroupType {
        NO_GROUP,
        FLAGS_GROUP,
        INTS_GROUP,
        STRINGS_GROUP
    };

    char filename[256];
    char token[256];
    int scan_pos;
    char *line;
    char stored_token;
    char stored_type;
    char stored_num;

    int build_token(char *line, char *token);
    int get_token(
        char **token,
        int *token_type,
        int *number);
    void unget_token();
    void new_line(char *line);
    bool parse(os_developer_options *options);
    void despacify_token(char *token);

public:
    ini_parser(
        const char *filename,
        os_developer_options *options);
    ~ini_parser();
};

extern "C" unsigned int strlen(const char *text);
extern unsigned char ctype_table[];

__asm__(".equ strlen, 0x003D40E0");
__asm__(".equ ctype_table, 0x00510C11");

#endif
