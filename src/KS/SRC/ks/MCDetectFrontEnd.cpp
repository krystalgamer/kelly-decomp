// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001A34F8)
// 0x001A34F8 OnTriangle__16MCDetectFrontEndi
class MCDetectFrontEnd {
public:
    void OnTriangle(int controller);
};

void MCDetectFrontEnd::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A36E8)
// 0x001A36E8 SetSystem__16MCDetectFrontEndP12FEMenuSystem
class FEMenuSystem;

class MCDetectFrontEnd {
    char padding[0x50];
    FEMenuSystem *system;

public:
    void SetSystem(FEMenuSystem *new_system);
};

void MCDetectFrontEnd::SetSystem(FEMenuSystem *new_system) {
    system = new_system;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A4260)
// 0x001A4260 drawMenu__16MCDetectFrontEnd
class MCDetectFrontEnd {
public:
    bool drawMenu();
};

bool MCDetectFrontEnd::drawMenu() {
    return true;
}
#endif
