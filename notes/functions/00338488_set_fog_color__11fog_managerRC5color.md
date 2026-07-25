# set_fog_color__11fog_managerRC5color

- Address: `0x00338488`
- Size: `0x90` (144 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/fogmgr.cpp`
- Reference source: `KS/SRC/fogmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 0.0 | `candidate.cpp` |
| 2 | different | 24.3243 | 10.8108 | `candidate.cpp` |
| 3 | different | 29.1667 | 16.6667 | `candidate.cpp` |
| 4 | different | 34.4595 | 16.2162 | `candidate.cpp` |
| 5 | different | 34.0278 | 13.8889 | `candidate.cpp` |

## Outcome

Five source-level fog updates could not reproduce the target scalar color-copy schedule and repeated singleton reload register allocation while retaining a non-tail rasterizer call.
