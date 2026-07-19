# force_current_region__6entity

- Address: `0x00131DE0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method delegates to `_set_region_forced_status`; a compiler barrier preserves the non-tail call wrapper.

## Outcome

The released entity::force_current_region delegates to _set_region_forced_status. The first candidate matched exactly with a non-tail-call barrier and preserved the byte-identical integrated ROM.
