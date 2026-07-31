# fill__H2ZPQ211render_data11entity_infoZQ211render_data11entity_info_X01X01RCX11_v

- Address: `0x0010F030`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 2 | different | 36.5385 | 15.3846 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released generated fill loop is preserved semantically. Reviewed inline assembly is required only to remove the isolated compiler's two extra post-copy scheduling nops and reproduce the original template backedge.

## Outcome

Matched generated render-data entity fill loop.
