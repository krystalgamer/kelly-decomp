#ifndef FIFO_QUEUE_HEADER
#define FIFO_QUEUE_HEADER

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
    void free();
    short push(const T &value);
    short push_front(const T &value);
    T pop();
    short find(const T &value, short remove);
    void print();
    int size() { return count; }
    int remaining() { return queue_max - count; }
    short iterator_reset(short *iterator);
    T *iterate(short *iterator);
};

#endif
