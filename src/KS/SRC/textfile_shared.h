#ifndef KELLY_DECOMP_TEXTFILE_SHARED_H
#define KELLY_DECOMP_TEXTFILE_SHARED_H

class stringx {
public:
    stringx &operator=(const char *text);
};

class text_file {
public:
    void read(char *text, int maxlen);
    void read(stringx *text);
};

extern char work[4096];

#endif
