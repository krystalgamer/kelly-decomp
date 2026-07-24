# _nslEmitterForEach__FPFP10nslEmitterPv_iPv

- Address: `0x00390C98`
- Size: `0x84` (132 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.5455 | 3.0303 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 96.2121 | 84.8485 | `candidate.cpp` |
| 4 | different | 72.7273 | 69.697 | `candidate.cpp` |
| 5 | different | 96.2121 | 84.8485 | `candidate.cpp` |

## Outcome

Deferred the released NSL emitter iteration after five source-level attempts; the full 256-slot callback traversal was reproduced, but the compiler assigned the duplicated emitter pointers to opposite saved registers.
