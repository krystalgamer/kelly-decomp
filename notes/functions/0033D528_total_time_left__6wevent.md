# total_time_left__6wevent

- Address: `0x0033D528`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.5385 | 46.1538 | `candidate.cpp` |
| 2 | different | 61.5385 | 46.1538 | `candidate.cpp` |
| 3 | different | 51.5625 | 37.5 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used an equivalent early-return form. EE GCC omitted the target compare/branch hazard nop and laid out the zero-return path before the subtraction path, producing 48 bytes.

### Attempt 2 notes

Restored the released explicit else branch. The compiler emitted the same 48-byte branch inversion as attempt 1.

### Attempt 3 notes

Materialized the expiration comparison and inserted the target nop before branching. EE GCC converted the floating condition to an integer boolean sequence and grew the function to 64 bytes.

### Attempt 4 notes

The released operation returns zero after expiration and otherwise total-minus-elapsed. Instruction-emitting inline assembly is limited to this exact floating compare/control-flow sequence because EE GCC otherwise removes the target hazard nop and inverts the two return paths; `.set noreorder` preserves precisely the target instructions.

## Outcome

The released widget-event total-time-left getter matched exactly.
