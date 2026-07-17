# get_colgeom_root_po__C6entity

- Address: `0x00145118`
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

`get_abs_po()` resolves through the pointer at entity offset `0x50`. Keeping
the inline helper preserves the released source expression and target load.

## Outcome

The collision-root transform delegates to inline get_abs_po(), which resolves through the pointer at entity offset 0x50. The source-faithful first candidate matched exactly and preserved the full ROM checksum.
