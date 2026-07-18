# reset_targets__20force_control_system

- Address: `0x003003A8`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/fcs.h`
- Reference source: `KS/SRC/fcs.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base method contains only an assertion, removed in the final build.

## Outcome

The final-build empty `force_control_system::reset_targets` hook matched exactly on the first attempt.
