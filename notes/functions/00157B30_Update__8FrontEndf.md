# Update__8FrontEndf

- Address: `0x00157B30`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4375 | 93.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first layout placed the panel one byte late because the scratch empty base had size one.

### Attempt 2 notes

Modeling the embedded animation manager at offset zero restores the released layout and matches exactly.

## Outcome

The released panel and animation-manager updates match exactly with the original embedded layout.
