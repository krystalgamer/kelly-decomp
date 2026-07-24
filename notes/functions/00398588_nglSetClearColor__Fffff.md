# nglSetClearColor__Fffff

- Address: `0x00398588`
- Size: `0x68` (104 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.3846 | 7.6923 | `candidate.cpp` |
| 2 | different | 16.3462 | 7.6923 | `candidate.cpp` |
| 3 | different | 11.5385 | 7.6923 | `candidate.cpp` |
| 4 | different | 11.5385 | 7.6923 | `candidate.cpp` |
| 5 | different | 15.3846 | 11.5385 | `candidate.cpp` |

## Outcome

Deferred NGL clear color setter after five source-faithful candidates; the released inline conversion retained a whole-translation-unit FPU hazard nop
