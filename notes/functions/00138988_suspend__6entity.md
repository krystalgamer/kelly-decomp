# suspend__6entity

- Address: `0x00138988`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.8333 | 73.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released suspended/AI/controller fields, push-disable behavior, active-status capture, and controller virtual deactivation slot. Correcting the no-argument target virtual call matched on attempt 2.

## Outcome

Matched entity suspension
