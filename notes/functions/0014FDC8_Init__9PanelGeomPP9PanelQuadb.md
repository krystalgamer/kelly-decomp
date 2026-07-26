# Init__9PanelGeomPP9PanelQuadb

- Address: `0x0014FDC8`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.537 | 1.8519 | `candidate.cpp` |
| 2 | different | 54.1667 | 20.3704 | `candidate.cpp` |
| 3 | different | 64.3519 | 31.4815 | `candidate.cpp` |
| 4 | different | 60.1852 | 33.3333 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A flat matrix copy constructor emitted a sequential 188-byte copy instead of the shipped four-row vector copy.

### Attempt 2 notes

Recovered the exact vector4d-row matrix copy and target size, but self/child/vtable register scheduling differed.

### Attempt 3 notes

Pinned self and child through a constraint, improving matching but shifting both registers.

### Attempt 4 notes

Removed the explicit constraint and called through the child vtable directly; scheduling remained different.

### Attempt 5 notes

Allowed normal self/child allocation and added only a zero-instruction end constraint. The exact released body matched byte-exactly.

## Outcome

Matched the exact released child PanelGeom initialization using the source-faithful four-row vector matrix copy and a zero-instruction end constraint preserving the shipped schedule.
