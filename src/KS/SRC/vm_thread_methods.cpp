// VM thread definitions extracted by generated one-function shims.

// 0x00361808 _GLOBAL_$I$_7pstring$output_index
extern "C" void StaticInit(int initialize, int priority)
    __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit()
    __asm__("_GLOBAL_$I$_7pstring$output_index");
__asm__(
    ".equ __static_initialization_and_destruction_0, "
    "0x0035E998");
void GlobalInit()
{
    StaticInit(1, 65535);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00361828 _GLOBAL_$D$_7pstring$output_index
extern "C" void StaticInit(int initialize, int priority)
    __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy()
    __asm__("_GLOBAL_$D$_7pstring$output_index");
__asm__(
    ".equ __static_initialization_and_destruction_0, "
    "0x0035E998");
void GlobalDestroy()
{
    StaticInit(0, 65535);
    KELLY_DECOMP_COMPILER_BARRIER();
}
