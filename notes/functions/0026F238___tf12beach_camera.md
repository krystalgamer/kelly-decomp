# __tf12beach_camera

- Address: `0x0026F238`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 2 | different | 16.1765 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 78.6765 | 73.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released beach-camera RTTI helper after five source-level attempts; the game-camera-to-beach-camera RTTI initialization chain was reconstructed, but high-address register materialization remained different.
