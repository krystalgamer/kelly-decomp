# Reload__11PanelObject

- Address: `0x001516A8`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.2917 | 66.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released loops and calls were correct, but the shared matrix declaration
under-aligned `PanelGeom`, shifting the derived fields by four bytes, and the
base reload tail-called.

### Attempt 2 notes

Restoring the released matrix alignment and adding a non-emitting barrier
after the base reload matched the function exactly.

## Outcome

Matched panel object texture and batch reload with source-faithful panel layouts.
