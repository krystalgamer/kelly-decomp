# get_node__C10path_graphRC8vector3d

- Address: `0x0034AF58`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 61.3636 | 42.4242 | `candidate.cpp` |
| 3 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 4 | different | 75.7576 | 45.4545 | `candidate.cpp` |
| 5 | different | 61.3636 | 42.4242 | `candidate.cpp` |

## Outcome

Deferred the released path-graph node lookup after five source-level attempts; vector traversal and exact three-component equality were reproduced, but the target retained an additional FPU hazard nop.
