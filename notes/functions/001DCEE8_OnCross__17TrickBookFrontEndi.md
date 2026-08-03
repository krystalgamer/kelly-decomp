# OnCross__17TrickBookFrontEndi

- Address: `0x001DCEE8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.h`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `native_frontend_header_probe_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `native_frontend_header_probe_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `native_frontend_header_probe_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
