#ifndef OSFILE_H
#define OSFILE_H

#include "KS/SRC/stringx.h"

class os_file {
public:
    enum mode_flags {
        FILE_READ = 1,
        FILE_WRITE = 2,
        FILE_MODIFY = 3,
        FILE_APPEND = 4
    };
    enum filepos_t {
        FP_BEGIN,
        FP_CURRENT,
        FP_END
    };

    os_file();
    os_file(const stringx &name, int flags);
    ~os_file();
    void open(const stringx &name, int flags);
    void close();
    int read(void *data, int bytes, bool async = false);
    int write(void *data, int bytes);
    int get_size();
    int set_fp(int position, filepos_t base);
    unsigned int get_fp();
    inline const stringx &get_name() const { return name; }
    inline bool is_open() const { return opened; }
    inline bool at_eof() const { return eof; }
    inline bool operator!() const { return false; }
    inline bool is_from_cd() const { return from_cd; }
    static void set_root_dir(const stringx &directory);
    static inline const char *get_root_dir() { return root_dir; }
    static void set_pre_root_dir(const stringx &directory);
    static inline const char *get_pre_root_dir() { return pre_root_dir; }
    static inline void system_lock() { system_locked = true; }
    static inline void system_unlock() { system_locked = false; }
    static inline bool is_system_locked() { return system_locked; }

private:
    enum {
        MAX_DIR_LEN = 256
    };

    static char root_dir[MAX_DIR_LEN];
    static char pre_root_dir[MAX_DIR_LEN];
    static bool system_locked;
    stringx name;
    int flags;
    bool opened;
    bool eof;
    bool from_cd;
    char io[0x24];
    int curr_fp;
};

typedef os_file *host_system_file_handle;

#endif
