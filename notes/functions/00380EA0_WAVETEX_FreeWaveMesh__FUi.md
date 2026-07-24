# WAVETEX_FreeWaveMesh__FUi

- Address: `0x00380EA0`
- Size: `0x70` (112 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.6071 | 57.1429 | `candidate.cpp` |
| 2 | different | 61.6071 | 57.1429 | `candidate.cpp` |
| 3 | different | 61.6071 | 57.1429 | `candidate.cpp` |
| 4 | different | 16.4474 | 0.0 | `candidate.cpp` |
| 5 | different | 24.1935 | 3.2258 | `candidate.cpp` |

## Outcome

Deferred wave mesh freeing after five source-level attempts; the released two-mesh destruction loop and mesh-count decrement reproduced except for a target-only integer branch hazard nop.
