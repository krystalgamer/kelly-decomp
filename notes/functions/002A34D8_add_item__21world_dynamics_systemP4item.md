# add_item__21world_dynamics_systemP4item

- Address: `0x002A34D8`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.7037 | 7.4074 | `candidate.cpp` |
| 2 | different | 37.963 | 22.2222 | `candidate.cpp` |
| 3 | different | 30.3571 | 21.4286 | `candidate.cpp` |
| 4 | different | 36.5385 | 19.2308 | `candidate.cpp` |
| 5 | different | 30.3571 | 21.4286 | `candidate.cpp` |

## Outcome

Released item-vector push and frame_done call were reconstructed across five candidates, but old STL branch-likely/register scheduling did not match without assembly.
