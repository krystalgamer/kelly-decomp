#ifndef KSHOOKS_H
#define KSHOOKS_H

typedef unsigned int u_int;

struct nglFileBuf;

void KSCriticalError(const char *text);
void KSDebugPrint(const char *text);
void *KSMemAllocate(
    u_int size,
    u_int alignment,
    const char *file,
    int line);
void *KSMemAlloc(u_int size, u_int alignment);
void *KSMemAllocNGL(u_int size, u_int alignment);
void *KSMemAllocNSL(u_int size, u_int alignment);
void *KSMemAllocNVL(u_int size, u_int alignment);
void KSMemFree(void *pointer);
bool KSReadFile(
    const char *filename,
    nglFileBuf *file,
    u_int alignment);
void KSReleaseFile(nglFileBuf *file);

#endif
