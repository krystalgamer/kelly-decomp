# add_edge__15path_graph_nodeP15path_graph_edgeb

- Address: `0x00349F10`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.2903 | 22.5806 | `candidate.cpp` |
| 2 | different | 16.3793 | 3.4483 | `candidate.cpp` |
| 3 | different | 27.5 | 6.6667 | `candidate.cpp` |
| 4 | different | 26.6129 | 6.4516 | `candidate.cpp` |
| 5 | different | 36.2903 | 22.5806 | `candidate.cpp` |

## Outcome

Deferred path-graph edge insertion after five source-level attempts; the released vector push and optional sort reproduced, but the target vector push branch-likely scheduling did not.
