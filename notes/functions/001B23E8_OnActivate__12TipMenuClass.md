# OnActivate__12TipMenuClass

- Address: `0x001B23E8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.5484 | 77.4194 | `candidate.cpp` |
| 2 | different | 95.1613 | 80.6452 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released tip setup and resumable help branches matched after restoring the exact virtual slots and pinning virtual targets to the target call register.

## Outcome

The released tip-menu activation matched exactly on the third attempt.
