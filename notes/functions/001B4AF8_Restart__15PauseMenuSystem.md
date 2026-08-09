# Restart__15PauseMenuSystem

- Address: `0x001B4AF8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.6667 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released endDraw(true) dispatch and global retry_mode(false) call were reconstructed with exact layouts and addresses. EE GCC converted the final retry into a sibling tail call, shrinking the function to 56 bytes.

### Attempt 2 notes

The shared pause-system dispatch and a local retry-function pointer preserve
the framed `retry_mode(false)` call.

## Outcome

The manual vtable layout and compiler barrier were removed.
