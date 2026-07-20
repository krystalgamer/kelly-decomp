# __14hw_texture_mgr

- Address: `0x001E2D20`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_texturemgr.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_texturemgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.3636 | 9.0909 | `candidate.cpp` |
| 2 | different | 72.7273 | 54.5455 | `candidate.cpp` |
| 3 | different | 36.3636 | 9.0909 | `candidate.cpp` |
| 4 | different | 45.4545 | 18.1818 | `candidate.cpp` |
| 5 | different | 31.25 | 8.3333 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The second source shape improved part of the layout or call form but retained a distinct target scheduling mismatch.

### Attempt 3 notes

The third source shape retained a distinct scheduling mismatch.

### Attempt 4 notes

The fourth source shape isolated the remaining target schedule but did not match it exactly.

### Attempt 5 notes

The fifth source shape over-constrained the constructor and expanded it to 48 bytes; the isolated compiler would not reproduce the target inlined-vector frame/register schedule within five attempts.

## Outcome

Five source shapes could not reproduce the target inlined-vector constructor frame/register schedule; best byte score was 72.7273%.
