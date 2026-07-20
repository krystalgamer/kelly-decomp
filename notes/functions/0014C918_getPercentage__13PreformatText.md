# getPercentage__13PreformatText

- Address: `0x0014C918`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.0 | 60.0 | `candidate.cpp` |
| 2 | different | 90.0 | 80.0 | `candidate.cpp` |
| 3 | different | 72.5 | 70.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a by-value aggregate-copy or FPU hazard scheduling mismatch.

### Attempt 2 notes

The explicit denominator conversion matched the hazard sequence but loaded visible-line count before actual-line count.

### Attempt 3 notes

Binding both integer counters loaded the visible count before the target start-line conversion.

### Attempt 4 notes

A minimal layout preserves the line counters at 0x54, 0x58, and 0x60 and the released percentage expression.

## Outcome

The released `PreformatText::getPercentage` implementation matched exactly.
