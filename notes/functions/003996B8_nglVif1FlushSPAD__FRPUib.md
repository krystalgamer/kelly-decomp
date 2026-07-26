# nglVif1FlushSPAD__FRPUib

- Address: `0x003996B8`
- Size: `0xE4` (228 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.7193 | 14.8148 | `candidate.cpp` |
| 2 | different | 64.0351 | 42.5926 | `candidate.cpp` |
| 3 | different | 37.7193 | 14.8148 | `candidate.cpp` |
| 4 | different | 75.0 | 56.8966 | `candidate.cpp` |
| 5 | different | 29.5833 | 10.0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released scratchpad flush, DMA registers, sync_l operations, polling, packet advancement, and exits are recovered, but QWC/global register allocation and one join branch leave the closest source four bytes long.
