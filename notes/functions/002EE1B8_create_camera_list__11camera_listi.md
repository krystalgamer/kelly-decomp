# create_camera_list__11camera_listi

- Address: `0x002EE1B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.8333 | 13.3333 | `candidate.cpp` |
| 2 | different | 32.5 | 13.3333 | `candidate.cpp` |
| 3 | different | 31.6667 | 6.6667 | `candidate.cpp` |
| 4 | different | 30.8333 | 13.3333 | `candidate.cpp` |
| 5 | different | 82.5 | 76.6667 | `candidate.cpp` |

## Outcome

Deferred camera_list::create_camera_list after five source-level attempts; the released count guard, dual pointer-array allocations, member offsets, and allocator metadata reproduced, but the target count-register and allocation scheduling did not.
