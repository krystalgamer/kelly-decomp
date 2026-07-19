// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE198)
// 0x001DE198 Pick__13PAL60FrontEndi
class PAL60FrontEnd {
public:
    void Pick(int arg0);
};

void PAL60FrontEnd::Pick(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE1A0)
// 0x001DE1A0 OnTriangle__13PAL60FrontEndi
class PAL60FrontEnd {
public:
    void OnTriangle(int arg0);
};

void PAL60FrontEnd::OnTriangle(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE1A8)
// 0x001DE1A8 SetSystem__13PAL60FrontEndP12FEMenuSystem
class FEMenuSystem;

class PAL60FrontEnd {
    char padding[0x50];
    FEMenuSystem* system;
public:
    void SetSystem(FEMenuSystem* value);
};

void PAL60FrontEnd::SetSystem(FEMenuSystem* value) {
    system = value;
}
#endif
