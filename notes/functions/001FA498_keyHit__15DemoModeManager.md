# keyHit__15DemoModeManager

- Address: `0x001FA498`
- Size: `0xD0` (208 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/DemoMode.cpp`
- Reference source: `KS/SRC/ks/DemoMode.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 28.3654 | 21.1538 | `candidate.cpp` |
| 3 | different | 28.3654 | 21.1538 | `candidate.cpp` |
| 4 | different | 28.3654 | 21.1538 | `candidate.cpp` |
| 5 | different | 28.3654 | 21.1538 | `candidate.cpp` |

## Outcome

The released interruption behavior was recovered, but replay-state inlining and singleton/global register scheduling remained irreducible after five source-level attempts.
