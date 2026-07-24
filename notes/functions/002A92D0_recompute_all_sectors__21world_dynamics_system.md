# recompute_all_sectors__21world_dynamics_system

- Address: `0x002A92D0`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2941 | 17.6471 | `candidate.cpp` |
| 2 | different | 88.2353 | 73.5294 | `candidate.cpp` |
| 3 | different | 72.0588 | 55.8824 | `candidate.cpp` |
| 4 | different | 76.4706 | 67.6471 | `candidate.cpp` |
| 5 | different | 81.6176 | 73.5294 | `candidate.cpp` |

## Outcome

Deferred the released all-sector recomputation after five source-level attempts; entity iteration, hash invalidation, terrain lookup, and virtual compute-sector calls were reconstructed, but vector-end/prologue scheduling remained different.
