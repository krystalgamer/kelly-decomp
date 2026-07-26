# nglProjectPoint__FR9nglVectorT0

- Address: `0x00399458`
- Size: `0xC8` (200 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.5 | 30.0 | `candidate.cpp` |
| 2 | different | 36.0 | 30.0 | `candidate.cpp` |
| 3 | different | 36.0 | 30.0 | `candidate.cpp` |
| 4 | different | 29.5 | 22.0 | `candidate.cpp` |
| 5 | different | 33.5 | 26.0 | `candidate.cpp` |

## Outcome

Five attempts recovered point projection semantics, but FP pipeline nops and call scheduling remained different.
