# show__6widget

- Address: `0x0033DDD0`
- Size: `0xCC` (204 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1373 | 0.0 | `candidate.cpp` |
| 2 | different | 44.1176 | 29.4118 | `candidate.cpp` |
| 3 | different | 22.5962 | 7.6923 | `candidate.cpp` |
| 4 | different | 20.098 | 5.8824 | `candidate.cpp` |
| 5 | different | 20.098 | 5.8824 | `candidate.cpp` |

## Outcome

The released widget propagation logic was recovered, but old-STL iterator temporaries and loop control flow remained irreducible after five source-level attempts.
