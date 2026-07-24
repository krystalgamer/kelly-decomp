# __builtin_vec_new

- Address: `0x002AC640`
- Size: `0x6C` (108 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the allocation diagnostic file symbol, mem_malloc call, null error path, and returned pointer. It matched on attempt 1.

## Outcome

Matched builtin vector allocation
