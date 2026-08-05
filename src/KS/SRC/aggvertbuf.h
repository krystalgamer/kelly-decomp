#ifndef AGGVERTBUF_H
#define AGGVERTBUF_H

#include "KS/SRC/refptr.h"

class material;
class vert_buf_xformed : public ref {
public:
    void unlock();
};

class aggregate_vert_buf {
public:
    material *mat;
    unsigned int frame;
    unsigned int force_flags;
    unsigned int nquads;
    refptr<vert_buf_xformed> vertbuf;
    unsigned int send_flags;
    bool locked;

    aggregate_vert_buf();
    void flush();
};

#endif
