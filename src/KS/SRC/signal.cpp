// Matching decompilation blocks selected by generated build shims.


// 0x0034BE60 get_func_name__15script_callback
#include "KS/SRC/signals.h"
const stringx& script_callback::get_func_name() { return func->get_fullname(); }

// 0x0034C530 refresh__6signal
#include "KS/SRC/signals.h"

void signal::refresh() { flags &= ~(RAISED | NEEDS_REFRESH); }

// 0x0034CC70 __9signaller
#include "KS/SRC/signals.h"

signaller::signaller() : flags(0), signals(0) {}

// 0x0034CC48 refresh__12gated_signal
#include "KS/SRC/signals.h"

__asm__(".equ refresh__6signal, 0x0034C530");

void gated_signal::refresh()
{
    signal::refresh();
    flags = 0;
}

// 0x0034CC18 match__C12gated_signalQ212gated_signal6type_tPC6signal
#include "KS/SRC/signals.h"

bool gated_signal::match(type_t value, const signal *input) const {
    return value == type && (input == input_b || input == input_a);
}

// 0x0034BEE8 spawn__13code_callbackP9signaller
#include "KS/SRC/signals.h"

void code_callback::spawn(signaller *sgrptr)
{
    if (!disabled)
        func(sgrptr, parms);
}

// 0x0034BE70 __13code_callbackPFP9signallerPCc_vPCc
#include "KS/SRC/signals.h"
__asm__(".equ _15signal_callback$id_counter, 0x0046DB14"); __asm__(".equ _vt$15signal_callback, 0x005051A8"); __asm__(".equ _vt$13code_callback, 0x00505148");code_callback::code_callback(void(*fn)(signaller*,const char*),const char*cptr):signal_callback(){func=fn;parms=(char*)cptr;}

// 0x0034BE08 spawn__15script_callbackP9signaller
#include "KS/SRC/signals.h"
extern "C" void *AddThread(
    script_object::instance *instance, const vm_executable *function,
    const char *params
) __asm__("add_thread__Q213script_object8instancePC13vm_executablePCc");
extern "C" void *AddThreadCallback(
    script_object::instance *instance, script_callback *callback,
    const vm_executable *function, const char *params
) __asm__("add_thread__Q213script_object8instanceP15script_callbackPC13vm_executablePCc");
__asm__(".equ add_thread__Q213script_object8instancePC13vm_executablePCc, 0x00350568");
__asm__(".equ add_thread__Q213script_object8instanceP15script_callbackPC13vm_executablePCc, 0x003506C8");
void script_callback::spawn(signaller *source) {
    if (!disabled) {
        if (one_shot)
        {
            void *(*add)(
                script_object::instance *,
                const vm_executable *,
                const char *) = AddThread;
            add(inst,func,parms);
        }
        else
        {
            void *(*add)(
                script_object::instance *,
                script_callback *,
                const vm_executable *,
                const char *) = AddThreadCallback;
            add(inst,this,func,parms);
        }
    }
}

// 0x0034BD90 _$_15script_callback
extern void*script_vtable;extern void*base_vtable;__asm__(".equ script_vtable,0x00505178");__asm__(".equ base_vtable,0x005051A8");extern "C" void clear_refs(void*,void*) __asm__("clear_callback_references__Q213script_object8instanceP15script_callback");extern "C" void vec_delete(void*) __asm__("__builtin_vec_delete");extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ clear_callback_references__Q213script_object8instanceP15script_callback,0x00350AB0");__asm__(".equ __builtin_vec_delete,0x002AC6D0");__asm__(".equ __builtin_delete,0x002AC6B0");struct callback{char*parms;char p0[12];void*vtable;void*inst;};extern "C" void destroy(callback*self,int deleting) __asm__("_$_15script_callback");void destroy(callback*self,int deleting){self->vtable=&script_vtable;clear_refs(self->inst,self);if(self->parms)vec_delete(self->parms);self->vtable=&base_vtable;if(deleting&1)object_delete(self);int dead;__asm__("" : "=r"(dead));}

