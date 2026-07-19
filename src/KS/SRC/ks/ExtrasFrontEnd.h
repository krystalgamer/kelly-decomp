// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDE88)
// 0x001DDE88 Select__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void Select(int arg0);
};

void CreditsFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDE90)
// 0x001DDE90 OnUp__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x170];
    bool up_pressed;
public:
    void OnUp(int controller);
};

void CreditsFrontEnd::OnUp(int controller) {
    up_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEA0)
// 0x001DDEA0 OnDown__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x174];
    bool down_pressed;
public:
    void OnDown(int controller);
};

void CreditsFrontEnd::OnDown(int controller) {
    down_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB0)
// 0x001DDEB0 OnRight__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnRight(int arg0);
};

void CreditsFrontEnd::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB8)
// 0x001DDEB8 OnLeft__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnLeft(int arg0);
};

void CreditsFrontEnd::OnLeft(int arg0) {
}
#endif
