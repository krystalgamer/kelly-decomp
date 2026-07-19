# __builtin_vec_delete

- Address: `0x002AC6D0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving runtime wrapper captures the target's reduced vector-delete path to `mem_free`.

## Outcome

The target `__builtin_vec_delete` runtime wrapper matched exactly on the first attempt.
