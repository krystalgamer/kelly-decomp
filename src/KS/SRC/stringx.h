// Matching decompilation blocks selected by generated build shims.

#ifndef STRINGX_H
#define STRINGX_H

struct string_buf {
    unsigned long long *data;
    int ref_count;
    int char_length;
    int block_length;
    int max_blocks;

    inline int compare(const char *text) const {
        const char *value =
            reinterpret_cast<const char *>(data);
        int index;
        for (index = 0; index < char_length; ++index) {
            if (text[index] == 0)
                return -1;
            if (value[index] == text[index])
                continue;
            if (text[index] > value[index])
                return 1;
            if (text[index] < value[index])
                return -1;
        }
        return text[index] == 0 ? 0 : 1;
    }
    void clear();
};

class stringx {
protected:
    char *chars;
    string_buf *my_buf;
    static string_buf strings[22100];
    bool is_buffer_mine(string_buf *buffer) const;

public:
    stringx();
    stringx(const stringx &);
    stringx(const char *, int = -1);
    explicit stringx(float);
    explicit stringx(int);
    explicit stringx(unsigned int);
    ~stringx();
    stringx &operator=(const stringx &);
    stringx &operator=(const char *);
    stringx &operator+=(const stringx &other);
    stringx &operator+=(const char *text);
    inline const char *c_str() const { return chars; }
    inline char *data() const { return chars; }
    int length() const;
    int find(const char *text) const;
    void lock();
    void fork_data(int new_length = -1);
    void copy(const char *text, int length = -1);
    void append(const stringx &other);
    void append(const char *text, int length = -1);
    int rfind(char value, int position) const;
    int rfind(char value) const;
    inline int size() const { return my_buf->char_length; }
    inline bool operator==(const char *text) const {
        return my_buf->compare(text) == 0;
    }
};

extern stringx empty_string;
extern stringx sendl;

#endif
