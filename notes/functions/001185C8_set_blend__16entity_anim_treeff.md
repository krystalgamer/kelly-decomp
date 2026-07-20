# set_blend__16entity_anim_treeff

- Address: `0x001185C8`
- Size: `0x28` (40 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.0 | 30.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The faithful arithmetic omitted the target EE FPU hazard nop between `mtc1` and `div.s`.

### Attempt 2 notes

A minimal layout preserves the blend fields at 0x44 and 0x74 and the released normalization.

## Outcome

The released `entity_anim_tree::set_blend` implementation matched exactly.
