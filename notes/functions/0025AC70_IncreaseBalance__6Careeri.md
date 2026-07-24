# IncreaseBalance__6Careeri

- Address: `0x0025AC70`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 72.2222 | `candidate.cpp` |
| 2 | different | 97.0588 | 94.1176 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released balance increase matched after keeping the conditional handicap setter non-tail while preserving the no-update fast epilogue.

## Outcome

The released career balance increase matched exactly on the third attempt.
