# _$_16MCDetectFrontEnd

- Address: `0x001A3620`
- Size: `0xC4` (196 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.3469 | 6.1224 | `candidate.cpp` |
| 2 | different | 17.3469 | 6.1224 | `candidate.cpp` |
| 3 | different | 17.3469 | 6.1224 | `candidate.cpp` |
| 4 | different | 18.8776 | 8.1633 | `candidate.cpp` |
| 5 | different | 18.8776 | 8.1633 | `candidate.cpp` |

## Outcome

Five source-level attempts could not reproduce the destructor because the shipped multiple-inheritance and member teardown flattening remained unavailable.
