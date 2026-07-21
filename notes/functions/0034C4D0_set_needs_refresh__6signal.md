# set_needs_refresh__6signal

- Address: `0x0034C4D0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 0.0 | `candidate.cpp` |
| 2 | different | 20.3125 | 6.25 | `candidate.cpp` |
| 3 | different | 20.3125 | 6.25 | `candidate.cpp` |
| 4 | different | 20.3125 | 6.25 | `candidate.cpp` |
| 5 | different | 50.0 | 37.5 | `candidate.cpp` |

### Attempt 1 notes

The released logic tail-called the manager and used an uncarried singleton address.

### Attempt 2 notes

Correcting the signed-low singleton alias and preventing the tail call preserved this in a different register and emitted 64 bytes.

### Attempt 3 notes

The authentic static inst() accessor produced the same register allocation mismatch.

### Attempt 4 notes

A volatile singleton load did not alter the mismatched allocation.

### Attempt 5 notes

A narrow pre-call barrier improved scheduling but retained an extra this-register copy. Deferred after five attempts.

## Outcome

Authentic singleton and flag forms could not reproduce the target call scheduling and this-register allocation within five attempts.
