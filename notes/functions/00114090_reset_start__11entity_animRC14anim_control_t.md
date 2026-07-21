# reset_start__11entity_animRC14anim_control_t

- Address: `0x00114090`
- Size: `0x44` (68 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.7647 | 0.0 | `candidate.cpp` |
| 2 | different | 88.2353 | 88.2353 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body with the available class layout; the simplified `anim::is_flagged` declaration selected a different bit-test idiom and the final call was tail-called.

### Attempt 2 notes

Added a narrow post-call barrier for the demonstrated tail call, but the simplified direct validity test still emitted shift-and-mask rather than the released helper's mask-and-boolean conversion.

### Attempt 3 notes

Restored the released `is_flagged(anim_flags_t)` helper shape and retained the narrow tail-call barrier; this reproduced the target exactly.

## Outcome

The released reset-start behavior matches after restoring the exact animation flag helper shape and using a narrow compiler barrier to prevent the demonstrated final tail call.
