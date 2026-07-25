# __12beach_objectP6entityRC7stringx

- Address: `0x001FAA10`
- Size: `0x94` (148 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.1351 | 78.3784 | `candidate.cpp` |
| 2 | different | 85.1351 | 78.3784 | `candidate.cpp` |
| 3 | different | 33.1081 | 10.8108 | `candidate.cpp` |
| 4 | different | 73.6486 | 67.5676 | `candidate.cpp` |
| 5 | different | 33.1081 | 10.8108 | `candidate.cpp` |

## Outcome

Five source-faithful beach_object constructor variants reproduced all field initialization and calls, but target-specific prologue and string-constructor delay-slot scheduling remained different.
