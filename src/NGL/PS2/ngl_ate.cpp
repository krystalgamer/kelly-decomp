// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003ACA30)
// 0x003ACA30 ATEEntryHead__FPci
char* ATEEntryHead(char* base, int index) { return base + 16 + index * 48; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACD60)
// 0x003ACD60 _GLOBAL_$I$ATENameMatch__FRC14nglFixedStringT0
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$ATENameMatch__FRC14nglFixedStringT0");
__asm__(".equ __static_initialization_and_destruction_0, 0x003ACCF0");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACBA8)
// 0x003ACBA8 ATETextureName__FPcRC14nglFixedStringi
__asm__(".equ ATENthTextureEntryHead__FPcRC14nglFixedStringi, 0x003ACAD8");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ _ate_file, 0x0051E780");
__asm__(".equ _ate_expr, 0x0051E798");
__asm__(".equ baditem, 0x005AC9A0");
class nglFixedString {};
struct ATEFileEntry { nglFixedString name; };
extern nglFixedString baditem;
extern char ate_file __asm__("_ate_file");
extern char ate_expr __asm__("_ate_expr");
ATEFileEntry* ATENthTextureEntryHead(char*, const nglFixedString&, int);
extern "C" void __assert(const char*, int, const char*);
nglFixedString& ATETextureName(char* atefile, const nglFixedString& texname, int i)
{
    ATEFileEntry* entry = ATENthTextureEntryHead(atefile, texname, i);
    if (entry)
        return entry->name;
    __assert(&ate_file, 98, &ate_expr);
    return baditem;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACBF0)
// 0x003ACBF0 ATETextureHeader__FPcRC14nglFixedStringi
struct nglFixedString {
    char text[32];
};

struct ATEFileEntry {
    nglFixedString name;
    unsigned int hoff;
    unsigned int ioff;
    unsigned int poff;
    unsigned int pad;
};

ATEFileEntry *ATENthTextureEntryHead(
    char *atefile,
    const nglFixedString &texture_name,
    int index
);
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char ate_file[];
extern const char ate_assert[];

__asm__(".equ ATENthTextureEntryHead__FPcRC14nglFixedStringi, 0x003ACAD8");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ ate_file, 0x0051E780");
__asm__(".equ ate_assert, 0x0051E798");

char *ATETextureHeader(
    char *atefile,
    const nglFixedString &texture_name,
    int index
)
{
    ATEFileEntry *entry =
        ATENthTextureEntryHead(atefile, texture_name, index);
    unsigned int offset;
    if (entry) {
        offset = entry->hoff;
        goto found;
    }
    __assert(ate_file, 106, ate_assert);
    return 0;

found:
    return atefile + offset;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACC40)
// 0x003ACC40 ATETextureImage__FPcRC14nglFixedStringi
struct nglFixedString {
    char text[32];
};

struct ATEFileEntry {
    nglFixedString name;
    unsigned int hoff;
    unsigned int ioff;
    unsigned int poff;
    unsigned int pad;
};

ATEFileEntry *ATENthTextureEntryHead(
    char *atefile,
    const nglFixedString &texture_name,
    int index
);
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char ate_file[];
extern const char ate_assert[];

__asm__(".equ ATENthTextureEntryHead__FPcRC14nglFixedStringi, 0x003ACAD8");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ ate_file, 0x0051E780");
__asm__(".equ ate_assert, 0x0051E798");

char *ATETextureImage(
    char *atefile,
    const nglFixedString &texture_name,
    int index
)
{
    ATEFileEntry *entry =
        ATENthTextureEntryHead(atefile, texture_name, index);
    unsigned int offset;
    if (entry) {
        offset = entry->ioff;
        goto found;
    }
    __assert(ate_file, 114, ate_assert);
    return 0;

found:
    return atefile + offset;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003ACC90)
// 0x003ACC90 ATETexturePalette__FPcRC14nglFixedStringi
struct nglFixedString {
    char text[32];
};

struct ATEFileEntry {
    nglFixedString name;
    unsigned int hoff;
    unsigned int ioff;
    unsigned int poff;
    unsigned int pad;
};

ATEFileEntry *ATENthTextureEntryHead(
    char *atefile,
    const nglFixedString &texture_name,
    int index
);
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char ate_file[];
extern const char ate_assert[];

__asm__(".equ ATENthTextureEntryHead__FPcRC14nglFixedStringi, 0x003ACAD8");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ ate_file, 0x0051E780");
__asm__(".equ ate_assert, 0x0051E798");

char *ATETexturePalette(
    char *atefile,
    const nglFixedString &texture_name,
    int index
)
{
    ATEFileEntry *entry =
        ATENthTextureEntryHead(atefile, texture_name, index);
    unsigned int offset;
    if (entry) {
        offset = entry->poff;
        goto found;
    }
    __assert(ate_file, 122, ate_assert);
    return 0;

found:
    return atefile + offset;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003AC940)
// 0x003AC940 ATENameMatch__FRC14nglFixedStringT0
extern "C" unsigned int strlen(const char *);
extern "C" int strnicmp(const char *, const char *, unsigned int)
    __asm__("strncasecmp");
__asm__(".equ strlen,0x003D40E0");
__asm__(".equ strncasecmp,0x003D4270");
class nglFixedString {
    char str[32];
public:
    const char *c_str() const { return str; }
};
bool ATENameMatch(const nglFixedString &find, const nglFixedString &entry)
{
    int l = strlen(find.c_str());
    return ((l == 0) || (strnicmp(find.c_str(), entry.c_str(), l) == 0));
}
#endif
