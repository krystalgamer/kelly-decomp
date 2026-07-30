#ifndef KELLY_DECOMP_INI_PARSER_SHARED_H
#define KELLY_DECOMP_INI_PARSER_SHARED_H

#include "KS/SRC/stringx_shared.h"

#define assert(condition) ((void)0)
#define free(pointer) arch_free(pointer)
#ifndef NULL
#define NULL 0
#endif

class singleton {
protected:
    singleton() {}
    virtual ~singleton() {}

private:
    singleton(const singleton &);
    singleton &operator=(const singleton &);
};

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

class os_file {
public:
    enum mode_flags {
        FILE_READ = 1,
        FILE_WRITE = 2,
        FILE_MODIFY = 3,
        FILE_APPEND = 4
    };

    os_file();
    ~os_file();

    void close();
    int read(void *data, int bytes, bool async = false);
    int get_size();
    bool is_open() const { return opened; }

private:
    stringx name;
    int flags;
    bool opened;
    bool eof;
    bool from_cd;
    char io[0x24];
    int curr_fp;
};

class ini_parser {
private:
    enum TokenType {
        NO_TOKEN = 0,
        TOKEN_GROUP,
        TOKEN_STRING,
        TOKEN_EQUALS
    };

    enum GroupType {
        NO_GROUP = 0,
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

    int build_token(char *line, char *the_token);
    int get_token(char **curr_token, int *token_type, int *num_value);
    void unget_token();
    void new_line(char *curr_line);
    bool parse(os_developer_options *opts);
    void despacify_token(char *curr_token);

public:
    ini_parser(const char *ini_filename, os_developer_options *opts);
    ~ini_parser();
};

extern char *flag_names[];
extern int flag_defaults[];
extern char *string_names[];
extern char *string_defaults[];
extern char *int_names[];
extern int int_defaults[];

void debug_print(const char *format, ...);
void nglPrintf(const char *format, ...);
void *arch_mallochigh(unsigned int size);
void arch_free(void *block);

extern "C" int atoi(const char *text);
extern "C" int strcmp(const char *left, const char *right);
extern "C" unsigned int strlen(const char *text);
extern "C" char *strlwr(char *text);
extern "C" char *strupr(char *text);
extern unsigned char ctype_table[];

// Compensate for the isolated assembler's missing %hi carry on negative lows.
__asm__(".equ flag_names, 0x0046AC70");
__asm__(".equ flag_defaults, 0x0046AE18");
__asm__(".equ string_names, 0x0046AFC0");
__asm__(".equ string_defaults, 0x0046B038");
__asm__(".equ int_names, 0x0046B0B0");
__asm__(".equ int_defaults, 0x0046B118");
__asm__(".equ debug_print__FPCce, 0x00120790");
__asm__(".equ __7os_file, 0x001DFC58");
__asm__(".equ _$_7os_file, 0x001DFD10");
__asm__(".equ close__7os_file, 0x001E03A0");
__asm__(".equ read__7os_filePvib, 0x001E0450");
__asm__(".equ get_size__7os_file, 0x001E0A48");
__asm__(".equ arch_mallochigh__FUi, 0x002AC718");
__asm__(".equ arch_free__FPv, 0x002AC768");
#if !defined(KELLY_DECOMP_FUNCTION_0030D0B0)
__asm__(".equ get_token__10ini_parserPPcPiT2, 0x0030D0B0");
#endif
#if !defined(KELLY_DECOMP_FUNCTION_0030D338)
__asm__(".equ unget_token__10ini_parser, 0x0030D338");
#endif
#if !defined(KELLY_DECOMP_FUNCTION_0030D348)
__asm__(".equ new_line__10ini_parserPc, 0x0030D348");
#endif
__asm__(".equ __as__7stringxPCc, 0x0034E118");
__asm__(".equ nglPrintf__FPCce, 0x003AC050");
__asm__(".equ atoi, 0x003CF7A0");
__asm__(".equ strcmp, 0x003D3E88");
__asm__(".equ strlen, 0x003D40E0");
__asm__(".equ strlwr, 0x003D4218");
__asm__(".equ strupr, 0x003D5C00");
__asm__(".equ ctype_table, 0x00510C11");

#endif
