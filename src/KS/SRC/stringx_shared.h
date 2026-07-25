#ifndef KELLY_DECOMP_STRINGX_SHARED_H
#define KELLY_DECOMP_STRINGX_SHARED_H

class string_buf;

class stringx {
    char *chars;
    string_buf *my_buf;

public:
    stringx();
    stringx(const stringx &other);
};

#endif
