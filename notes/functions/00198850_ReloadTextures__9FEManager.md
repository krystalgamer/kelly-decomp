# ReloadTextures__9FEManager

- Address: `0x00198850`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.7931 | 62.069 | `candidate.cpp` |
| 2 | different | 91.3793 | 65.5172 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the released font/map/helpbar reload sequence, exact far member offsets, and each virtual slot. Pinning the map receiver and function registers matched on attempt 3.

## Outcome

Matched frontend texture reloading
