# WATER_Init__Fv

- Address: `0x0036E800`
- Size: `0x88` (136 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.2353 | 79.4118 | `candidate.cpp` |
| 2 | different | 94.1176 | 94.1176 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released water initialization after five source-level attempts; wave startup, three mesh initializations, IDs, callbacks, and init guard were reconstructed, but two seam-to-far setup instructions remained differently scheduled.
