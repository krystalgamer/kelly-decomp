

// Source implementation boundary.
// 0x001DE640 _GLOBAL_$I$ksGlobalTextArray
extern "C" void StaticInit(int initialize, int priority)
    __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit()
    __asm__("_GLOBAL_$I$ksGlobalTextArray");
__asm__(
    ".equ __static_initialization_and_destruction_0, "
    "0x001D7958");
void GlobalInit()
{
    StaticInit(1, 65535);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001DE660 _GLOBAL_$D$ksGlobalTextArray
extern "C" void StaticInit(int initialize, int priority)
    __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy()
    __asm__("_GLOBAL_$D$ksGlobalTextArray");
__asm__(
    ".equ __static_initialization_and_destruction_0, "
    "0x001D7958");
void GlobalDestroy()
{
    StaticInit(0, 65535);
    KELLY_DECOMP_COMPILER_BARRIER();
}
