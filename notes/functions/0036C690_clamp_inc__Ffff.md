# clamp_inc__Ffff

- Address: `0x0036C690`
- Size: `0x3C` (60 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.0 | 26.6667 | `candidate.cpp` |
| 2 | different | 40.0 | 26.6667 | `candidate.cpp` |
| 3 | different | 40.0 | 26.6667 | `candidate.cpp` |
| 4 | different | 40.0 | 26.6667 | `candidate.cpp` |
| 5 | different | 40.0 | 26.6667 | `candidate.cpp` |

### Attempt 1 notes

Authentic arithmetic and fabs expression variants emitted the same 52-byte logic, omitting two target floating-point pipeline nops.

### Attempt 2 notes

Authentic arithmetic and fabs expression variants emitted the same 52-byte logic, omitting two target floating-point pipeline nops.

### Attempt 3 notes

Authentic arithmetic and fabs expression variants emitted the same 52-byte logic, omitting two target floating-point pipeline nops.

### Attempt 4 notes

Authentic arithmetic and fabs expression variants emitted the same 52-byte logic, omitting two target floating-point pipeline nops.

### Attempt 5 notes

Authentic arithmetic and fabs expression variants emitted the same 52-byte logic, omitting two target floating-point pipeline nops.

## Outcome

Authentic clamp expression forms consistently omit two target floating-point pipeline nops; deferred after five attempts.
