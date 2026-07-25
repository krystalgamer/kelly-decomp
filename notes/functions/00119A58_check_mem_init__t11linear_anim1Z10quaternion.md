# check_mem_init__t11linear_anim1Z10quaternion

- Address: `0x00119A58`
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

The exact released static-allocation expansion matched on the first attempt after extending the existing shared linear_anim template with the faithful static-memory members and reusing the shared quaternion and allocator declarations.

## Outcome

Matched quaternion linear-animation static-memory initialization using shared released template declarations.
