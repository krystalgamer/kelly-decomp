# triggered__13point_triggerP6entity

- Address: `0x0028DE58`
- Size: `0x84` (132 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.8788 | 0.0 | `candidate.cpp` |
| 2 | different | 22.7273 | 3.0303 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released point-trigger test matched after inlining the vector subtraction temporary and assignment exactly as declared.

## Outcome

The released point-trigger radius test matched exactly on the third attempt.
