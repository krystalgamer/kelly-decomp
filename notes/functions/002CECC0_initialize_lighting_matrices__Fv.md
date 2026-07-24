# initialize_lighting_matrices__Fv

- Address: `0x002CECC0`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lightmgr.cpp`
- Reference source: `KS/SRC/lightmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.8148 | 52.0 | `candidate.cpp` |
| 2 | different | 90.0 | 84.0 | `candidate.cpp` |
| 3 | different | 42.5926 | 33.3333 | `candidate.cpp` |
| 4 | different | 89.0 | 80.0 | `candidate.cpp` |
| 5 | different | 89.0 | 80.0 | `candidate.cpp` |

## Outcome

Released lighting matrix allocation and initialization reached 21/25 instructions, but loop scheduling of the indexed store and branch delay resisted five source candidates.
