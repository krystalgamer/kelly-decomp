# _$_8material

- Address: `0x003393F8`
- Size: `0xC4` (196 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.0 | 9.0909 | `candidate.cpp` |
| 2 | different | 35.9091 | 5.4545 | `candidate.cpp` |
| 3 | different | 35.9091 | 5.4545 | `candidate.cpp` |
| 4 | different | 35.9091 | 5.4545 | `candidate.cpp` |
| 5 | different | 35.9091 | 5.4545 | `candidate.cpp` |

## Outcome

Five attempts recovered the material member layout, but the compiler did not reproduce the shipped inline array-destructor register allocation.
