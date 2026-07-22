# SetTutorialSection__18IGOTutorialManageri

- Address: `0x001596D0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6842 | 94.7368 | `candidate.cpp` |
| 2 | different | 96.0526 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and existing shared tutorial manager declaration matched all but the high half used to address Tutorial_Step_Num; a direct absolute equate bypassed the linker's signed-low adjustment.

### Attempt 2 notes

Leaving Tutorial_Step_Num as a normal external produced the correct instruction semantics, but isolated scoring could not resolve three relocation bytes.

### Attempt 3 notes

Using the assembler's adjusted absolute representation yields the target lui/lw pair, whose signed low immediate resolves to the real 0x0042B550 runtime address. No instructions are emitted by the symbol annotation.

## Outcome

Matched the released tutorial section selection using the existing shared tutorial manager context and the real Tutorial_Step_Num load.
