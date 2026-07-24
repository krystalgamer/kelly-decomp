# get_high_xsorted_entity__C6regionf

- Address: `0x002E71B8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.913 | 39.1304 | `candidate.cpp` |
| 2 | different | 48.913 | 39.1304 | `candidate.cpp` |
| 3 | different | 45.8333 | 37.5 | `candidate.cpp` |
| 4 | different | 46.875 | 37.5 | `candidate.cpp` |
| 5 | different | 46.875 | 37.5 | `candidate.cpp` |

## Outcome

Released high-X region lookup retained an FPU-conversion scheduling nop and merged out-of-range return mismatch after five vector/helper/control-flow candidates.
