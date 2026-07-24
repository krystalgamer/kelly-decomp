# __14TimeAttackMode

- Address: `0x00285FF0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 6.25 | `candidate.cpp` |
| 2 | different | 98.913 | 95.6522 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released constructor, 24-byte PLAYER layout, TIME_INITIAL global, and trailing fields. A single-pointer signed loop matched on attempt 3.

## Outcome

Matched time attack mode constructor
