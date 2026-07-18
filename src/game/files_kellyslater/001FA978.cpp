class DemoModeManager {
    char padding[0x10];
    bool inDemo;
public:
    bool inDemoMode();
};

bool DemoModeManager::inDemoMode() {
    return inDemo;
}
