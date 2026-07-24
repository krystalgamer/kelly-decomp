# WAVETEX_ClearShadows__Fv

- Address: `0x0037F930`
- Size: `0x7C` (124 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.8065 | 41.9355 | `candidate.cpp` |
| 2 | different | 43.5484 | 29.0323 | `candidate.cpp` |
| 3 | different | 43.5484 | 29.0323 | `candidate.cpp` |
| 4 | different | 43.5484 | 29.0323 | `candidate.cpp` |
| 5 | different | 43.5484 | 29.0323 | `candidate.cpp` |

## Outcome

Deferred the released wave-shadow clear after five source-level attempts; the exact calls and object accesses remained blocked by a target-only floating-point hazard nop.
