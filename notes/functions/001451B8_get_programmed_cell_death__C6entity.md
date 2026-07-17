# get_programmed_cell_death__C6entity

- Address: `0x001451B8`
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

The programmed cell-death time is stored at entity offset `0x190`. Returning
that float matched the target load.

## Outcome

The programmed cell-death time is stored at entity offset 0x190. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
