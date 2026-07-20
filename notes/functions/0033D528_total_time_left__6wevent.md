# total_time_left__6wevent

- Address: `0x0033D528`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.5385 | 46.1538 | `candidate.cpp` |
| 2 | different | 61.5385 | 46.1538 | `candidate.cpp` |
| 3 | policy-invalid | 51.5625 | 37.5 | `candidate.cpp` |
| 4 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 5 | different | 51.9231 | 38.4615 | `candidate.cpp` |

### Attempt 1 notes

Used an equivalent early-return form. EE GCC omitted the target compare/branch hazard nop and laid out the zero-return path before the subtraction path, producing 48 bytes.

### Attempt 2 notes

Restored the released explicit else branch. The compiler emitted the same 48-byte branch inversion as attempt 1.

### Attempt 3 notes

Invalid attempt. It added an instruction-emitting `nop` that was absent from the released source.

### Attempt 4 notes

Invalid attempt. It replaced the released C++ condition and returns with the target instructions.

### Attempt 5 notes

Used a source-level forward branch to an explicit expired label. EE GCC still omitted the target floating-compare hazard nop and emitted 48 bytes.

## Outcome

Deferred after five attempts. No source-level reconstruction reproduced the target floating-compare hazard and branch layout, so the hand-written assembly match was removed.
