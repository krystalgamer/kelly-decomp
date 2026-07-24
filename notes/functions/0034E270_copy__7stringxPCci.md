# copy__7stringxPCci

- Address: `0x0034E270`
- Size: `0x8C` (140 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.8571 | 22.8571 | `candidate.cpp` |
| 2 | different | 97.8571 | 100.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released string copy matched after preserving the null-string recursive call with a compiler barrier and binding it through an absolute alias so the call relocation was byte exact.

## Outcome

The released string copy matched exactly on the fourth attempt.
