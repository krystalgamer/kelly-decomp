#ifndef KELLY_DECOMP_FIFO_QUEUE_SHARED_H
#define KELLY_DECOMP_FIFO_QUEUE_SHARED_H

template <class T>
class fifo_queue {
    T *queue;
    short queue_max;
    short start;
    short end;
    short count;

public:
    void init(short size);
    void clear();
};

#endif
