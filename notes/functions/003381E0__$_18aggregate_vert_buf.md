# _$_18aggregate_vert_buf

- Address: `0x003381E0`
- Size: `0xC8` (200 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/aggvertbuf.cpp`
- Reference source: `KS/SRC/aggvertbuf.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.0 | 28.0 | `candidate.cpp` |
| 2 | different | 38.5 | 28.0 | `candidate.cpp` |
| 3 | different | 38.5 | 28.0 | `candidate.cpp` |
| 4 | different | 20.0 | 8.0 | `candidate.cpp` |
| 5 | different | 21.5 | 10.0 | `candidate.cpp` |

## Outcome

Five attempts could not reproduce the aggregate buffer's duplicated inline refptr cleanup and destructor flattening.
