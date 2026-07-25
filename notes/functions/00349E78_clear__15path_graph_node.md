# clear__15path_graph_node

- Address: `0x00349E78`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.5 | 5.0 | `candidate.cpp` |
| 2 | different | 33.7838 | 18.9189 | `candidate.cpp` |
| 3 | different | 20.5128 | 2.5641 | `candidate.cpp` |
| 4 | different | 20.5128 | 2.5641 | `candidate.cpp` |
| 5 | different | 17.9487 | 2.5641 | `candidate.cpp` |

## Outcome

Five released-source and target-shaped vector resize variants reproduced node clearing semantics, but vector temporary/register allocation and one call-setup instruction remained different.
