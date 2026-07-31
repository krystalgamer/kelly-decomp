#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "KS/SRC/mustash.h"
#include "KS/SRC/osfile.h"

class text_file {
public:
    text_file();
    ~text_file();
    void open(
        const stringx &name,
        int flags = os_file::FILE_READ);
    void close();
    inline const stringx get_name() const {
        return use_stash
            ? stringx(the_stash.get_name().c_str())
            : io.get_name();
    }
    inline bool at_eof() const {
        return use_stash
            ? (bufpos >= bufamt && the_stash.at_eof())
            : (bufpos >= bufamt && io.at_eof());
    }
    char peek_char();
    char read_char();
    void read(char *value);
    void read(int *value);
    void read(float *value);
    void read(stringx *value);
    void read(char *value, int max_length);
    int readln(
        char *value,
        unsigned int max_length,
        char delimiter = '\n',
        bool *hit_delimiter = 0);
    void write(char value);
    void write(int value);
    void write(float value);
    void write(const stringx &value);
    int nextchar();
    int nextnonwhite();
    int skipuntilthischar(char value);
    int readuntilthischar(
        char value,
        char *buffer,
        int length);
    int readuntilwhite(char *buffer, int length);
    int readuntilnotdigit(char *buffer, int length);
    int skipuntildigit();
    void keypushback(int value);
    inline bool is_open() const {
        return use_stash
            ? the_stash.is_open()
            : io.is_open();
    }
    static bool text_file_exists(const stringx &name);

private:
    void eat_whitespace();
    void refill_buf();

    os_file io;
    stash the_stash;
    int my_stash;
    char *buf;
    int bufpos;
    int bufamt;
    bool use_stash;
    int pushbackdata;
};

#endif
