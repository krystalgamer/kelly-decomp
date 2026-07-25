# check_mem_init__t11linear_anim1Z8vector3d

- Address: `0x00119C98`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released static-allocation expansion matched on the first attempt by reusing the shared linear_anim template, vector3d, and static-memory declarations established for the quaternion specialization.

## Outcome

Matched vector linear-animation static-memory initialization using shared released template declarations.
