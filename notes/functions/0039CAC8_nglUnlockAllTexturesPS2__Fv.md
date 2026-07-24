# nglUnlockAllTexturesPS2__Fv

- Address: `0x0039CAC8`
- Size: `0x70` (112 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.8333 | 33.3333 | `candidate.cpp` |
| 2 | different | 40.0 | 23.3333 | `candidate.cpp` |
| 3 | different | 40.0 | 10.0 | `candidate.cpp` |
| 4 | different | 40.0 | 10.0 | `candidate.cpp` |
| 5 | different | 40.8333 | 33.3333 | `candidate.cpp` |

## Outcome

Deferred PS2 texture unlocking after five source-level attempts; the released bank traversal and flag semantics reproduced, but the compiler synthesized the 64-bit Locked-bit mask differently from the target.
