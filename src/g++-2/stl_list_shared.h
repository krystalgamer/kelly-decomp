#ifndef KELLY_DECOMP_STL_LIST_SHARED_H
#define KELLY_DECOMP_STL_LIST_SHARED_H

struct _List_node {
    _List_node* next;
    _List_node* previous;
};

struct list_allocator_pool {
    _List_node* slots[8];
};

extern list_allocator_pool allocator_pool;
__asm__(".equ allocator_pool, 0x003E5628");

template<class T>
struct my_allocator {
};

template<class T, class Allocator>
class _List_base {
protected:
    _List_node* head;

    void put_node(_List_node* node)
    {
        node->next = allocator_pool.slots[1];
        allocator_pool.slots[1] = node;
    }

public:
    void clear();
};

#endif
