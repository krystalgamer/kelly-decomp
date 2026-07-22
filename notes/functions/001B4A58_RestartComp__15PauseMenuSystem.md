# RestartComp__15PauseMenuSystem

- Address: `0x001B4A58`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.4444 | 77.7778 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 83.3333 | 100.0 | `candidate.cpp` |
| 4 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released body and shared released declarations; all operations matched, but GCC tail-called the final reset call.

### Attempt 2 notes

Attempt 2 added the required normalized empty barrier after the final call, but the isolated candidate lacked its annotation include.

### Attempt 3 notes

Attempt 3 included decomp_annotations.h and the barrier prevented the demonstrated tail-call optimization; only unresolved absolute-symbol bytes differed.

### Attempt 4 notes

Attempt 4 added non-instruction-emitting .equ aliases at the logical pointer addresses; direct assembly aliases do not apply MIPS HI16 carry adjustment, leaving the two LUI immediates low by one.

### Attempt 5 notes

Attempt 5 used the established target-carried alias values for negative low halves; the released behavior then matched exactly. The normalized empty barrier is retained solely to prevent the demonstrated tail-call optimization.

## Outcome

The competition restart matches released behavior with target-carried data aliases and one documented optimizer barrier.
