# _$_13rumbleManager

- Address: `0x00241C88`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.0 | 17.6471 | `candidate.cpp` |
| 2 | different | 35.0 | 17.6471 | `candidate.cpp` |
| 3 | different | 25.0 | 10.5263 | `candidate.cpp` |

### Attempt 1 notes

Modeled the four rumble pad clears, paused/level reset, and deleting-destructor path. A C++ destructor emitted the correct loop shape but performed deleting-flag handling before the body and tail-called delete.

### Attempt 2 notes

Used an explicit deleting-destructor ABI wrapper and pointer-based descending loop. The compiler still optimized away the target prologue and produced a 72-byte body with different register allocation.

### Attempt 3 notes

Added the project compiler barrier after __builtin_delete, restoring a normal call/epilogue but retaining the wrong initial flag handling and register allocation. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced rumbleManager state clearing but could not match the target deleting-destructor prologue, register allocation, and flag handling. No fourth attempt was run.
