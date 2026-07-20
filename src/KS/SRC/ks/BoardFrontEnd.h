// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDB00)
// 0x001DDB00 OnUp__13BoardFrontEndi
class BoardFrontEnd {
public:
    void OnUp(int arg0);
};

void BoardFrontEnd::OnUp(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDB08)
// 0x001DDB08 OnDown__13BoardFrontEndi
class BoardFrontEnd {
public:
    void OnDown(int arg0);
};

void BoardFrontEnd::OnDown(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDAD8)
// 0x001DDAD8 Select__13BoardFrontEndi
struct MenuVTable { char padding[0x158]; short adjustment; short padding2; void (*call)(void *self); };
class BoardFrontEnd { char padding[0x74]; MenuVTable *vtable; public: void Select(int entry); };
void BoardFrontEnd::Select(int entry) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif
