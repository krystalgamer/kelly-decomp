# Activate__9MenuEntry

- Address: `0x0023EED8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.8696 | 17.3913 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released Activate body and helper definitions. Reconstructing GetFlag/IsVisible/IsEnabled/IsActive/SetFlag separately preserved short-circuit codegen and matched on attempt 2.

## Outcome

Matched menu entry activation
