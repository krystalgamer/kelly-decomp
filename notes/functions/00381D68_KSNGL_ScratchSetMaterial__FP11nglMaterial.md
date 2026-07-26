# KSNGL_ScratchSetMaterial__FP11nglMaterial

- Address: `0x00381D68`
- Size: `0xC4` (196 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.1899 | 1.2658 | `candidate.cpp` |
| 2 | different | 33.5 | 2.0 | `candidate.cpp` |
| 3 | different | 46.9388 | 12.2449 | `candidate.cpp` |
| 4 | different | 48.9796 | 14.2857 | `candidate.cpp` |
| 5 | different | 48.9796 | 14.2857 | `candidate.cpp` |

## Outcome

Five attempts recovered material correction semantics, but the compiler would not reproduce the shipped 64-bit copy-loop schedule.
