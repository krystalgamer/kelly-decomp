# set_visible__18particle_generatorb

- Address: `0x002D2C88`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.0 | 24.0 | `candidate.cpp` |
| 2 | different | 69.5652 | 56.5217 | `candidate.cpp` |
| 3 | different | 25.0 | 12.5 | `candidate.cpp` |
| 4 | different | 86.9565 | 82.6087 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact released visibility-change body, entity flag bit, particle timer offset, and entity helper declarations. Fixed intermediate/result registers plus non-tail continuation matched on attempt 5.

## Outcome

Matched particle generator visibility update
