#ifndef KELLY_DECOMP_SCRIPT_OBJECT_DUMP_SHARED_H
#define KELLY_DECOMP_SCRIPT_OBJECT_DUMP_SHARED_H

class os_file;
typedef os_file *host_system_file_handle;

class stringx
{
protected:
    char *chars;
    void *my_buf;

public:
    inline const char *c_str() const { return chars; }
};

class script_object
{
public:
    class instance;
};

class vm_executable
{
protected:
    script_object *owner;
    stringx name;

public:
    inline const stringx &get_name() const { return name; }
};

class vm_thread
{
protected:
    enum flags_t
    {
        SUSPENDED = 0x0001,
        SUSPENDABLE = 0x0002
    };

    script_object::instance *inst;
    const vm_executable *ex;
    unsigned int flags;
    char state[52];

public:
    inline const vm_executable *get_executable() const { return ex; }
    inline bool is_flagged(flags_t f) const { return flags & f; }
    inline bool is_suspended() const { return is_flagged(SUSPENDED); }

    float prof_runtime;
    unsigned int prof_opcount;
};

template <class T>
struct script_object_list_node
{
    script_object_list_node *next;
    script_object_list_node *previous;
    T value;
};

template <class T>
class script_object_list_const_iterator
{
    typedef script_object_list_node<T> node_type;
    node_type *node;

public:
    script_object_list_const_iterator(node_type *n) : node(n) {}
    const T &operator*() const { return node->value; }
    script_object_list_const_iterator &operator++()
    {
        node = node->next;
        return *this;
    }
    bool operator!=(const script_object_list_const_iterator &other) const
    {
        return node != other.node;
    }
};

template <class T>
class script_object_list
{
    typedef script_object_list_node<T> node_type;
    node_type *sentinel;

public:
    typedef script_object_list_const_iterator<T> const_iterator;
    const_iterator begin() const { return const_iterator(sentinel->next); }
    const_iterator end() const { return const_iterator(sentinel); }
};

struct so_data_block
{
    int blocksize;
    char *buffer;
};

class script_object::instance
{
    typedef script_object_list<vm_thread *> thread_list;

protected:
    stringx name;
    so_data_block data;
    thread_list threads;
    bool suspended;

public:
    void dump_threads(host_system_file_handle outfile) const;
};

extern const char thread_dump_format[];
extern int host_fprintf(host_system_file_handle, const char *, ...)
    __asm__("host_fprintf__FP7os_filePCce");

__asm__(".equ thread_dump_format, 0x005036F8");
__asm__(".equ host_fprintf__FP7os_filePCce, 0x001E1078");
__asm__(".equ fptodp, 0x003CD278");

#endif
