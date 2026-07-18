typedef void HeapMessager(const char* message);
extern HeapMessager* HeapWarning;
extern HeapMessager* HeapError;
__asm__(".equ HeapWarning, 0x004322C4");
__asm__(".equ HeapError, 0x004322C8");
class Heap { public: static void SetHeapMessagers(HeapMessager* warning, HeapMessager* error); };
void Heap::SetHeapMessagers(HeapMessager* warning, HeapMessager* error) { HeapWarning = warning; HeapError = error; }
