# sprayed__14surfing_objectP6entity

- Address: `0x00209FF0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 5.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released body with the shared hierarchy; it reproduced the animation callback but lacked the target-era active-state write.

### Attempt 2 notes

Attempt 2 reused the shared target active-layout helper established by jumped_over and matched exactly.

## Outcome

The spray callback matches with reused shared target-era layout and released animation dispatch.
