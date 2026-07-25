# make_instance__17beam_effect_color

- Address: `0x002B8340`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.2381 | 26.1905 | `candidate.cpp` |
| 2 | different | 73.125 | 35.0 | `candidate.cpp` |
| 3 | different | 76.25 | 45.0 | `candidate.cpp` |
| 4 | different | 39.375 | 22.5 | `candidate.cpp` |
| 5 | different | 75.625 | 32.5 | `candidate.cpp` |

## Outcome

Five released-source allocation and copy variants reproduced all fields at exact size, but constructor register scheduling did not match.
