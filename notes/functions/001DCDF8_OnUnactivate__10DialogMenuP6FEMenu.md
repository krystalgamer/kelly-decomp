# OnUnactivate__10DialogMenuP6FEMenu

- Address: `0x001DCDF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.h`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `native_frontend_header_probe_1.cpp` |
| 2 | different | 0.0 | 0.0 | `native_frontend_header_probe_2.cpp` |
| 3 | different | 0.0 | 0.0 | `native_frontend_header_probe_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
