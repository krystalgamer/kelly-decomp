# ifl_play__6entity

- Address: `0x00131070`
- Size: `0x74` (116 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.125 | 46.875 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released visual-representation animation-length call, warning path, and frame-info boost/unlock sequence. Preventing the warning and unlock tail calls matched on attempt 2.

## Outcome

Matched entity IFL playback
