# get_colgeom__C6entity

- Address: `0x00144E58`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The collision geometry pointer is stored at entity offset `0x148`. Returning
that member matched the target load in the delay slot.

## Outcome

The collision geometry pointer is stored at entity offset 0x148. The first layout candidate matched exactly and retained the byte-identical integrated ROM.
