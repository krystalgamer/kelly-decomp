# update_surface_point__5trailP15surface_point_t

- Address: `0x00364478`
- Size: `0x78` (120 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.1667 | 73.3333 | `candidate.cpp` |
| 2 | different | 81.6667 | 73.3333 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 81.6667 | 73.3333 | `candidate.cpp` |
| 5 | different | 81.6667 | 73.3333 | `candidate.cpp` |

## Outcome

Deferred trail::update_surface_point after five source-level attempts; the released wave flags, floater argument layout, field offsets, zero initialization, and tracking call reproduced, but the target prologue and argument scheduling did not.
