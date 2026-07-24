# Init__9PanelFileb

- Address: `0x00153050`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 74.0 | 68.0 | `candidate.cpp` |
| 2 | different | 42.5926 | 29.6296 | `candidate.cpp` |
| 3 | different | 45.1923 | 30.7692 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact PanelFile/PanelGeom fields, next link, vtable slot, and floating argument. Preserving self while allowing loop scheduling matched on attempt 4.

## Outcome

Matched panel file initialization
