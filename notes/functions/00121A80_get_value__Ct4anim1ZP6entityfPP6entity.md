# get_value__Ct4anim1ZP6entityfPP6entity

- Address: `0x00121A80`
- Size: `0x8` (8 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The arbitrary-time `anim<entity *>` getter is also empty. The specialized
const method matched its float and pointer-to-pointer signature immediately.

## Outcome

The arbitrary-time anim<entity *> getter is another empty virtual specialization. Its first candidate matched exactly and preserved the full target ROM checksum.
