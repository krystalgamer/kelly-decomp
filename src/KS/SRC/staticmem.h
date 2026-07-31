#ifndef STATICMEM_H
#define STATICMEM_H

#ifndef NULL
#define NULL 0
#endif

void *arch_malloc(unsigned int size, const char *description, int line);
extern "C" void *memset(void *destination, int value, unsigned int size);

#endif
