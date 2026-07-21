# KSDBMENU_KillMainMenu__Fv

- Address: `0x00236A50`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 73.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body compiled to a tail call for the third ClearMenu invocation, producing 56 rather than 60 bytes.

### Attempt 2 notes

A hand-spelled empty barrier used unsupported old-compiler syntax and failed to compile; it was replaced with the reviewed project macro.

### Attempt 3 notes

The released three ClearMenu calls match exactly when the narrow reviewed KELLY_DECOMP_COMPILER_BARRIER() suppresses the demonstrated third-call tail optimization.

## Outcome

The released three-menu cleanup matches exactly with one reviewed empty barrier preventing a demonstrated final-call tail optimization.
