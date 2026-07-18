# get_center__C12vr_billboardf

- Address: `0x002C1020`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released billboard accessor returns its shared center vector through a local absolute equate.

## Outcome

The released `vr_billboard::get_center` constant reference matched exactly on the first attempt.
