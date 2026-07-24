# add_path_graph__21world_dynamics_systemP10path_graph

- Address: `0x002A4B30`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 40.625 | `candidate.cpp` |
| 2 | different | 71.875 | 56.25 | `candidate.cpp` |
| 3 | different | 59.0909 | 39.3939 | `candidate.cpp` |
| 4 | different | 59.0909 | 39.3939 | `candidate.cpp` |
| 5 | different | 50.0 | 40.625 | `candidate.cpp` |

## Outcome

Deferred the released path-graph insertion after five source-level attempts; string lookup matched, but the old vector push-back reference temporary and inline layout could not be reproduced.
