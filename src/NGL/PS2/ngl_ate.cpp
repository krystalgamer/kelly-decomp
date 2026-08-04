// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003ACAD8)
// 0x003ACAD8 ATENthTextureEntryHead__FPcRC14nglFixedStringi
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

ATEFileEntry *ATEEntryHead(char *file, int index);
bool ATENameMatch(
    const atestring &left,
    const atestring &right);
void ate_assert(
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

ATEFileEntry *ATENthTextureEntryHead(
    char *file,
    const atestring &texture_name,
    int entry)
{
    ATEFileHeader *header =
        reinterpret_cast<ATEFileHeader *>(file);
    int found = 0;
    if (header->items)
    {
        for (unsigned int index = 0;
             index < header->items;
             index++)
        {
            ATEFileEntry *candidate =
                ATEEntryHead(file, index);
            if (candidate &&
                ATENameMatch(
                    texture_name,
                    candidate->name))
            {
                if (found == entry)
                    return candidate;
                found++;
            }
        }
    }
    ate_assert(
        ate_source_file,
        68,
        ate_assert_condition);
    return 0;
}
#endif

// 0x003ACA30 ATEEntryHead__FPci
char* ATEEntryHead(char* base, int index) { return base + 16 + index * 48; }

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

#if defined(KELLY_DECOMP_FUNCTION_003ACA48)
// 0x003ACA48 ATETextureCount__FPcRC14nglFixedString
struct nglFixedString{char d[32];};struct Header{char p[8];unsigned items;};struct Entry{char d[48];};extern "C" Entry*head(char*,int)__asm__("ATEEntryHead__FPci");extern "C" bool match(const nglFixedString&,const nglFixedString&)__asm__("ATENameMatch__FRC14nglFixedStringT0");__asm__(".equ ATEEntryHead__FPci,0x003ACA30");__asm__(".equ ATENameMatch__FRC14nglFixedStringT0,0x003AC940");extern "C" unsigned count(char*,const nglFixedString&)__asm__("ATETextureCount__FPcRC14nglFixedString");unsigned count(char*file,const nglFixedString&name){Header*h=(Header*)file;unsigned rv=0;if(h->items){for(unsigned i=0;i<h->items;i++){Entry*e=head(file,i);if(e&&match(name,*(nglFixedString*)e))rv++;}}return rv;}
#endif
