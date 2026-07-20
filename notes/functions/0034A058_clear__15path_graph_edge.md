# clear__15path_graph_edge

- Address: `0x0034A058`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The minimal field order follows the released reset of nodes, flags, distance, weight modifiers, and bias.

## Outcome

The released `path_graph_edge::clear` implementation matched exactly.
