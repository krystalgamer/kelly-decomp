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
| 2 | matched | 100.0 | 100.0 | `size48-anim-core.cpp` |

### Attempt 1 notes

### Attempt 2 notes

The shared animation hierarchy preserves the inherited virtual
`set_flag(ANIM_ATTACHED, false)` dispatch.

## Outcome

The manual vtable layout was removed.
