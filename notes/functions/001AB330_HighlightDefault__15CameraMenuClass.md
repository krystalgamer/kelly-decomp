# HighlightDefault__15CameraMenuClass

- Address: `0x001AB330`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 55.2083 | 41.6667 | `candidate.cpp` |
| 3 | different | 59.8958 | 43.75 | `candidate.cpp` |
| 4 | different | 61.4583 | 50.0 | `candidate.cpp` |
| 5 | different | 52.0833 | 41.6667 | `candidate.cpp` |

### Attempt 4 notes

The corrected source-faithful camera member offsets recovered the main
comparison logic, but EE GCC reused the first player-camera load while the
target reloaded it before the beach-camera comparison.

### Attempt 5 notes

A narrow memory barrier forced broader register and branch rescheduling
instead of only the required camera reload.

## Outcome

The released camera default highlight remained one player-camera reload short after five source-level layout and barrier variants.
