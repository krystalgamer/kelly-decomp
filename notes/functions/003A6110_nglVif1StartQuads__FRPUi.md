# nglVif1StartQuads__FRPUi

- Address: `0x003A6110`
- Size: `0x40` (64 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4375 | 93.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The released quad setup uses the shared DMA-tag pointer and flush declaration,
including the isolated-shim carry alias.
