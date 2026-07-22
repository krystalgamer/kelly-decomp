# UpdateFE__9FEManagerf

- Address: `0x00198E18`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 81.25 | 80.0 | `candidate.cpp` |
| 3 | different | 76.25 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Luna attempt 1: reviewed the immutable FrontEndManager.cpp source and tested a shared-header source-level candidate. It did not produce an exact match; see compiler and assembly artifacts.

### Attempt 2 notes

Luna attempt 2: reviewed the immutable FrontEndManager.cpp source and tested a shared-header source-level candidate. It did not produce an exact match; see compiler and assembly artifacts.

### Attempt 3 notes

Luna attempt 3: compiler-barrier scheduling variant remained non-matching; target prologue saves ra before s0 while candidate does not.

## Outcome

deferred FEManager UpdateFE after three Luna attempts
