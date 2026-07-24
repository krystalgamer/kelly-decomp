# Update__12TrickBoxTextf

- Address: `0x0014A7B0`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.2424 | 9.0909 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released trick-box update matched after reconstructing the ten-element StringList array so the count and stride naturally matched target layout.

## Outcome

The released trick-box text update matched exactly on the second attempt.
