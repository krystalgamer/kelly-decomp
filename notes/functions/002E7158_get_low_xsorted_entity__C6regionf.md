# get_low_xsorted_entity__C6regionf

- Address: `0x002E7158`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.0 | 40.0 | `candidate.cpp` |
| 2 | different | 40.0 | 20.0 | `candidate.cpp` |
| 3 | different | 46.0 | 36.0 | `candidate.cpp` |
| 4 | different | 12.931 | 0.0 | `candidate.cpp` |
| 5 | different | 16.3793 | 3.4483 | `candidate.cpp` |

## Outcome

Released low-X region lookup retained FPU conversion nop and branch/result-layout differences after five vector/control candidates.
