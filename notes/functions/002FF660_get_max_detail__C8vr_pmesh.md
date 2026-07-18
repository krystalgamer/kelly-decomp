# get_max_detail__C8vr_pmesh

- Address: `0x002FF660`
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

The released accessor returns `max_detail` from offset `0xA4`.

## Outcome

The released `vr_pmesh::get_max_detail` accessor matched exactly on the first attempt.
