# rotate_to__6widgetfff

- Address: `0x0033EE18`
- Size: `0x90` (144 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.1667 | 44.4444 | `candidate.cpp` |
| 2 | different | 81.25 | 72.2222 | `candidate.cpp` |
| 3 | different | 84.7222 | 80.5556 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released widget rotate-event allocation matched after fixing layout/callee symbols and pinning owner/event call arguments at target schedule points.

## Outcome

The released widget rotate-event creation matched exactly on the fourth attempt.
