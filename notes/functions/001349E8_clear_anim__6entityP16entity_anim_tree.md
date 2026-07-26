# clear_anim__6entityP16entity_anim_tree

- Address: `0x001349E8`
- Size: `0xC0` (192 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.7551 | 51.0204 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released control flow and calls were correct, but the reduced animation
flag accessor normalized the valid bit to `0`/`1`, adding one instruction.

### Attempt 2 notes

Restoring the released `is_flagged`/`is_valid` inline chain preserved the raw
valid-bit test and matched exactly.

## Outcome

Matched the released animation-slot clear, detach, and lower-priority reattach loop.
