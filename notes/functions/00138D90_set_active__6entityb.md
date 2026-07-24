# set_active__6entityb

- Address: `0x00138D90`
- Size: `0x6C` (108 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the active flag bit, no-op guard, controller presence check, and set_control_active virtual slot. It matched on attempt 1.

## Outcome

Matched entity active state update
