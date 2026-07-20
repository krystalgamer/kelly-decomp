# Reload__9PanelGeom

- Address: `0x0014FC78`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released child null guard and virtual Reload dispatch matched exactly with `children` at offset 0x6c, the child vtable at 0x78, and Reload at virtual slot 0x24.

## Outcome

The released panel-geometry reload propagation matched exactly on the first attempt.
