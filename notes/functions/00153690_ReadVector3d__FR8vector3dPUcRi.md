# ReadVector3d__FR8vector3dPUcRi

- Address: `0x00153690`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 70.1923 | 53.8462 | `candidate.cpp` |
| 4 | different | 73.0769 | 69.2308 | `candidate.cpp` |
| 5 | different | 73.0769 | 69.2308 | `candidate.cpp` |

## Outcome

Released vector reader call sequence was reconstructed, but five candidates could not reproduce the exact saved-register and call argument scheduling.
