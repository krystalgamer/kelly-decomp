# __18aggregate_vert_buf

- Address: `0x003381B0`
- Size: `0x24` (36 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/aggvertbuf.cpp`
- Reference source: `KS/SRC/aggvertbuf.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released default constructor clears all seven word-sized aggregate buffer fields.

## Outcome

The released `aggregate_vert_buf` constructor matched exactly.
