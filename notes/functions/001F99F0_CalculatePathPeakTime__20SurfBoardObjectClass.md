# CalculatePathPeakTime__20SurfBoardObjectClass

- Address: `0x001F99F0`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 76.1905 | `candidate.cpp` |
| 2 | different | 80.9524 | 76.1905 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released CalculatePathPeakTime body, rigid-body mass/linear-momentum layout, air_gravity global, and AIR_GRAV_MOD constant. Used an equivalent no_gravity label to reproduce the released floating branch layout.

## Outcome

Matched released SurfBoardObjectClass::CalculatePathPeakTime body
