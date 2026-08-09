#ifndef ZIP_FILTER_H
#define ZIP_FILTER_H

struct z_stream {
    char data_before_total_out[0x18];
    unsigned long long total_out;
};

class zip_filter {
public:
    static int shutdown_async();
};

extern z_stream zip_stream;
extern "C" int inflateEnd(z_stream *stream);

#endif
