# FindObject__9PanelAnimPc

- Address: `0x00155108`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.4286 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released recursive PanelAnim::FindObject body and name/next declarations. Bound the released strcmp helper so the compiler tail-recursion optimization and call target match byte-exactly.

## Outcome

Matched released PanelAnim::FindObject body
