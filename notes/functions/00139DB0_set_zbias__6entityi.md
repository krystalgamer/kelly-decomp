# set_zbias__6entityi

- Address: `0x00139DB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 14.2857 | `candidate.cpp` |
| 2 | different | 17.8571 | 14.2857 | `candidate.cpp` |
| 3 | different | 17.8571 | 14.2857 | `candidate.cpp` |

## Outcome

Three ordinary C++ expression orders all emit 24 bytes and omit the target FPU hazard nop; deferred because the released source contains no assembly.
