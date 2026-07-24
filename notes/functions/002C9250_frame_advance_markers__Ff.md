# frame_advance_markers__Ff

- Address: `0x002C9250`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.7083 | 60.0 | `candidate.cpp` |
| 2 | different | 41.6667 | 22.7273 | `candidate.cpp` |
| 3 | different | 56.25 | 38.0952 | `candidate.cpp` |
| 4 | different | 55.2083 | 36.3636 | `candidate.cpp` |
| 5 | different | 55.2083 | 36.3636 | `candidate.cpp` |

## Outcome

Released marker angle advancement retained an eight-byte floating loop/branch-likely scheduling difference after five source-level loop candidates.
