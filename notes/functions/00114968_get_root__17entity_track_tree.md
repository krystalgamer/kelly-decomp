# get_root__17entity_track_tree

- Address: `0x00114968`
- Size: `0x8` (8 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

`root_nodes` begins at object offset `0x20`. Modeling the preceding layout as
padding made `return root_nodes` compile to the target address calculation.

## Outcome

The root_nodes array begins at object offset 0x20, so returning it compiles to the target addiu. The first layout candidate matched exactly and preserved the full ROM checksum.
