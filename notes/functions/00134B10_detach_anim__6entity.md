# detach_anim__6entity

- Address: `0x00134B10`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

`current_anim` is stored at entity offset `0x110`. Clearing that pointer
compiles to the target store in the return delay slot.

## Outcome

The entity detach_anim method clears current_anim at object offset 0x110. The first layout candidate matched exactly and retained the byte-identical full ROM.
