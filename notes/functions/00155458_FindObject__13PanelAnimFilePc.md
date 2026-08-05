# FindObject__13PanelAnimFilePc

- Address: `0x00155458`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.5 | 50.0 | `size40-frontend-core.cpp` |
| 2 | different | 62.5 | 50.0 | `size40-frontend-variants-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `size40-frontend-variants-3.cpp` |

### Attempt 1 notes

The shared animation declarations use a local result initialized to null, reproducing the released single return path without a barrier.

## Outcome

The released `PanelAnimFile::FindObject` wrapper matched exactly.
