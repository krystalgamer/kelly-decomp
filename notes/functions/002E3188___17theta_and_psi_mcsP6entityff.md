# __17theta_and_psi_mcsP6entityff

- Address: `0x002E3188`
- Size: `0x6C` (108 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mcs.cpp`
- Reference source: `KS/SRC/mcs.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.2593 | 74.0741 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read motion-control base construction, theta/psi/entity member offsets, derived vtable, and zero deltas. Reordering released member initialization matched on attempt 2.

## Outcome

Matched theta and psi controller constructor
