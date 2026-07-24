# TurnOn__20FEGraphicalMenuEntryb

- Address: `0x00157CD0`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact two PanelQuad pointers, vtable TurnOn slot, null checks, and bool preservation. It matched on attempt 1.

## Outcome

Matched graphical menu entry visibility
