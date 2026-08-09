# Draw__12MultiSubMenu

- Address: `0x00184618`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released base draw followed by virtual difficulty text draw. The base call and dispatch shape matched, but the empty standalone FEMenu base shifted `difficulty` to 0x8c and declaring only Draw placed it at the first vtable slot rather than the target third slot.

### Attempt 2 notes

The shared menu and `TextString` hierarchies preserve the base draw and
third-slot difficulty-text dispatch.

## Outcome

The local menu, text, and draw-layout declarations were removed.
