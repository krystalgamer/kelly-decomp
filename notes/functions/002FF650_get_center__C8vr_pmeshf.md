# get_center__C8vr_pmeshf

- Address: `0x002FF650`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.h`
- Reference source: `KS/SRC/pmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns a reference to `center` at offset `0x78`.

## Outcome

The released `vr_pmesh::get_center` address calculation matched exactly on the first attempt.
