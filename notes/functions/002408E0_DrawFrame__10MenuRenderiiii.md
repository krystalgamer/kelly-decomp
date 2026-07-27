# DrawFrame__10MenuRenderiiii

- Address: `0x002408E0`
- Size: `0xEC` (236 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.8136 | 71.1864 | `candidate-round1.cpp` |
| 2 | different | 90.678 | 89.8305 | `candidate-round2.cpp` |
| 3 | different | 90.678 | 89.8305 | `candidate-round3.cpp` |
| 4 | different | 90.678 | 89.8305 | `candidate-round4.cpp` |
| 5 | different | 36.4407 | 16.9492 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The exact frame drawing and all 59 instruction words are recovered at target size with a final tail-call barrier; only six independent prologue and first-rectangle setup instructions are reordered.
