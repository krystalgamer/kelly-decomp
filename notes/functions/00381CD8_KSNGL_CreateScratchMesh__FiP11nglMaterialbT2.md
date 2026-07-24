# KSNGL_CreateScratchMesh__FiP11nglMaterialbT2

- Address: `0x00381CD8`
- Size: `0x8C` (140 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.875 | 52.5 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 88.5714 | 88.5714 | `candidate.cpp` |
| 4 | different | 88.5714 | 88.5714 | `candidate.cpp` |
| 5 | different | 65.7143 | 54.2857 | `candidate.cpp` |

## Outcome

Five source-faithful scratch-mesh candidates reproduced the body but could not match four create-mesh default-argument/prologue scheduling instructions; the best reached 88.57% byte score.
