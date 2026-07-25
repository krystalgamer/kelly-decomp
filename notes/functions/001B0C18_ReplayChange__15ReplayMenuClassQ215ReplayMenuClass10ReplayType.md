# ReplayChange__15ReplayMenuClassQ215ReplayMenuClass10ReplayType

- Address: `0x001B0C18`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.186 | 2.3256 | `candidate.cpp` |
| 2 | different | 18.75 | 2.5 | `candidate.cpp` |
| 3 | different | 18.75 | 2.5 | `candidate.cpp` |
| 4 | different | 33.5526 | 13.1579 | `candidate.cpp` |
| 5 | different | 38.1944 | 22.2222 | `candidate.cpp` |

## Outcome

Five source-level switch reconstructions could not reproduce the target non-tail fallthrough layout without retaining an extra saved global-address register; all variants remained nonmatching.
