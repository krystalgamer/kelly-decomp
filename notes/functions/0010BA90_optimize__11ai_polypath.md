# optimize__11ai_polypath

- Address: `0x0010BA90`
- Size: `0x5C` (92 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released ai_polypath::optimize loop, cell vector layout, world/terrain offsets, compute_sector helper, and true high-resolution argument. It matched byte-exactly.

## Outcome

Matched released ai polypath optimization
