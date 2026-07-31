# fill__H2ZP16ai_polypath_nodeZ16ai_polypath_node_X01X01RCX11_v

- Address: `0x0010FA58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released generated fill loop is preserved semantically. Reviewed inline assembly removes the isolated compiler's two extra post-copy nops and reproduces the original backedge.

## Outcome

Matched generated polygon-path node fill loop.
