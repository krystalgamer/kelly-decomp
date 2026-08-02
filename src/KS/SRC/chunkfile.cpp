// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00336B60)
// 0x00336B60 __eq__C12chunk_flavorRC12chunk_flavor
extern "C" int strcmp(const char *left, const char *right);
__asm__(".equ strcmp, 0x003D3E88");
class chunk_flavor { char text[1]; public: bool operator==(const chunk_flavor &other) const; };
bool chunk_flavor::operator==(const chunk_flavor &other) const { return strcmp(text, other.text) == 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336B30)
// 0x00336B30 to_stringx__C12chunk_flavor
class stringx {
    int value;

public:
    stringx(const char *text, int length = -1);

    stringx(const stringx &other) {
        value = other.value;
    }
};

__asm__(".equ __7stringxPCci, 0x0034D438");

class chunk_flavor {
    char flavor[1];

public:
    stringx to_stringx() const;
};

stringx chunk_flavor::to_stringx() const {
    return stringx(flavor);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336900)
// 0x00336900 serial_in__FR10chunk_filePUs
class chunk_file;
void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, unsigned short *value) {
    int temporary;
    serial_in(file, &temporary);
    *value = temporary;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336930)
// 0x00336930 serial_in__FR10chunk_filePUi
class chunk_file;
void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, unsigned int *value) {
    int temporary;
    serial_in(file, &temporary);
    *value = temporary;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336960)
// 0x00336960 serial_in__FR10chunk_filePb
class chunk_file;

void serial_in(chunk_file &file, int *value);
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &file, bool *value)
{
    int serialized;
    serial_in(file, &serialized);
    *value = (bool)serialized;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003368A0)
// 0x003368A0 serial_in__FR10chunk_filePi
struct chunk_file {
    int use_stash;
    int type;
    char binary[0x40];
    char text[0x90];
    char stash[1];
};
extern "C" void text_read(char *,int *)
    __asm__("read__9text_filePi");
extern "C" void stash_read(char *,void *,int)
    __asm__("read__5stashPvi");
extern "C" void file_read(char *,void *,int,bool)
    __asm__("read__7os_filePvib");
__asm__(".equ read__9text_filePi, 0x003371B0");
__asm__(".equ read__5stashPvi, 0x00348010");
__asm__(".equ read__7os_filePvib, 0x001E0450");
extern "C" void serial_int(chunk_file &io,int *value)
    __asm__("serial_in__FR10chunk_filePi");
