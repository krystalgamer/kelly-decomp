# _$_13MenuWaterDraw

- Address: `0x00313FE8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released empty derived destructor and Menu base cleanup. The source-faithful shared destructor form matched on attempt 2.

## Outcome

Matched water draw menu destructor
