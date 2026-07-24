// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034BE60)
// 0x0034BE60 get_func_name__15script_callback
class stringx {};
struct script_instance { char padding[0xC]; stringx function_name; };
class script_callback { char padding[0x18]; script_instance* instance; public: const stringx& get_func_name(); };
const stringx& script_callback::get_func_name() { return instance->function_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034C530)
// 0x0034C530 refresh__6signal
class signal { char padding[0x4]; unsigned int flags; public: void refresh(); };
void signal::refresh() { flags &= 0xFFFFFFFCu; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034C510)
// 0x0034C510 raise_input__6signalP6signalP9signaller
class signaller;
class signal { public: void raise(); void raise_input(signal *input, signaller *source); };
__asm__(".equ raise__6signal, 0x0034C428");
void signal::raise_input(signal *input, signaller *source) { raise(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC70)
// 0x0034CC70 __9signaller
class signaller { unsigned int flags; void *signals; public: signaller(); virtual ~signaller(); };
__asm__(".equ _vt$9signaller, 0x005050B0");
signaller::signaller() : flags(0), signals(0) {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC48)
// 0x0034CC48 refresh__12gated_signal
extern "C" void SignalRefresh(void *self) __asm__("refresh__6signal");
__asm__(".equ refresh__6signal, 0x0034C530");
class gated_signal { char padding[0x1e]; unsigned short flags; public: void refresh(); };
void gated_signal::refresh() { SignalRefresh(this); flags = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC18)
// 0x0034CC18 match__C12gated_signalQ212gated_signal6type_tPC6signal
class signal;

class gated_signal {
public:
    enum type_t {
        AND,
        OR
    };

private:
    char padding[0x1c];
    unsigned short type;
    unsigned short flags;
    signal *input_a;
    signal *input_b;

public:
    bool match(type_t value, const signal *input) const;
};

bool gated_signal::match(type_t value, const signal *input) const {
    return value == type && (input == input_b || input == input_a);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034BEB8)
// 0x0034BEB8 _$_13code_callback
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char signal_callback_vtable[];
__asm__(".equ signal_callback_vtable, 0x005051A8");

struct code_callback_layout {
    char padding[0x10];
    const void *vtable;
};

extern "C" void CodeCallbackDtor(void *self, int deleting)
    __asm__("_$_13code_callback");

void CodeCallbackDtor(void *self, int deleting) {
    ((code_callback_layout *)self)->vtable = signal_callback_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034BEE8)
// 0x0034BEE8 spawn__13code_callbackP9signaller
class signaller;

class code_callback {
    char *parms;
    bool disabled;
    bool one_shot;
    unsigned int id;
    const void *vtable;
    void (*func)(signaller *, const char *);

public:
    void spawn(signaller *sgrptr);
};

void code_callback::spawn(signaller *sgrptr)
{
    if (!disabled)
        func(sgrptr, parms);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034BE70)
// 0x0034BE70 __13code_callbackPFP9signallerPCc_vPCc
#pragma interface
__asm__(".equ _15signal_callback$id_counter, 0x0046DB14"); __asm__(".equ _vt$15signal_callback, 0x005051A8"); __asm__(".equ _vt$13code_callback, 0x00505148");class signaller;class signal_callback{public:char*parms;bool disabled;bool one_shot;unsigned id;static unsigned id_counter;signal_callback(){disabled=one_shot=false;id=id_counter++;}virtual~signal_callback();virtual void spawn(signaller*)=0;};class code_callback:public signal_callback{public:void(*func)(signaller*,const char*);code_callback(void(*)(signaller*,const char*),const char*);};code_callback::code_callback(void(*fn)(signaller*,const char*),const char*cptr):signal_callback(){func=fn;parms=(char*)cptr;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034BE08)
// 0x0034BE08 spawn__15script_callbackP9signaller
class signaller;
struct vm_executable;
struct script_callback;
struct script_instance {};
extern "C" void *AddThread(
    script_instance *instance, const vm_executable *function,
    const char *params
) __asm__("add_thread__Q213script_object8instancePC13vm_executablePCc");
extern "C" void *AddThreadCallback(
    script_instance *instance, script_callback *callback,
    const vm_executable *function, const char *params
) __asm__("add_thread__Q213script_object8instanceP15script_callbackPC13vm_executablePCc");
__asm__(".equ add_thread__Q213script_object8instancePC13vm_executablePCc, 0x00350568");
__asm__(".equ add_thread__Q213script_object8instanceP15script_callbackPC13vm_executablePCc, 0x003506C8");
struct callback_layout {
    char *parameters;
    int disabled;
    int one_shot;
    char padding[8];
    script_instance *instance;
    vm_executable *function;
};
class script_callback {
public:
    void spawn(signaller *source);
};
void script_callback::spawn(signaller *source) {
    callback_layout *callback=(callback_layout *)this;
    if (!callback->disabled) {
        if (callback->one_shot)
        {
            AddThread(
                callback->instance,callback->function,
                callback->parameters
            );
            __asm__ __volatile__("" : : : "memory");
        }
        else
        {
            AddThreadCallback(
                callback->instance,this,callback->function,
                callback->parameters
            );
            __asm__ __volatile__("" : : : "memory");
        }
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034C278)
// 0x0034C278 clear_links__6signal
struct signal_node { signal_node *next; signal_node *previous; };
extern "C" void clear_signal_list(void *)
    __asm__("clear__t10_List_base2ZP6signalZt12my_allocator1ZP6signal");
__asm__(".equ clear__t10_List_base2ZP6signalZt12my_allocator1ZP6signal,0x0035A1C0");
struct signal_node_pool { int unused; signal_node *free; };
extern signal_node_pool signal_list_pool;
__asm__(".equ signal_list_pool,0x003E5628");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete,0x002AC6B0");
struct signal_list {
    signal_node *head;
    __attribute__((always_inline)) ~signal_list() {
        clear_signal_list(this);
        signal_node *node = head;
        node->next = signal_list_pool.free;
        signal_list_pool.free = node;
    }
};
class signal {
    char data[12];
    signal_list *outputs;
public:
    void clear_links();
};
void signal::clear_links()
{
    if (outputs != 0) {
        signal_list *list = outputs;
        clear_signal_list(list);
        signal_node *node = list->head;
        node->next = signal_list_pool.free;
        signal_list_pool.free = node;
        object_delete(list);
        outputs = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CD68)
// 0x0034CD68 clear_callbacks__9signaller
struct signal;struct fastvec{unsigned count;signal**data;};struct signaller{char p0[4];fastvec*signals;};extern "C" void clear_cb(signal*) __asm__("clear_callbacks__6signal");extern "C" void clear_links(signal*) __asm__("clear_links__6signal");__asm__(".equ clear_callbacks__6signal,0x0034C750");__asm__(".equ clear_links__6signal,0x0034C278");extern "C" void clear_all(signaller*self) __asm__("clear_callbacks__9signaller");void clear_all(signaller*self){if(self->signals){signal**i=self->signals->data;signal**end=i+self->signals->count;for(;i!=end;++i){if(*i){clear_cb(*i);clear_links(*i);}}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CDD8)
// 0x0034CDD8 clear_script_callbacks__9signaller
struct signal;struct fastvec{unsigned count;signal**data;};struct signaller{char p0[4];fastvec*signals;};extern "C" void clear_cb(signal*) __asm__("clear_script_callbacks__6signal");extern "C" void clear_links(signal*) __asm__("clear_links__6signal");__asm__(".equ clear_script_callbacks__6signal,0x0034C7E0");__asm__(".equ clear_links__6signal,0x0034C278");extern "C" void clear_all(signaller*self) __asm__("clear_script_callbacks__9signaller");void clear_all(signaller*self){if(self->signals){signal**i=self->signals->data;signal**end=i+self->signals->count;for(;i!=end;++i){if(*i){clear_cb(*i);clear_links(*i);}}}}
#endif
