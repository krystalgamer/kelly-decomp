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

The shared debug-menu declarations and a local final-clear pointer preserve
all three framed `ClearMenu` calls.

## Outcome

The local menu declarations and compiler barrier were removed.
