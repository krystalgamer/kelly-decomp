# nglMemAlloc__FUiUi

- Address: `0x00395D10`
- Size: `0x40` (64 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.375 | 43.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The released allocator callback behavior matches after expressing the equivalent branch orientation and the linker alias carry required by the isolated source shim.
