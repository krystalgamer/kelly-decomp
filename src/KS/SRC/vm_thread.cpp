// Matching decompilation blocks selected by generated build shims.

// 0x00356178 create_static_event_callback__9vm_threadRCQ29vm_thread10argument_tb
#include "KS/SRC/signals.h"
#include "KS/SRC/vm_thread.h"
__asm__(
    ".equ add_callback__6signalPQ213script_object8instance"
    "P13vm_executablePcb, 0x0034C548");

void vm_thread::create_static_event_callback(
    const argument_t &arg,
    bool one_shot)
{
    dstack.pop(arg.sfr->get_parms_stacksize());
    char *parms = dstack.get_SP();
    vm_signal_t value = dstack.pop_signal();
    value->add_callback(inst, arg.sfr, parms, one_shot);
    KELLY_DECOMP_COMPILER_BARRIER();
}


// 0x00356640 set_camera_priority__9vm_threadf
#include "KS/SRC/vm_thread.h"

void vm_thread::set_camera_priority(float value) {
    camera_priority = value;
}

// 0x00356200 remove_from_local_region__9vm_thread
#include "KS/SRC/region.h"
#include "KS/SRC/vm_thread.h"

__asm__(".equ remove_local_thread__6regionP9vm_thread, 0x002E80E8");
void remove_region_thread(region *local, vm_thread *thread)
    __asm__("remove_local_thread__6regionP9vm_thread");

void vm_thread::remove_from_local_region() {
    region *local = local_region;
    if (!local) {
        return;
    }
    void (*remove_thread)(region *, vm_thread *) = remove_region_thread;
    remove_thread(local, this);
}

// 0x00354658 set_suspended__9vm_threadb
#include "KS/SRC/vm_thread.h"

void vm_thread::set_suspended(bool value)
{
    if (!value || is_suspendable())
        set_flag(SUSPENDED, value);
}

// 0x003561C8 pop_PC__9vm_thread
#include "KS/SRC/vm_thread.h"

void vm_thread::pop_PC()
{
    if (!PC_stack.empty()) {
        PC = PC_stack.back();
        PC_stack.pop_back();
    } else {
        PC = 0;
    }
}

// 0x00354688 set_suspendable__9vm_threadb
#include "KS/SRC/vm_thread.h"
__asm__(".equ set_suspended__9vm_threadb, 0x00354658");
extern "C" void set_thread_suspended(vm_thread *thread, bool value)
    __asm__("set_suspended__9vm_threadb");

void vm_thread::set_suspendable(bool value)
{
    int result;
    if (value)
        result = flags | 2;
    else
        result = (int)flags & -3;
    flags = result;
    if (!value) {
        void (*suspend)(vm_thread *, bool) = set_thread_suspended;
        suspend(this, false);
    }
}

// 0x00356230 remove_from_local_character__9vm_thread
#include "KS/SRC/vm_thread.h"
extern "C" void debug_print(const char *format, ...) __asm__("debug_print__FPCce");
extern int once_flag;
extern const char stub_format[];
extern const char stub_name[];
__asm__(".equ debug_print__FPCce, 0x00120790");
__asm__(".equ once_flag, 0x0046DC58");
__asm__(".equ stub_format, 0x00503DD8");
__asm__(".equ stub_name, 0x00503E08");
void vm_thread::remove_from_local_character()
{
    if (once_flag) {
        debug_print(stub_format, stub_name);
        once_flag = 0;
    }
}

// 0x00355B28 call_script_library_function__9vm_threadRCQ29vm_thread10argument_tPCUs
struct vm_stack_layout{char pad[8];char*sp;};struct FunctionVtable{char pad[16];short adjust;short z;bool(*call)(void*,vm_stack_layout&,int);};struct function_layout{char pad[4];FunctionVtable*vtable;};struct argument_layout{function_layout*lfr;};struct vm_thread_call_layout{char pad0[12];vm_stack_layout dstack;char pad1[4];const unsigned short*PC;char pad2[12];int entry;};extern "C" bool call_script_function(vm_thread_call_layout*self,const argument_layout&arg,const unsigned short*oldPC)__asm__("call_script_library_function__9vm_threadRCQ29vm_thread10argument_tPCUs");bool call_script_function(vm_thread_call_layout*self,const argument_layout&arg,const unsigned short*oldPC){vm_stack_layout*stack=&self->dstack;char*oldSP=stack->sp;FunctionVtable*v=arg.lfr->vtable;if(v->call((char*)arg.lfr+v->adjust,*stack,self->entry)){self->entry=0;return true;}self->PC=oldPC;stack->sp=oldSP;self->entry=1;return false;}
