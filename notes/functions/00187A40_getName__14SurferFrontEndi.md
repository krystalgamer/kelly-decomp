# getName__14SurferFrontEndi

- Address: `0x00187A40`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.4783 | 60.8696 | `candidate.cpp` |
| 2 | different | 83.6957 | 91.3043 | `candidate.cpp` |
| 3 | different | 90.2174 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released static getName body, static declaration, SurferData stride/name offset, and stringx ABI helpers. The explicit source-level ABI reconstruction matched on attempt 4.

## Outcome

Matched surfer frontend name lookup