// 0x0034CB18 __12gated_signalQ212gated_signal6type_tP6signalT2
struct signal;extern "C" void base_ctor(void*,void*) __asm__("__6signalP9signaller");__asm__(".equ __6signalP9signaller,0x0034BF18");extern void*gated_vtable;__asm__(".equ gated_vtable,0x005050F0");struct gated{int flavor;char p0[20];void*vtable;unsigned short type,flags;signal*input_a,*input_b;};extern "C" gated*construct(gated*self,int type,signal*a,signal*b) __asm__("__12gated_signalQ212gated_signal6type_tP6signalT2");gated*construct(gated*self,int type,signal*a,signal*b){base_ctor(self,0);register void**vtable __asm__("$3")=&gated_vtable;register int flavor __asm__("$4")=1;self->type=type;self->input_a=a;self->input_b=b;self->vtable=vtable;self->flavor=flavor;self->flags=0;return self;}

// 0x0034CE48 clear_script_callback__9signallerRC7stringx
struct stringx;struct signal;struct fastvec{unsigned count;signal**data;};struct signaller{char p0[4];fastvec*signals;};extern "C" void clear_one(signal*,const stringx&) __asm__("clear_script_callback__6signalRC7stringx");__asm__(".equ clear_script_callback__6signalRC7stringx,0x0034C8C0");extern "C" void clear_all(signaller*self,const stringx&name) __asm__("clear_script_callback__9signallerRC7stringx");void clear_all(signaller*self,const stringx&name){if(self->signals){signal**i=self->signals->data;signal**end=i+self->signals->count;for(;i!=end;++i)if(*i)clear_one(*i,name);}}

// 0x0034CB90 raise_input__12gated_signalP6signal
struct signal{};struct gated_signal{char pad[28];unsigned short type,flags;signal*input_a;signal*input_b;void raise_input(signal*)__asm__("raise_input__12gated_signalP6signal");};extern "C" void raise_signal(gated_signal*)__asm__("raise__6signal");extern "C" void refresh(gated_signal*)__asm__("set_needs_refresh__6signal");__asm__(".equ raise__6signal,0x0034C428");__asm__(".equ set_needs_refresh__6signal,0x0034C4D0");void gated_signal::raise_input(signal*input){if(input==input_a)flags|=1;else if(input==input_b)flags|=2;if(type==0){if((flags&3)==3)raise_signal(this);}else raise_signal(this);refresh(this);asm volatile("");}

// 0x0034BF18 __6signalP9signaller
class signaller;class signal_callback;struct Node{Node*next;Node*prev;signal_callback*data;};struct Pool{void*free_list[16];};extern Pool allocator_pool;extern "C" void*refill(unsigned) __asm__("_S_refill__t27__my_default_alloc_template2b0i0Ui");asm(".equ allocator_pool,0x003E5628");asm(".equ _S_refill__t27__my_default_alloc_template2b0i0Ui,0x0010DAE0");class CallbackList{Node*sentinel;public:CallbackList(){void*raw=allocator_pool.free_list[1];if(!raw)raw=refill(16);else allocator_pool.free_list[1]=*(void**)raw;sentinel=(Node*)raw;sentinel->next=sentinel;sentinel->prev=sentinel;}};class signal{public:enum flavor_t{SIGNAL,GATED_SIGNAL};protected:flavor_t flavor;private:unsigned flags;const char*name;void*outputs;CallbackList callbacks;signaller*owner;public:signal(signaller*);virtual~signal();};asm(".equ _vt$6signal,0x00505120");signal::signal(signaller*sgrptr):flags(0),name(0),outputs(0),callbacks(){volatile char frame_padding[16];flavor=SIGNAL;owner=sgrptr;}

// 0x0034BFB0 __6signalPCcP9signaller
class signaller;class signal_callback;struct Node{Node*next;Node*prev;signal_callback*data;};struct Pool{void*free_list[16];};extern Pool allocator_pool;extern "C" void*refill(unsigned) __asm__("_S_refill__t27__my_default_alloc_template2b0i0Ui");asm(".equ allocator_pool,0x003E5628");asm(".equ _S_refill__t27__my_default_alloc_template2b0i0Ui,0x0010DAE0");class CallbackList{Node*sentinel;public:CallbackList(){void*raw=allocator_pool.free_list[1];if(!raw)raw=refill(16);else allocator_pool.free_list[1]=*(void**)raw;sentinel=(Node*)raw;sentinel->next=sentinel;sentinel->prev=sentinel;}};class signal{public:enum flavor_t{SIGNAL,GATED_SIGNAL};protected:flavor_t flavor;private:unsigned flags;const char*name;void*outputs;CallbackList callbacks;signaller*owner;public:signal(const char*,signaller*);virtual~signal();};asm(".equ _vt$6signal,0x00505120");signal::signal(const char*_name,signaller*sgrptr):flags(0),name(_name),outputs(0),callbacks(){volatile char frame_padding[16];flavor=SIGNAL;owner=sgrptr;}

