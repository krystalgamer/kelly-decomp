# __tf11game_camera

- Address: `0x002FECF0`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc2`
- Debug source: `camera.h`
- Reference source: `KS/SRC/camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 2 | different | 16.9118 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 78.6765 | 73.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released game-camera RTTI helper after five source-level attempts; entity-to-camera-to-game-camera RTTI initialization was reconstructed, but generated high-address register materialization remained different.
