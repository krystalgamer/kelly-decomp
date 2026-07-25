#ifndef KELLY_DECOMP_NSL_PS2_SHARED_H
#define KELLY_DECOMP_NSL_PS2_SHARED_H

typedef unsigned int nlUint32;

#define NSL_NUM_SOURCES 512
#define NSL_NUM_EMITTERS 256
#define GAS_RPC_REMOVE_SOURCE 0x1005

enum _nslClearBehaviour
{
    NSL_CLEAR_INIT,
    NSL_CLEAR_RESET,
    NSL_CLEAR_FREE
};

struct nslSystem
{
    char data_to_initialized[0x15850];
    int initialized;
    char data_to_on[0x2C];
    bool on;
};

extern nslSystem nsl;
extern const char nsl_not_initialized[];
extern const char nsl_empty_string[];

void nslFatal(const char *format, ...);
void nslReleaseAllSounds();
void _nslClearEmitterSlot(
    nlUint32 slot,
    bool reset_id,
    _nslClearBehaviour clear_style
);
int nslPs2GasRpc(
    int command,
    const char *string,
    int arg1,
    int arg2,
    int arg3,
    int arg4
);

inline __attribute__((always_inline)) void _nslInitialized()
{
    if (!(nsl.initialized == 1))
        nslFatal(nsl_not_initialized);
}

__asm__(".equ nsl, 0x0049B5F0");
__asm__(".equ nsl_not_initialized, 0x0051BDC8");
__asm__(".equ nsl_empty_string, 0x0051BDF8");
__asm__(".equ nslFatal__FPCce, 0x00391420");
__asm__(".equ nslReleaseAllSounds__Fv, 0x0038D3D0");
__asm__(".equ _nslClearEmitterSlot__FUib18_nslClearBehaviour, 0x003910A0");
__asm__(".equ nslPs2GasRpc__FiPCciiii, 0x00391AC0");

#endif
