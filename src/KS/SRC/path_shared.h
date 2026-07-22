#ifndef KELLY_DECOMP_PATH_SHARED_H
#define KELLY_DECOMP_PATH_SHARED_H

class path_graph_edge;

template <class T>
class vector {
    T *start;
    T *finish;
    T *end_of_storage;

public:
    inline vector() : start(0), finish(0), end_of_storage(0) {}
};

extern vector<path_graph_edge *> *patrol_edges_workspace;
extern const char path_graph_construct_desc[];

void *operator new(
    unsigned int size,
    unsigned int flags,
    const char *description,
    int line);

#endif
