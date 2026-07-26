#ifndef KELLY_DECOMP_NGL_ATE_LOOKUP_SHARED_H
#define KELLY_DECOMP_NGL_ATE_LOOKUP_SHARED_H

struct nglFixedString {
    char value[32];
};

typedef nglFixedString atestring;

struct ATEFileHeader {
    char built_fields[8];
    unsigned int items;
};

struct ATEFileEntry {
    atestring name;
};

extern "C" ATEFileEntry *ATEEntryHead(
    char *file,
    int index)
    __asm__("ATEEntryHead__FPci");
extern "C" bool ATENameMatch(
    const atestring &left,
    const atestring &right)
    __asm__("ATENameMatch__FRC14nglFixedStringT0");
extern "C" void ate_assert(
    const char *file,
    int line,
    const char *condition)
    __asm__("__assert");
extern const char ate_source_file[];
extern const char ate_assert_condition[];

__asm__(".equ ATEEntryHead__FPci, 0x003ACA30");
__asm__(
    ".equ ATENameMatch__FRC14nglFixedStringT0, "
    "0x003AC940");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ ate_source_file, 0x0051E780");
__asm__(".equ ate_assert_condition, 0x0051E798");

#endif
