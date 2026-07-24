# __tf14hw_texture_mgr

- Address: `0x001E9640`
- Size: `0x78` (120 bytes)
- Object: `game/files_hwosps2`
- Debug source: `hwosps2/ps2_texturemgr.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_texturemgr.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred hw_texture_mgr RTTI generation after five source-level attempts; the released singleton inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
