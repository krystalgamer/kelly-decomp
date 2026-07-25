# __11ett_manager

- Address: `0x00114E98`
- Size: `0xA0` (160 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 2.5 | `candidate.cpp` |
| 2 | different | 51.25 | 32.5 | `candidate.cpp` |
| 3 | different | 36.9048 | 11.9048 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 48.75 | 25.0 | `candidate.cpp` |

## Outcome

Five released-source and map-layout variants reproduced ETT bookkeeping and tree initialization, but GCC2 map constructor allocation and header scheduling did not match.
