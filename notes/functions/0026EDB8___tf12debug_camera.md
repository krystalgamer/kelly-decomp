# __tf12debug_camera

- Address: `0x0026EDB8`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Compiler-generated debug_camera RTTI uses the immutable game_camera base and exact lazy __rtti_si initialization.
