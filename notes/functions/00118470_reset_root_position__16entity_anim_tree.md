# reset_root_position__16entity_anim_tree

- Address: `0x00118470`
- Size: `0xA0` (160 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.381 | 57.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Restored the released primary/blended root reset checks with exact static-vector and animation-control layouts; a no-op barrier preserves the non-tail second reset.

## Outcome

Matched animation root reset
