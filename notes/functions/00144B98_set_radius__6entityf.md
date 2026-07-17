# set_radius__6entityf

- Address: `0x00144B98`
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

The entity radius field is at offset `0x90`. Assigning the float emits the
target store in the return delay slot.

## Outcome

The entity radius field is stored at object offset 0x90. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
