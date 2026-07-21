# Draw__10FloatingPQif

- Address: `0x0014F5F0`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.1875 | 31.25 | `candidate.cpp` |
| 2 | different | 23.4375 | 6.25 | `candidate.cpp` |
| 3 | different | 44.7368 | 36.8421 | `candidate.cpp` |
| 4 | different | 42.1875 | 31.25 | `candidate.cpp` |
| 5 | different | 39.0625 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

Authentic condition forms could not reproduce the target floating-point compare pipeline nop; the closest source emitted 60 bytes.

### Attempt 2 notes

Authentic condition forms could not reproduce the target floating-point compare pipeline nop; the closest source emitted 60 bytes.

### Attempt 3 notes

Authentic condition forms could not reproduce the target floating-point compare pipeline nop; the closest source emitted 60 bytes.

### Attempt 4 notes

Authentic condition forms could not reproduce the target floating-point compare pipeline nop; the closest source emitted 60 bytes.

### Attempt 5 notes

Authentic condition forms could not reproduce the target floating-point compare pipeline nop; the closest source emitted 60 bytes.

## Outcome

Authentic floating-panel draw conditions consistently omit the target floating-point pipeline nop; deferred after five attempts.
