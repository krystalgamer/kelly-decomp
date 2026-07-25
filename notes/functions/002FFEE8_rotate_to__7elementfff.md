# rotate_to__7elementfff

- Address: `0x002FFEE8`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.h`
- Reference source: `KS/SRC/element.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.1667 | 44.4444 | `candidate.cpp` |
| 2 | different | 81.25 | 72.2222 | `candidate.cpp` |
| 3 | different | 84.7222 | 80.5556 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released rotate-event allocation matched after fixing the event layout/callee symbol and pinning owner/event call arguments at their target scheduling boundaries.

## Outcome

The released function matched exactly.
