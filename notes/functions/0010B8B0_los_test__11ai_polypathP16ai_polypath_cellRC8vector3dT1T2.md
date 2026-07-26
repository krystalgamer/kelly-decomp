# los_test__11ai_polypathP16ai_polypath_cellRC8vector3dT1T2

- Address: `0x0010B8B0`
- Size: `0xD0` (208 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.4151 | 37.7358 | `candidate.cpp` |
| 2 | different | 54.2453 | 41.5094 | `candidate.cpp` |
| 3 | different | 59.6154 | 46.1538 | `candidate.cpp` |
| 4 | different | 59.6154 | 46.1538 | `candidate.cpp` |
| 5 | different | 59.6154 | 46.1538 | `candidate.cpp` |

## Outcome

The released line-of-sight traversal was recovered, but line-constructor temporaries and next-cell register scheduling remained irreducible after five source-level attempts.
