# shrink_memory_footprint__8vr_pmesh

- Address: `0x002D6528`
- Size: `0xE8` (232 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.9138 | 0.0 | `candidate-round1.cpp` |
| 2 | different | 93.5345 | 32.7273 | `candidate-round2.cpp` |
| 3 | different | 93.5345 | 32.7273 | `candidate-round3.cpp` |
| 4 | different | 93.5345 | 32.7273 | `candidate-round4.cpp` |
| 5 | different | 93.5345 | 32.7273 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released pmesh shrink path reaches exact size and matches every allocator/free/delete instruction outside the trivial vert destruction loop; GCC emits a normal branch where the target uses branch-likely iterator scheduling.