void serial_int(chunk_file &io,int *value) {
    if (io.type==1) {
        text_read(io.text,value);
        __asm__ __volatile__("" : : : "memory");
    } else if (io.use_stash) {
        stash_read(io.stash,value,4);
        __asm__ __volatile__("" : : : "memory");
    } else {
        file_read(io.binary,value,4,false);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336998)
// 0x00336998 serial_in__FR10chunk_filePf
struct chunk_file {
    int use_stash;
    int type;
    char binary[0x40];
    char text[0x90];
    char stash[1];
};
extern "C" void text_read(char *,float *)
    __asm__("read__9text_filePf");
extern "C" void stash_read(char *,void *,int)
    __asm__("read__5stashPvi");
extern "C" void file_read(char *,void *,int,bool)
    __asm__("read__7os_filePvib");
__asm__(".equ read__9text_filePf, 0x003372F8");
__asm__(".equ read__5stashPvi, 0x00348010");
__asm__(".equ read__7os_filePvib, 0x001E0450");
extern "C" void serial_float(chunk_file &io,float *value)
    __asm__("serial_in__FR10chunk_filePf");
void serial_float(chunk_file &io,float *value) {
    if (io.type==1) {
        text_read(io.text,value);
        __asm__ __volatile__("" : : : "memory");
    } else if (io.use_stash) {
        stash_read(io.stash,value,4);
        __asm__ __volatile__("" : : : "memory");
    } else {
        file_read(io.binary,value,4,false);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003363A8)
// 0x003363A8 close__10chunk_file
typedef unsigned long uint64;struct pstring{uint64 pchunk[4];pstring(){for(unsigned i=0;i<4;++i)pchunk[i]=0;}};struct os_file{char data[64];os_file();void close();};struct text_file{char data[144];text_file();void close();};struct stash{void*index;bool opened;bool eof;unsigned fp;unsigned max_fp;char align[4];pstring fullname;stash(){opened=false;eof=false;index=0;fp=0;max_fp=0;}void close(){index=0;eof=false;opened=false;fp=0;max_fp=0;}};__asm__(".equ __7os_file,0x001DFC58");__asm__(".equ close__7os_file,0x001E03A0");__asm__(".equ __9text_file,0x00336D50");__asm__(".equ close__9text_file,0x00337170");class chunk_file{public:bool use_stash;int type;os_file binary;text_file text;stash the_stash;int my_stash;chunk_file()__asm__("close__10chunk_file");void close()__asm__("close__10chunk_file");};void chunk_file::close(){if(type==2){if(use_stash==true){use_stash=false;the_stash.close();}else binary.close();}else if(type==1){text.close();}type=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336800)
// 0x00336800 serial_in__FR10chunk_fileP12chunk_flavor
extern "C" char*strcpy(char*,const char*);class text_file{};extern "C" void read_text(text_file*,char*,int) __asm__("read__9text_filePci");class stash{public:unsigned read(void*,int);};class os_file{public:int read(void*,int,bool=false);};class chunk_file{public:int use_stash;int type;os_file binary;char p0[64-sizeof(os_file)];text_file text;char p1[144-sizeof(text_file)];stash the_stash;};class chunk_flavor{char flavor[16];public:enum{CHUNK_FLAVOR_SIZE=16};chunk_flavor(const char*s){strcpy(flavor,s);}};asm(".equ read__9text_filePci,0x003378D8");asm(".equ read__5stashPvi,0x00348010");asm(".equ read__7os_filePvib,0x001E0450");asm(".equ strcpy,0x003D3FCC");void serial_in(chunk_file&io,chunk_flavor*d){if(io.type==1){char cfname[17];register char*buf asm("$5")=cfname;asm("" : "+r"(buf));read_text(&io.text,buf,16);*d=chunk_flavor(cfname);}else{if(io.use_stash)io.the_stash.read(d,sizeof(chunk_flavor));else io.binary.read(d,sizeof(chunk_flavor));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003369F8)
// 0x003369F8 serial_in__FR10chunk_fileP7stringx
struct string_buf {
    unsigned long long *data;
    int ref_count;
    int char_length;
    int block_length;
    int max_blocks;

    inline int compare(const char *text) const {
        const char *value = reinterpret_cast<const char *>(data);
        int index;
        for (index = 0; index < char_length; ++index) {
            if (text[index] == 0)
                return -1;
            if (value[index] == text[index])
                continue;
            if (text[index] > value[index])
                return 1;
            if (text[index] < value[index])
                return -1;
        }
        return text[index] == 0 ? 0 : 1;
    }
};

class stringx {
protected:
    char *chars;
    string_buf *my_buf;

public:
    stringx();
    stringx(const stringx &);
    stringx(const char *, int = -1);
    explicit stringx(float);
    explicit stringx(int);
    explicit stringx(unsigned int);
    ~stringx();
    stringx &operator=(const stringx &);
    stringx &operator=(const char *);
    inline const char *c_str() const { return chars; }
    inline char *data() const { return chars; }
    int length() const;
    int find(const char *text) const;
    void lock();
    void fork_data(int new_length = -1);
    inline int size() const { return my_buf->char_length; }
    inline bool operator==(const char *text) const {
        return my_buf->compare(text) == 0;
    }
};

#define assert(condition) ((void)0)

class os_file {
    char state[64];

public:
    int read(void *data, int size, bool async = false);
};

class text_file {
    char state[144];

public:
    void read(stringx *text);
};

class stash {
    char state[1];

public:
    unsigned int read(void *data, int size);
    bool is_open() const;
};

class chunk_file {
public:
    enum chunk_file_t {
        CFT_NONE,
        CFT_TEXT,
        CFT_BINARY
    };

    bool use_stash;

private:
    chunk_file_t type;
    os_file binary;
    text_file text;
    stash the_stash;
    int my_stash;

public:
    chunk_file_t get_type() { return type; }
    os_file *get_binary() {
        assert(type == CFT_BINARY);
        return &binary;
    }
    text_file *get_text() {
        assert(type == CFT_TEXT);
        return &text;
    }
    stash *get_stash() {
        assert(type == CFT_BINARY && the_stash.is_open());
        return &the_stash;
    }
};

__asm__(".equ read__9text_fileP7stringx, 0x00337890");
__asm__(".equ read__5stashPvi, 0x00348010");
__asm__(".equ read__7os_filePvib, 0x001E0450");
__asm__(".equ __7stringx, 0x0034D3E0");
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ __as__7stringxPCc, 0x0034E118");
__asm__(".equ _$_7stringx, 0x0034D6E0");

void serial_in(chunk_file& io, stringx* d)
{
  if (io.get_type()==chunk_file::CFT_TEXT)
    io.get_text()->read(d);
  else
  {
    int len;
    char work[256];
    if (io.use_stash)
      io.get_stash()->read( &len, sizeof(int) );
    else
      io.get_binary()->read( &len, sizeof(int) );
    assert( len < (int)sizeof(work)-1 );
    if ( len > 0 )
    {
      if (io.use_stash)
        io.get_stash()->read( work, len );
      else
        io.get_binary()->read( work, len );
      work[len] = '\0';
      *d = work;
    }
    else
      *d = stringx();
  }
}
#endif
