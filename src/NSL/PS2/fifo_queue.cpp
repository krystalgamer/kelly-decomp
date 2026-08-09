// Matching decompilation blocks selected by generated build shims.

// 0x00391670 free__t10fifo_queue1ZUi
#include "NSL/PS2/fifo_queue.h"
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ clear__t10fifo_queue1ZUi, 0x003915E0");
typedef unsigned int u_int;
extern "C" void clear_unsigned_queue(fifo_queue<u_int> *queue)
    __asm__("clear__t10fifo_queue1ZUi");

template<>
void fifo_queue<u_int>::free()
{
    if (queue != 0)
        delete[] queue;
    queue = 0;
    queue_max = 0;
    void (*clear_queue)(fifo_queue<u_int> *) = clear_unsigned_queue;
    clear_queue(this);
}
