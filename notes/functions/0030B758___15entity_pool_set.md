# __15entity_pool_set

- Address: `0x0030B758`
- Size: `0xD0` (208 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 4.3269 | 0.0 | `candidate.cpp` |
| 2 | different | 4.3269 | 0.0 | `candidate.cpp` |
| 3 | different | 4.3269 | 0.0 | `candidate.cpp` |
| 4 | different | 4.3269 | 0.0 | `candidate.cpp` |
| 5 | different | 4.3269 | 0.0 | `candidate.cpp` |

## Outcome

The released empty-container construction was recovered, but old-STL tree and list sentinel allocation remained irreducible after five source-level attempts.
