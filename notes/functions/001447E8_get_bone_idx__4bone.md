# get_bone_idx__4bone

- Address: `0x001447E8`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/bone.h`
- Reference source: `KS/SRC/bone.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base `bone` implementation uses `-1` as the no-index sentinel. Returning
that constant matched in the branch delay slot.

## Outcome

The base bone implementation returns -1 as its no-index sentinel. The first candidate matched exactly and preserved the byte-identical integrated ROM.
