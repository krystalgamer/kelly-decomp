# __11slc_manager

- Address: `0x0034F1D8`
- Size: `0xA4` (164 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.2195 | 9.7561 | `candidate.cpp` |
| 2 | different | 60.3659 | 34.1463 | `candidate.cpp` |
| 3 | different | 60.3659 | 43.9024 | `candidate.cpp` |
| 4 | different | 60.3659 | 43.9024 | `candidate.cpp` |
| 5 | different | 65.2439 | 51.2195 | `candidate.cpp` |

## Outcome

Five source-faithful list-constructor variants reproduced allocation but not generated initialization scheduling.