// 0x0034D120 signal_AND__C14signal_managerP6signalT1
class signal{char layout[24];public:signal*find_AND(const signal*)const;void link(signal*);};class gated_signal:public signal{char layout[16];public:enum type_t{AND,OR};gated_signal(type_t,signal*,signal*);};class signal_manager{public:signal*signal_AND(signal*,signal*)const;};extern const char source_file[];void*operator new(unsigned,unsigned,const char*,int);asm(".equ source_file,0x00503120");asm(".equ __nw__FUiUiPCci,0x002AC578");asm(".equ find_AND__C6signalPC6signal,0x0034C2D8");asm(".equ __12gated_signalQ212gated_signal6type_tP6signalT2,0x0034CB18");asm(".equ link__6signalP6signal,0x0034C0F8");signal*signal_manager::signal_AND(signal*a,signal*b)const{signal*sig=a->find_AND(b);if(!sig){sig=new(0,source_file,0)gated_signal(gated_signal::AND,a,b);a->link(sig);b->link(sig);}return sig;}

// 0x0034D1B8 signal_OR__C14signal_managerP6signalT1
class signal{char layout[24];public:signal*find_OR(const signal*)const;void link(signal*);};class gated_signal:public signal{char layout[16];public:enum type_t{AND,OR};gated_signal(type_t,signal*,signal*);};class signal_manager{public:signal*signal_OR(signal*,signal*)const;};extern const char source_file[];void*operator new(unsigned,unsigned,const char*,int);asm(".equ source_file,0x00503168");asm(".equ __nw__FUiUiPCci,0x002AC578");asm(".equ find_OR__C6signalPC6signal,0x0034C380");asm(".equ __12gated_signalQ212gated_signal6type_tP6signalT2,0x0034CB18");asm(".equ link__6signalP6signal,0x0034C0F8");signal*signal_manager::signal_OR(signal*a,signal*b)const{signal*sig=a->find_OR(b);if(!sig){sig=new(0,source_file,0)gated_signal(gated_signal::OR,a,b);a->link(sig);b->link(sig);}return sig;}

// 0x0034BCD8 __15script_callbackPQ213script_object8instancePC13vm_executablePCc
#include "KS/SRC/signals.h"

#ifndef NULL
#define NULL 0
#endif

void *operator new[](
    unsigned int size,
    unsigned int heap,
    const char *description,
    int line);
extern "C" void *memcpy(
    void *destination,
    const void *source,
    unsigned int size);
__asm__(".equ _15signal_callback$id_counter, 0x0046DB14");
__asm__(".equ _vt$15signal_callback, 0x005051A8");
__asm__(".equ _vt$15script_callback, 0x00505178");
__asm__(".equ __vn__FUiUiPCci, 0x002AC5A0");
__asm__(".equ memcpy, 0x003D171C");

extern const char script_callback_ctor_description[];
__asm__(".equ script_callback_ctor_description, 0x00502FB8");

script_callback::script_callback( script_object::instance* _inst, const vm_executable* _func, const char* _parms )
  : signal_callback(),
  inst( _inst ),
  func( _func )
{
  int psize = func->get_parms_stacksize();
  if ( psize )
  {
    parms = new(0, script_callback_ctor_description, 0) char[psize];
    memcpy( parms, _parms, psize );
  }
  else
    parms = NULL;
}

// 0x0034CEC0 __14signal_manager
#include "KS/SRC/signals.h"

// The released constructor default-initializes both containers.
// Shared GNU 2 tree declarations retain the allocator base construction order.
signal_manager::signal_manager()
  :   signal_id_map(),
      refresh_list()
{
  volatile char frame_padding[32];
}
