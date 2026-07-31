// Matching decompilation blocks selected by generated build shims.

// 0x00391670 free__t10fifo_queue1ZUi
#include "NSL/PS2/fifo_queue.h"
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ clear__t10fifo_queue1ZUi, 0x003915E0");
inline void fifo_queue_compiler_barrier() { KELLY_DECOMP_COMPILER_BARRIER(); }
typedef unsigned int u_int;
template<class T>
void fifo_queue<T>::free()
{
    if (queue != 0)
        delete[] queue;
    queue = 0;
    queue_max = 0;
    clear();
    fifo_queue_compiler_barrier();
}
template void fifo_queue<u_int>::free();
