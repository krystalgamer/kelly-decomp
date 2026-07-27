# read_vector3d_param__C12beach_objectPPciPCcP8vector3d

- Address: `0x001FADF8`
- Size: `0xF0` (240 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.5 | 73.3333 | `candidate-1-exact-released.cpp` |
| 2 | different | 78.3333 | 73.3333 | `candidate-2.cpp` |
| 3 | different | 78.3333 | 73.3333 | `candidate-3.cpp` |
| 4 | different | 21.8254 | 1.5873 | `candidate-4.cpp` |
| 5 | different | 78.3333 | 73.3333 | `candidate-5.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact vector parser reaches target size and recovers the control flow, but isolated token advancement and float-assignment scheduling remain different.
