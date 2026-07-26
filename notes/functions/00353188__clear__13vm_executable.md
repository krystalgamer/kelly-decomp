# _clear__13vm_executable

- Address: `0x00353188`
- Size: `0xC4` (196 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_executable.cpp`
- Reference source: `KS/SRC/vm_executable.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.5102 | 73.4694 | `candidate.cpp` |
| 2 | different | 46.4286 | 30.6122 | `candidate.cpp` |
| 3 | different | 75.5102 | 73.4694 | `candidate.cpp` |
| 4 | different | 75.5102 | 73.4694 | `candidate.cpp` |
| 5 | different | 46.4286 | 38.7755 | `candidate.cpp` |

## Outcome

The released VM clear path reached 75.51% byte similarity, but one early temporary-address schedule shifted the second vector resize.
