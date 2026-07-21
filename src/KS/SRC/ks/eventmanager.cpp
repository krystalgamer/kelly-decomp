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
