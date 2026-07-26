# DrawPath__7MapDataf

- Address: `0x0018BA60`
- Size: `0xD0` (208 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/Map.cpp`
- Reference source: `KS/SRC/ks/Map.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.3269 | 76.9231 | `candidate.cpp` |
| 2 | different | 69.2308 | 57.6923 | `candidate.cpp` |
| 3 | different | 69.2308 | 57.6923 | `candidate.cpp` |
| 4 | different | 79.3269 | 76.9231 | `candidate.cpp` |
| 5 | different | 79.3269 | 76.9231 | `candidate.cpp` |

## Outcome

The released dashed-path loop reached 79.33%, but the floating-point conversion hazard nop and loop scheduling remained irreducible after five source-level attempts.
