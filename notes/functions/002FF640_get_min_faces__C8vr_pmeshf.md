# get_min_faces__C8vr_pmeshf

- Address: `0x002FF640`
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

The released accessor returns `min_faces` from offset `0x20`.

## Outcome

The released `vr_pmesh::get_min_faces` accessor matched exactly on the first attempt.
