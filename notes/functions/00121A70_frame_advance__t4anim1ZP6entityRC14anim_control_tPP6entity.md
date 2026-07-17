# frame_advance__t4anim1ZP6entityRC14anim_control_tPP6entity

- Address: `0x00121A70`
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

An explicit specialization for `anim<entity *>` preserves the pointer-to-
pointer destination signature and emits the empty virtual method exactly.

## Outcome

The base anim<entity *> frame_advance specialization is empty. The explicit template specialization matched on the first attempt and preserved the exact integrated ROM checksum.
