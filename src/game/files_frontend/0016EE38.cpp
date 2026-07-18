class IGOPrintQueue { char padding[0xC0]; int start; int end; unsigned char size; public: void clear(); };
void IGOPrintQueue::clear() { start = end = size = 0; }
