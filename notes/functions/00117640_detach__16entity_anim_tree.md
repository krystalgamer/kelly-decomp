# detach__16entity_anim_tree

- Address: `0x00117640`
- Size: `0x30` (48 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the released virtual `set_flag(ANIM_ATTACHED, false)` call with flag value 16.

## Outcome

The released `entity_anim_tree::detach` implementation matched exactly on the first attempt.
