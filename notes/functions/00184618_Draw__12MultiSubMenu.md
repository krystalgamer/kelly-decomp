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

Recovered the empty-base size adjustment so `difficulty` is at 0x88 and restored TextString's destructor and Update entries before Draw. The released base call and third-slot virtual dispatch then matched all 60 bytes.

## Outcome

The released MultiSubMenu draw matches exactly with the FEMenu base call, recovered difficulty offset, and authentic third-slot TextString Draw dispatch.
