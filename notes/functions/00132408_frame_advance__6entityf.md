# frame_advance__6entityf

- Address: `0x00132408`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.1667 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released sound-interface guards and virtual advance call plus hero-id lighting update. Preventing the final lighting-update tail call matched on attempt 2.

## Outcome

Matched entity frame advance
