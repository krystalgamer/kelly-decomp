#ifndef KELLY_DECOMP_STATICMEM_SHARED_H
#define KELLY_DECOMP_STATICMEM_SHARED_H

#ifndef NULL
#define NULL 0
#endif

void *arch_malloc(unsigned int size, const char *description, int line);
extern "C" void *memset(void *destination, int value, unsigned int size);

#endif
