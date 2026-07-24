# activate_motion_trail__6entityiG7color32iiRC8vector3d

- Address: `0x00133458`
- Size: `0x68` (104 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.8077 | 73.0769 | `candidate.cpp` |
| 2 | different | 78.7037 | 66.6667 | `candidate.cpp` |
| 3 | different | 73.0769 | 65.3846 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact entity/trail-info layouts, ABI arguments, flag, scalar fields, and motion-trail head copy. Fixed final pointer registers matched on attempt 4.

## Outcome

Matched motion trail activation
