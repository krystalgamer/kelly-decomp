// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003499A0)
// 0x003499A0 _$_12EventManager
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void EventManagerDtor(void *self, int deleting) __asm__("_$_12EventManager");
void EventManagerDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00349B58)
// 0x00349B58 __14EventRecipient
class EventRecipient;
class EventManager { public: void RegisterRecipient(EventRecipient *recipient); };
extern EventManager g_eventManager;
extern const char EventRecipient_vtable[];
__asm__(".equ g_eventManager, 0x0046DA20");
__asm__(".equ EventRecipient_vtable, 0x00505078");
__asm__(".equ RegisterRecipient__12EventManagerP14EventRecipient, 0x003499C8");
class EventRecipient {
    const void *vtable;
public:
    EventRecipient();
};
EventRecipient::EventRecipient()
{
    vtable = EventRecipient_vtable;
    g_eventManager.RegisterRecipient(this);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00349B98)
// 0x00349B98 _$_14EventRecipient
struct EventRecipient { const void *vtable; };
struct EventManager;
extern EventManager g_eventManager;
extern const char recipient_vtable[];
extern "C" void unregister_recipient(
    EventManager *,EventRecipient *
) __asm__("UnregisterRecipient__12EventManagerP14EventRecipient");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
__asm__(".equ g_eventManager, 0x0046DA20");
__asm__(".equ recipient_vtable, 0x00505078");
__asm__(".equ UnregisterRecipient__12EventManagerP14EventRecipient, 0x00349A28");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void destroy_recipient(
    EventRecipient *self,int flags
) __asm__("_$_14EventRecipient");
void destroy_recipient(EventRecipient *self,int flags) {
    self->vtable=recipient_vtable;
    unregister_recipient(&g_eventManager,self);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
