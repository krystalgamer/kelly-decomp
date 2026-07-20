# nglSetFrameLock__Ff

- Address: `0x00397540`
- Size: `0x24` (36 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 33.3333 | `candidate.cpp` |
| 2 | different | 52.7778 | 44.4444 | `candidate.cpp` |
| 3 | different | 63.8889 | 55.5556 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a register-selection, global carry, conversion, or OR-association mismatch.

### Attempt 2 notes

The second candidate isolated the remaining return, conversion, or register-allocation mismatch.

### Attempt 3 notes

The explicit conversion mnemonic assembled to a different COP1 function code and stored the divisor directly from a0.

### Attempt 4 notes

The released setter converts frames per second to the integer VBlank divisor stored globally.

## Outcome

The released `nglSetFrameLock` implementation matched exactly.
