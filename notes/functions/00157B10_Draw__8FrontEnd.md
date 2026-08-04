# Draw__8FrontEnd

- Address: `0x00157B10`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-frontend-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-frontend-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-frontend-probes-3.cpp` |

## Outcome

All three canonical forms adjust to `FrontEnd::panel` and tail-call `PanelFile::Draw` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
