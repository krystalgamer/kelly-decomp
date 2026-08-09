#ifndef APP_FILE_H
#define APP_FILE_H

#include "KS/SRC/mustash.h"
#include "KS/SRC/osfile.h"
#include "KS/SRC/textfile.h"

class app_file {
public:
    enum app_file_t {
        CFT_NONE,
        CFT_TEXT,
        CFT_BINARY
    };

    bool use_stash;

private:
    app_file_t type;
    os_file binary;
    text_file text;
    stash the_stash;

public:
    inline app_file_t get_type() { return type; }
    int get_size();
    bool read(void *buffer, int bytes);
};

#endif
