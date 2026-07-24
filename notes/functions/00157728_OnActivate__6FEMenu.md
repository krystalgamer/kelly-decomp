# OnActivate__6FEMenu

- Address: `0x00157728`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.4545 | 81.8182 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released base menu activation matched after pinning each virtual call target to the target v1 register.

## Outcome

The released frontend menu activation matched exactly on the second attempt.
